//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderPersonalCenterCollectionViewCell;

@protocol WCFinderPersonalCenterCollectionViewCellDelegate <NSObject>
- (void)personalCenterColloectionViewCellClickCreatorCenter:(WCFinderPersonalCenterCollectionViewCell *)arg1;
- (void)personalCenterColloectionViewCellClickLiveAction:(WCFinderPersonalCenterCollectionViewCell *)arg1;
- (void)personalCenterColloectionViewCellClickCameraAction:(WCFinderPersonalCenterCollectionViewCell *)arg1;
- (void)personalCenterColloectionViewCellClickPrivateMSGAction:(WCFinderPersonalCenterCollectionViewCell *)arg1;
- (void)personalCenterColloectionViewCellClickMentionAction:(WCFinderPersonalCenterCollectionViewCell *)arg1;
- (void)personalCenterColloectionViewCellClickMemberMsgAction:(WCFinderPersonalCenterCollectionViewCell *)arg1;
@end

