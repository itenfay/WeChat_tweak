//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UDRReportHelper
{
    NSObject<OS_dispatch_queue> *_queue;
    double randomNum;
}

- (void).cxx_destruct;
- (void)report30863:(id)arg1 resourceName:(id)arg2 version:(long long)arg3 scene:(long long)arg4 state:(long long)arg5 errNo:(long long)arg6 errCode:(long long)arg7 duration:(long long)arg8 sampleRate:(float)arg9;
- (unsigned char)sampleReport:(float)arg1;
- (unsigned char)getDuration:(unsigned int)arg1;
- (void)report30863UserClean:(id)arg1;
- (void)report30863Clean:(id)arg1 name:(id)arg2 version:(int)arg3;
- (void)report30863Update:(id)arg1 state:(int)arg2 errNo:(int)arg3 errCode:(int)arg4 timeStamp:(unsigned int)arg5 sampleRate:(float)arg6;
- (void)report30863Download:(id)arg1 state:(int)arg2 errNo:(int)arg3 errCode:(int)arg4 timeStamp:(unsigned int)arg5 sampleRate:(float)arg6;
- (void)report30863CheckFail:(id)arg1 reqItems:(id)arg2 scene:(long long)arg3 state:(int)arg4 errNo:(int)arg5 errCode:(int)arg6 timeStamp:(unsigned int)arg7;
- (void)report30863Check:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4 state:(int)arg5 errNo:(int)arg6 errCode:(int)arg7 timeStamp:(unsigned int)arg8 sampleRate:(float)arg9;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

