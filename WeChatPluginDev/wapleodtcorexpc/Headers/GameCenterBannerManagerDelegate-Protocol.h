//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol GameCenterBannerManagerDelegate <NSObject>
- (void)bannerStateDidChanged;
- (_Bool)isNoAutoExpand;
- (double)visiableHeight;
- (double)viewHeight;
- (void)viewNeedsLayout;
- (double)navigationAreaHeight;
- (UIScrollView *)anotherPartScrollView;
- (UIScrollView *)bannerContainerView;
@end

