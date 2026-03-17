//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, WCFinderJumpInfo;

@protocol WCFinderJumpInfoLBSCardViewDelegate <NSObject>

@optional
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardDidClickCardWithJumpInfo:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)lbsCardChangeFavState:(_Bool)arg1 withJumpInfo:(WCFinderJumpInfo *)arg2;
@end

