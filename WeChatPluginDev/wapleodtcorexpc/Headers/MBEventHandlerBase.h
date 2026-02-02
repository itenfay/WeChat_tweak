//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBJsApiMetaInfo, MBRuntime, MagicBrushService;
@protocol IMBBizContextDelegate;

@interface MBEventHandlerBase : NSObject
{
    _Bool _isSync;
    unsigned int _invokeContextId;
    MBJsApiMetaInfo *_meta;
    id <IMBBizContextDelegate> _context;
    MBRuntime *_runtime;
    MagicBrushService *_service;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MagicBrushService *service; // @synthesize service=_service;
@property(nonatomic) __weak MBRuntime *runtime; // @synthesize runtime=_runtime;
@property(readonly, nonatomic) unsigned int invokeContextId; // @synthesize invokeContextId=_invokeContextId;
@property(readonly, nonatomic) __weak id <IMBBizContextDelegate> context; // @synthesize context=_context;
@property(readonly, nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) MBJsApiMetaInfo *meta; // @synthesize meta=_meta;
- (void)setInvokeFromContextId:(unsigned int)arg1;
- (void)setBizContext:(id)arg1;
- (void)setApiSync:(_Bool)arg1;
- (_Bool)invokeInMainThread;
- (void)runCodeInJsThreadSync:(CDUnknownBlockType)arg1;
- (void)runCodeInJsThread:(CDUnknownBlockType)arg1;
- (id)apiName;
- (id)makeReturnWithMBErrorInfo:(id)arg1 extErrMsg:(id)arg2;
- (id)makeReturnWithMBErrorInfo:(id)arg1;
- (id)makeReturnObjectFail:(long long)arg1 errMsg:(id)arg2;
- (id)makeReturnObjectOk:(id)arg1;
- (id)makeReturnObjectOkWithDictionary:(id)arg1;
- (id)makeReturnObject:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (void)dispatch:(id)arg1 paramDict:(id)arg2;
- (void)dispatch:(id)arg1 param:(id)arg2;
- (id)createObject:(id)arg1;
- (id)createObject;
- (id)getFileSystem;

@end

