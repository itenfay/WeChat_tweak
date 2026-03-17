//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol SessionNearbyTabSwitchExt <NSObject>

@optional
- (void)onNearbyLifeSubTabDisappear:(unsigned long long)arg1;
- (void)onNearbyLifeSubTabAppear:(unsigned long long)arg1;
- (void)onNearbyLiveSubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyLiveSubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyTabDisappear:(unsigned long long)arg1;
- (void)onNearbyTabAppear:(unsigned long long)arg1;
@end

