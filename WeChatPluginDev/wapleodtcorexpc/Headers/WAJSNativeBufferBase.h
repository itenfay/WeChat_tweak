//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSContext, NSMutableArray, NSMutableDictionary;

@interface WAJSNativeBufferBase : NSObject
{
    unsigned int _bufferIDSequence;
    NSMutableDictionary *_dicID2Buffer;
    NSMutableDictionary *_dicBufferUrl;
    _Bool _useCompatibleModeConvertData;
    _Bool _responseUseBase64;
    _Bool _responseUseTextEncoder;
    unsigned int _nativeBufferSizeLimit;
    unsigned int _nativeBufferQueueLimit;
    JSContext *_context;
    NSMutableDictionary *_mapArrayBuffer;
    NSMutableArray *_pendingJITResult;
    NSObject *_pendingJITResultLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *pendingJITResultLock; // @synthesize pendingJITResultLock=_pendingJITResultLock;
@property(retain, nonatomic) NSMutableArray *pendingJITResult; // @synthesize pendingJITResult=_pendingJITResult;
@property(retain, nonatomic) NSMutableDictionary *mapArrayBuffer; // @synthesize mapArrayBuffer=_mapArrayBuffer;
@property(nonatomic) _Bool responseUseTextEncoder; // @synthesize responseUseTextEncoder=_responseUseTextEncoder;
@property(nonatomic) _Bool responseUseBase64; // @synthesize responseUseBase64=_responseUseBase64;
@property unsigned int nativeBufferQueueLimit; // @synthesize nativeBufferQueueLimit=_nativeBufferQueueLimit;
@property unsigned int nativeBufferSizeLimit; // @synthesize nativeBufferSizeLimit=_nativeBufferSizeLimit;
@property _Bool useCompatibleModeConvertData; // @synthesize useCompatibleModeConvertData=_useCompatibleModeConvertData;
@property(retain) JSContext *context; // @synthesize context=_context;
- (id)getDataFromObject:(id)arg1;
- (void)removeBufferObject:(id)arg1;
- (id)createBufferObject:(id)arg1;
- (void *)getBufferFromObject:(id)arg1 length:(long long *)arg2;
- (_Bool)removeBufferObject:(id)arg1 context:(struct OpaqueJSContext *)arg2;
- (id)createBufferObject:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
- (id)genBufferID;
- (id)packJITResult:(id)arg1;
- (unsigned int)pendingJITResultCount;
- (id)popPendingJITResults;
- (void)appendJITResult:(id)arg1 callbackID:(unsigned int)arg2;
- (id)parseNative2SdkNativeBufferParam:(id)arg1 getError:(id *)arg2 useBase64:(_Bool)arg3;
- (id)parseInvokeHandlerNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (id)nativeBufferParamSpecificKey;
- (unsigned int)nativeBufferTotalSize;
- (id)getBufferItem:(id)arg1;
- (id)popNativeBuffer:(id)arg1;
- (void)executeOnWorker:(unsigned int)arg1 invoker:(id)arg2;
- (id)addSharedBuffer:(void *)arg1 length:(unsigned long long)arg2;
- (id)addNativeBuffer:(id)arg1;
- (void)runNextItem:(id)arg1;
- (void)checkNextLock:(id)arg1;
- (_Bool)checkCanWrite:(id)arg1 workerId:(unsigned int)arg2;
- (_Bool)checkCanRead:(id)arg1 workerId:(unsigned int)arg2;
- (void)releaseLock:(id)arg1 itemId:(unsigned int)arg2;
- (void)setupSharedBufferExtention:(id)arg1 workerId:(unsigned int)arg2;
- (void)injectWeiXinNativeBuffer:(id)arg1 isShared:(_Bool)arg2 workerId:(unsigned int)arg3;
- (id)getSharedBuffers;
- (void)setupWeixinSharedBuffer:(id)arg1 workerId:(unsigned int)arg2 buffers:(id)arg3;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)insertNativeArrayBuffer:(int)arg1 bufferId:(int *)arg2;
- (void)removeNativeArrayBuffer:(int)arg1;
- (void)injectWeiXinArrayBuffer:(id)arg1;
- (id)getArrayBuffer:(unsigned int)arg1;
- (id)init;

@end

