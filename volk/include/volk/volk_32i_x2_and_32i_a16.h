#ifndef INCLUDED_volk_32i_x2_and_32i_a16_H
#define INCLUDED_volk_32i_x2_and_32i_a16_H

#include <inttypes.h>
#include <stdio.h>

#if LV_HAVE_SSE
#include <xmmintrin.h>
/*!
  \brief Ands the two input vectors and store their results in the third vector
  \param cVector The vector where the results will be stored
  \param aVector One of the vectors
  \param bVector One of the vectors
  \param num_points The number of values in aVector and bVector to be anded together and stored into cVector
*/
static inline void volk_32i_x2_and_32i_a16_sse(int32_t* cVector, const int32_t* aVector, const int32_t* bVector, unsigned int num_points){
    unsigned int number = 0;
    const unsigned int quarterPoints = num_points / 4;

    float* cPtr = (float*)cVector;
    const float* aPtr = (float*)aVector;
    const float* bPtr = (float*)bVector;

    __m128 aVal, bVal, cVal;
    for(;number < quarterPoints; number++){
      
      aVal = _mm_load_ps(aPtr); 
      bVal = _mm_load_ps(bPtr);
      
      cVal = _mm_and_ps(aVal, bVal); 
      
      _mm_store_ps(cPtr,cVal); // Store the results back into the C container

      aPtr += 4;
      bPtr += 4;
      cPtr += 4;
    }

    number = quarterPoints * 4;
    for(;number < num_points; number++){
      cVector[number] = aVector[number] & bVector[number];
    }
}
#endif /* LV_HAVE_SSE */

#if LV_HAVE_GENERIC
/*!
  \brief Ands the two input vectors and store their results in the third vector
  \param cVector The vector where the results will be stored
  \param aVector One of the vectors
  \param bVector One of the vectors
  \param num_points The number of values in aVector and bVector to be anded together and stored into cVector
*/
static inline void volk_32i_x2_and_32i_a16_generic(int32_t* cVector, const int32_t* aVector, const int32_t* bVector, unsigned int num_points){
    int32_t* cPtr = cVector;
    const int32_t* aPtr = aVector;
    const int32_t* bPtr=  bVector;
    unsigned int number = 0;

    for(number = 0; number < num_points; number++){
      *cPtr++ = (*aPtr++) & (*bPtr++);
    }
}
#endif /* LV_HAVE_GENERIC */

#if LV_HAVE_ORC
/*!
  \brief Ands the two input vectors and store their results in the third vector
  \param cVector The vector where the results will be stored
  \param aVector One of the vectors
  \param bVector One of the vectors
  \param num_points The number of values in aVector and bVector to be anded together and stored into cVector
*/
extern void volk_32i_x2_and_32i_a16_orc_impl(int32_t* cVector, const int32_t* aVector, const int32_t* bVector, unsigned int num_points);
static inline void volk_32i_x2_and_32i_a16_orc(int32_t* cVector, const int32_t* aVector, const int32_t* bVector, unsigned int num_points){
    volk_32i_x2_and_32i_a16_orc_impl(cVector, aVector, bVector, num_points);
}
#endif /* LV_HAVE_ORC */


#endif /* INCLUDED_volk_32i_x2_and_32i_a16_H */
