//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, _TtC6WeChat14LocalJSXHRTask;
@protocol LocalJSEventHandlerContextDelegate;

@interface LocalJSEventHandler_BaseEvent : NSObject
{
    NSString *_callbackId;
    id <LocalJSEventHandlerContextDelegate> _context;
    NSString *_debugModuleName;
    NSString *_cgiIdentifierKey;
    NSString *_requestId;
    LocalJSEventHandler_BaseEvent *_attachEventHandler;
    NSDictionary *_extraData;
    _TtC6WeChat14LocalJSXHRTask *_xhrTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat14LocalJSXHRTask *xhrTask; // @synthesize xhrTask=_xhrTask;
@property(readonly, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) LocalJSEventHandler_BaseEvent *attachEventHandler; // @synthesize attachEventHandler=_attachEventHandler;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *cgiIdentifierKey; // @synthesize cgiIdentifierKey=_cgiIdentifierKey;
@property(copy, nonatomic) NSString *debugModuleName; // @synthesize debugModuleName=_debugModuleName;
@property(nonatomic) __weak id <LocalJSEventHandlerContextDelegate> context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
- (id)description;
- (id)getCurrentUrl;
- (id)curViewController;
- (id)webviewOwner;
- (id)webViewPluginScheduler;
- (void)endWithEvent:(id)arg1 result:(id)arg2;
- (void)endWithRetCode:(long long)arg1 errMsg:(id)arg2;
- (void)endWithErrormsg:(id)arg1;
- (void)endWithMessage:(id)arg1;
- (void)endWithParams:(id)arg1;
- (id)JSAPIName;
- (_Bool)__tryUseParallelRequestCache;
- (_Bool)useParallelRequest;
- (_Bool)enabled;
- (void)handleJSEvent:(id)arg1;
- (void)startwork:(id)arg1;

@end

