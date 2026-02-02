//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCEliminatedSlotMMKV, WebviewJSEventHandlerFacade;
@protocol MMClientJsApiHandlerDelegate;

@interface MMClientJsApiHandler : NSObject
{
    _Bool _disableInvokeApi;
    _Bool _disableCgiApi;
    NSString *_bizType;
    long long _basePkgVersion;
    long long _bizPkgVersion;
    NSArray *_allowedCgiList;
    NSString *_bizDomain;
    NSString *_canvasId;
    id <MMClientJsApiHandlerDelegate> _delegate;
    WebviewJSEventHandlerFacade *_jsEventHandler;
    WCEliminatedSlotMMKV *_slotKv;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _cgiCallbackBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cgiCallbackBlock; // @synthesize cgiCallbackBlock=_cgiCallbackBlock;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) WCEliminatedSlotMMKV *slotKv; // @synthesize slotKv=_slotKv;
@property(retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler; // @synthesize jsEventHandler=_jsEventHandler;
@property(nonatomic) __weak id <MMClientJsApiHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(copy, nonatomic) NSString *bizDomain; // @synthesize bizDomain=_bizDomain;
@property(retain, nonatomic) NSArray *allowedCgiList; // @synthesize allowedCgiList=_allowedCgiList;
@property(nonatomic) _Bool disableCgiApi; // @synthesize disableCgiApi=_disableCgiApi;
@property(nonatomic) _Bool disableInvokeApi; // @synthesize disableInvokeApi=_disableInvokeApi;
@property(nonatomic) long long bizPkgVersion; // @synthesize bizPkgVersion=_bizPkgVersion;
@property(nonatomic) long long basePkgVersion; // @synthesize basePkgVersion=_basePkgVersion;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)webviewController;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)doCommenCGIWithCmdId:(long long)arg1 cgiUrl:(id)arg2 reqProtoBuf:(id)arg3 callback:(id)arg4;
- (void)addApi_cgi:(id)arg1;
- (void)reportInvokeJsapi:(id)arg1;
- (void)addApi_invoke:(id)arg1;
- (void)addApi_getLocalData:(id)arg1;
- (void)addApi_setLocalData:(id)arg1;
- (void)addApi_getBizPkgVersion:(id)arg1;
- (void)addApi_getBasePkgVersion:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

