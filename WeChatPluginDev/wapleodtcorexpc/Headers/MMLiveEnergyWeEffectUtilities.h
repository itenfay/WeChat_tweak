//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveEnergyWeEffectUtilities : NSObject
{
}

+ (int)occlusionSegmentConfigFromItemLevel:(long long)arg1 defaultConfig:(int)arg2;
+ (long long)occlusionSegmentItemLevelFromConfig:(int)arg1;
+ (int)faceAlignmentConfigFromItemLevel:(long long)arg1 defaultConfig:(int)arg2;
+ (long long)faceAlignmentItemLevelFromConfig:(int)arg1;
+ (_Bool)isFaceAlignmentEqualWithSettings1:(const void *)arg1 settings2:(const void *)arg2;
+ (_Bool)adjustSettings:(void *)arg1 toLevel:(long long)arg2;
+ (long long)faceAlignmentSettingsLevelFromSettings:(const void *)arg1;

@end

