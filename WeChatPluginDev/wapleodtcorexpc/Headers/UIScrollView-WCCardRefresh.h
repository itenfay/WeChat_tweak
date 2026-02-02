//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class WCShareCardListRefreshHeader;

@interface UIScrollView (WCCardRefresh)
@property(retain, nonatomic) WCShareCardListRefreshHeader *wc_header;
@property(nonatomic) double offsetY;
@property(nonatomic) double offsetX;
@property(nonatomic) double insetRight;
@property(nonatomic) double insetLeft;
@property(nonatomic) double insetBottom;
@property(nonatomic) double insetTop;
@end

