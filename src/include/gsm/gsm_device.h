/**
 * \file            gsm_device.h
 * \brief           Device specific include
 */

/*
 * Copyright (c) 2018 Tilen Majerle
 *  
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software, 
 * and to permit persons to whom the Software is furnished to do so, 
 * subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of GSM-AT.
 *
 * Author:          Tilen MAJERLE <tilen@majerle.eu>
 */
#ifndef __GSM_DEVICE_H
#define __GSM_DEVICE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "gsm/gsm.h"

/**
 * \ingroup			GSM
 * \defgroup        GSM_DEVICE GSM Device
 * \brief           GSM device driver implementation
 * \{
 */

/* For SMS */
uint8_t     gsm_device_set_sms_ready(uint8_t ready);

/* For call */
uint8_t     gsm_device_set_call_ready(uint8_t ready);

/* For network */
uint8_t     gsm_device_set_ip(gsm_ip_t* ip);
uint8_t     gsm_device_set_network_ready(uint8_t ready);

/**
 * \}
 */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __GSM_DEVICE_H */
