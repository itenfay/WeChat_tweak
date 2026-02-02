//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MBEventHandler_operateMediaRecorder
{
}

- (_Bool)invokeInMainThread;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer *)arg4;
- (void)removeCtxForOpId:(id)arg1;
- (void)callbackErrMsg:(id)arg1;
- (void)resume:(id)arg1 opId:(id)arg2;
- (void)pause:(id)arg1 opId:(id)arg2;
- (void)abort:(id)arg1 opId:(id)arg2;
- (void)stop:(id)arg1 opId:(id)arg2;
- (void)start:(id)arg1 opId:(id)arg2;
- (void)invoke:(id)arg1;
- (id)apiName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

