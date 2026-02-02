//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderStreamProfileExtInfo;

@protocol WCFinderStreamProfileExt <NSObject>

@optional
- (void)onProfileExtInfoMemberShipInfoChanged;
- (void)onProfileExtInfoCoverChanged:(WCFinderStreamProfileExtInfo *)arg1;
- (void)onProfileExtInfoTabFlagChanged:(WCFinderStreamProfileExtInfo *)arg1;
- (void)onChangeFollowStatusWithTid:(NSString *)arg1 targetFollowState:(unsigned long long)arg2;
@end

