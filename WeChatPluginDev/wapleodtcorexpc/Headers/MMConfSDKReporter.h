//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMConfSDKReporter : NSObject
{
}

+ (void)setTalkViewAndAudioDevieTimestamp:(unsigned long long)arg1 SuccRec:(unsigned long long)arg2 starRec:(unsigned long long)arg3 startPlay:(unsigned long long)arg4;
+ (void)setAudioSysinterrupTimestamp:(unsigned long long)arg1 beginTs:(unsigned long long)arg2 InterCnt:(unsigned int)arg3;
+ (void)resetAll;
+ (id)generateReport;
+ (void)setAudioMicAbnormal:(int)arg1;
+ (void)setAudioPlayInitStatus:(int)arg1 recorderErrCode:(int)arg2 playerErrCode:(int)arg3;
+ (void)setAudioEndStatusWithPlayCallNum:(int)arg1;
+ (void)setAudioEndStatusWithRecordReadNum:(int)arg1 playVolume:(int)arg2;
+ (void)setVideoDeviceErrCode:(int)arg1;

@end

