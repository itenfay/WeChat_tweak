//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AudioPlayerReport : NSObject
{
}

+ (void)reportIdkeyFixEarVolumeSucc;
+ (void)reportIdkeyTryFixEarVolume;
+ (void)reportIdkeyProximityStateError;
+ (void)reportIdkeyLaunchDevice:(unsigned long long)arg1;
+ (void)reportIdkeyLaunchLineDevice;
+ (void)reportIdkeyQueueSecondStartSuccess;
+ (void)reportIdkeyLaunchWirelessDeivce;
+ (void)reportIdkeySwitchToEarPhone;
+ (void)reportIdKeyStartWithSpeaker;
+ (void)reportIdkeyStartWithEarPhone;
+ (void)reportIdkeyManualStop;
+ (void)reportIdkeyLaunchSuccess;
+ (void)reportIdkeyQueueStartFailedSecond;
+ (void)reportIdkeyQueueStartFailedFirst;
+ (void)reportIdkeyStartLaunch;

@end

