//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, WCFinderJumpInfo;

@protocol WCFinderPanelJumpInfoCarouselViewDelegate <NSObject>
- (void)onJumpCarouselViewClickButtonAction:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)onJumpCarouselViewClickBannerAction:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
@end

