//**********************************************************************`
//* This is an include file generated by Message Compiler.             *`
//*                                                                    *`
//* Copyright (c) Microsoft Corporation. All Rights Reserved.          *`
//**********************************************************************`
#pragma once
//+
// Provider Microsoft-Windows-ETWProvider Event Count 2
//+
EXTERN_C __declspec(selectany) const GUID ProviderGuid = {0x9bf382b7, 0x45b9, 0x4de4, {0x8b, 0xe6, 0xb2, 0x04, 0xf0, 0x9b, 0x96, 0xf3}};

//
// Event Descriptors
//
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR LogEvent = {0x1, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0};
#define LogEvent_value 0x1
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR ErrEvent = {0x2, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0};
#define ErrEvent_value 0x2
