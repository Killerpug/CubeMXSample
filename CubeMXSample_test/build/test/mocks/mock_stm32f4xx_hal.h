/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_STM32F4XX_HAL_H
#define _MOCK_STM32F4XX_HAL_H

#include "unity.h"
#include "stm32f4xx_hal.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_stm32f4xx_hal_Init(void);
void mock_stm32f4xx_hal_Destroy(void);
void mock_stm32f4xx_hal_Verify(void);




#define HAL_Init_Ignore() HAL_Init_CMockIgnore()
void HAL_Init_CMockIgnore(void);
#define HAL_Init_StopIgnore() HAL_Init_CMockStopIgnore()
void HAL_Init_CMockStopIgnore(void);
#define HAL_Init_Expect() HAL_Init_CMockExpect(__LINE__)
void HAL_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_HAL_Init_CALLBACK)(int cmock_num_calls);
void HAL_Init_AddCallback(CMOCK_HAL_Init_CALLBACK Callback);
void HAL_Init_Stub(CMOCK_HAL_Init_CALLBACK Callback);
#define HAL_Init_StubWithCallback HAL_Init_Stub
#define HAL_RCC_OscConfig_IgnoreAndReturn(cmock_retval) HAL_RCC_OscConfig_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_RCC_OscConfig_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_RCC_OscConfig_StopIgnore() HAL_RCC_OscConfig_CMockStopIgnore()
void HAL_RCC_OscConfig_CMockStopIgnore(void);
#define HAL_RCC_OscConfig_ExpectAndReturn(RCC_OscInitStruct, cmock_retval) HAL_RCC_OscConfig_CMockExpectAndReturn(__LINE__, RCC_OscInitStruct, cmock_retval)
void HAL_RCC_OscConfig_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RCC_OscInitTypeDef* RCC_OscInitStruct, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_RCC_OscConfig_CALLBACK)(RCC_OscInitTypeDef* RCC_OscInitStruct, int cmock_num_calls);
void HAL_RCC_OscConfig_AddCallback(CMOCK_HAL_RCC_OscConfig_CALLBACK Callback);
void HAL_RCC_OscConfig_Stub(CMOCK_HAL_RCC_OscConfig_CALLBACK Callback);
#define HAL_RCC_OscConfig_StubWithCallback HAL_RCC_OscConfig_Stub
#define HAL_GPIO_TogglePin_Ignore() HAL_GPIO_TogglePin_CMockIgnore()
void HAL_GPIO_TogglePin_CMockIgnore(void);
#define HAL_GPIO_TogglePin_StopIgnore() HAL_GPIO_TogglePin_CMockStopIgnore()
void HAL_GPIO_TogglePin_CMockStopIgnore(void);
#define HAL_GPIO_TogglePin_Expect(GPIOx, GPIO_Pin) HAL_GPIO_TogglePin_CMockExpect(__LINE__, GPIOx, GPIO_Pin)
void HAL_GPIO_TogglePin_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
typedef void (* CMOCK_HAL_GPIO_TogglePin_CALLBACK)(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_TogglePin_AddCallback(CMOCK_HAL_GPIO_TogglePin_CALLBACK Callback);
void HAL_GPIO_TogglePin_Stub(CMOCK_HAL_GPIO_TogglePin_CALLBACK Callback);
#define HAL_GPIO_TogglePin_StubWithCallback HAL_GPIO_TogglePin_Stub
#define HAL_RCC_ClockConfig_IgnoreAndReturn(cmock_retval) HAL_RCC_ClockConfig_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_RCC_ClockConfig_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_RCC_ClockConfig_StopIgnore() HAL_RCC_ClockConfig_CMockStopIgnore()
void HAL_RCC_ClockConfig_CMockStopIgnore(void);
#define HAL_RCC_ClockConfig_ExpectAndReturn(RCC_ClkInitStruct, FLatency, cmock_retval) HAL_RCC_ClockConfig_CMockExpectAndReturn(__LINE__, RCC_ClkInitStruct, FLatency, cmock_retval)
void HAL_RCC_ClockConfig_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RCC_ClkInitTypeDef* RCC_ClkInitStruct, uint32_t FLatency, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_RCC_ClockConfig_CALLBACK)(RCC_ClkInitTypeDef* RCC_ClkInitStruct, uint32_t FLatency, int cmock_num_calls);
void HAL_RCC_ClockConfig_AddCallback(CMOCK_HAL_RCC_ClockConfig_CALLBACK Callback);
void HAL_RCC_ClockConfig_Stub(CMOCK_HAL_RCC_ClockConfig_CALLBACK Callback);
#define HAL_RCC_ClockConfig_StubWithCallback HAL_RCC_ClockConfig_Stub
#define HAL_GPIO_WritePin_Ignore() HAL_GPIO_WritePin_CMockIgnore()
void HAL_GPIO_WritePin_CMockIgnore(void);
#define HAL_GPIO_WritePin_StopIgnore() HAL_GPIO_WritePin_CMockStopIgnore()
void HAL_GPIO_WritePin_CMockStopIgnore(void);
#define HAL_GPIO_WritePin_Expect(GPIOx, GPIO_Pin, PinState) HAL_GPIO_WritePin_CMockExpect(__LINE__, GPIOx, GPIO_Pin, PinState)
void HAL_GPIO_WritePin_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
typedef void (* CMOCK_HAL_GPIO_WritePin_CALLBACK)(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState, int cmock_num_calls);
void HAL_GPIO_WritePin_AddCallback(CMOCK_HAL_GPIO_WritePin_CALLBACK Callback);
void HAL_GPIO_WritePin_Stub(CMOCK_HAL_GPIO_WritePin_CALLBACK Callback);
#define HAL_GPIO_WritePin_StubWithCallback HAL_GPIO_WritePin_Stub
#define HAL_GPIO_Init_Ignore() HAL_GPIO_Init_CMockIgnore()
void HAL_GPIO_Init_CMockIgnore(void);
#define HAL_GPIO_Init_StopIgnore() HAL_GPIO_Init_CMockStopIgnore()
void HAL_GPIO_Init_CMockStopIgnore(void);
#define HAL_GPIO_Init_Expect(GPIOx, GPIO_Init) HAL_GPIO_Init_CMockExpect(__LINE__, GPIOx, GPIO_Init)
void HAL_GPIO_Init_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_Init);
typedef void (* CMOCK_HAL_GPIO_Init_CALLBACK)(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_Init, int cmock_num_calls);
void HAL_GPIO_Init_AddCallback(CMOCK_HAL_GPIO_Init_CALLBACK Callback);
void HAL_GPIO_Init_Stub(CMOCK_HAL_GPIO_Init_CALLBACK Callback);
#define HAL_GPIO_Init_StubWithCallback HAL_GPIO_Init_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
