//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class FinderJumpInfo_Style, UIView, WCFinderJumpInfo, WCFinderJumpInfoCombinationView;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderJumpInfoCombinationViewDelegate <WCFinderJumpInfoViewBaseDelegate>
- (UIView<WCFinderJumpInfoViewProtocol> *)jumpInfoViewWithJumpInfo:(WCFinderJumpInfo *)arg1 subStyle:(FinderJumpInfo_Style *)arg2;
- (void)onFinderJumpInfoCombinationViewDidClick:(WCFinderJumpInfoCombinationView *)arg1;
@end

