//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AACHapticUtils : NSObject
{
}

+ (void)sendLoopParameter:(int)arg1:(int)arg2;
+ (void)playPattern:(id)arg1:(int)arg2:(int)arg3;
+ (void)playPattern:(id)arg1:(int)arg2:(int)arg3:(CDUnknownBlockType)arg4;
+ (void)playPattern:(id)arg1:(int)arg2;
+ (void)playEnvelope:(id)arg1:(id)arg2:(id)arg3:(unsigned char)arg4:(int)arg5;
+ (void)playEnvelope:(id)arg1:(id)arg2:(id)arg3:(unsigned char)arg4;
+ (long long)startPlayHapticWithHEPath:(id)arg1 delayTime:(double)arg2 Loop:(unsigned long long)arg3 error:(CDUnknownBlockType)arg4;
+ (void)playExtPrebakedForHe:(int)arg1:(int)arg2;
+ (void)playPatternWithAudio:(id)arg1:(id)arg2:(int)arg3;
+ (_Bool)start;
+ (_Bool)pause;
+ (_Bool)seekTo:(int)arg1;
+ (_Bool)isPlaying;
+ (void)stop;
+ (void)stopEngine;
+ (void)startEngine;
+ (void)quit;
+ (_Bool)sendDelayIntervalTime:(double)arg1 ID:(long long)arg2;
+ (_Bool)scheduleCurveParameterJSONString:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
+ (_Bool)scheduleParameterCurve:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
+ (_Bool)sendDynamicParametersJSONString:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
+ (_Bool)sendParameters:(id)arg1 ID:(long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
+ (long long)InsertShortSignal:(id)arg1 type:(unsigned long long)arg2 delayTime:(double)arg3 error:(CDUnknownBlockType)arg4;
+ (long long)startPlayHapticWithAHAPJsonString:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(CDUnknownBlockType)arg6;
+ (long long)startPlayHapticWithHEJsonString:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 playProgress:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
+ (long long)startPlayHapticWithHEJsonString:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(CDUnknownBlockType)arg6;
+ (long long)startPlayHapticWithHEPath:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 playProgress:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
+ (long long)startPlayHapticWithHEPath:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(CDUnknownBlockType)arg6;
+ (long long)startPlayHapticWithAhapPath:(id)arg1 mode:(unsigned long long)arg2 delayTime:(double)arg3 Loop:(unsigned long long)arg4 amplitude:(id)arg5 error:(CDUnknownBlockType)arg6;
+ (_Bool)stopCoreHaptic:(long long)arg1;
+ (_Bool)invalidPlayerID:(long long)arg1;
+ (double)getCurrentTime;
+ (_Bool)supportRichTap;

@end

