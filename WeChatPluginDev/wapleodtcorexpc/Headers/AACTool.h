//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AACTool : NSObject
{
}

+ (id)hapticQueue;
+ (id)resumeAtTime:(int)arg1 model:(id)arg2;
+ (id)resumeSystemVibrationAtTime:(int)arg1 model:(id)arg2;
+ (id)replyDataAndTime;
+ (double)getDuration:(long long)arg1;
+ (double)getAHAPModelDuration:(id)arg1;
+ (double)getHE2ModelDuration:(id)arg1;
+ (id)splitArray:(id)arg1 withSubSize:(int)arg2;
+ (_Bool)containTransientAndContinuous:(id)arg1;
+ (id)AHAPModelToDic:(id)arg1 error:(id)arg2;
+ (id)parameterConversion2AHAP:(int)arg1:(int)arg2;
+ (void)baseHeModelToAHAPPattern:(id)arg1:(long long)arg2:(id)arg3;
+ (id)HeDicAry2SystemVibrationAry:(id)arg1 measureRatio:(float)arg2;
+ (id)He2Model2AHAP:(id)arg1;
+ (id)HeModel2AHAP:(id)arg1;
+ (id)convertToJsonData:(id)arg1;
+ (_Bool)judgeFileExist:(id)arg1 type:(id)arg2;
+ (_Bool)isJsonString:(id)arg1;
+ (_Bool)applicationIsActive;
+ (_Bool)supportsHaptics;
+ (_Bool)isSupport3DTouch;

@end

