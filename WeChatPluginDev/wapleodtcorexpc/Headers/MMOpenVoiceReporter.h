//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMOpenVoiceReporter : NSObject
{
}

+ (void)resetAll;
+ (id)generateReport;
+ (void)setAudioMicAbnormal:(int)arg1;
+ (void)setAudioPlayInitStatus:(int)arg1 recorderErrCode:(int)arg2 playerErrCode:(int)arg3;
+ (void)setAudioEndStatusWithPlayCallNum:(int)arg1;
+ (void)setAudioEndStatusWithRecordReadNum:(int)arg1 playVolume:(int)arg2;

@end

