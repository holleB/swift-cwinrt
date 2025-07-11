// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange;

#endif // ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsRemoteSystem)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_AppUserModelId)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_ExecutableFileName)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionVtbl;

    interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObjectVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Connection)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject* This,
        __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnection** value);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObjectVtbl;

    interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObjectVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationConnectionBoundObject_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElementVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsRemoteSystem)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_AppUserModelId)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_ExecutableFileName)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElementVtbl;

    interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElementVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationElement_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRangeVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange* This,
            TrustLevel* trustLevel);
    
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRangeVtbl;

    interface __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRangeVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange;
#endif /* !defined(____x_ABI_CWindows_CUI_CUIAutomation_CIAutomationTextRange_INTERFACE_DEFINED__) */
    
