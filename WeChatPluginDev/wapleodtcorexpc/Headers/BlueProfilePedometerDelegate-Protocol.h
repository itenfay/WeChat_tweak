//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "BlueProfileDelegate-Protocol.h"

@class BlueProfilePedometerInfo;

@protocol BlueProfilePedometerDelegate <BlueProfileDelegate>
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(BlueProfilePedometerInfo *)arg2;
@end

