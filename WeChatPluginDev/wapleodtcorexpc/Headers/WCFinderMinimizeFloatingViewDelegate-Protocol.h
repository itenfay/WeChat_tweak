//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCFinderMinimizeFloatingView;

@protocol WCFinderMinimizeFloatingViewDelegate <NSObject>

@optional
- (void)onFloatingViewPlayStateChanged:(_Bool)arg1;
- (void)floatingViewSizeDidChanged:(WCFinderMinimizeFloatingView *)arg1;
- (void)floatingViewDidClickMiniWindow:(WCFinderMinimizeFloatingView *)arg1 restoreView:(UIView *)arg2;
- (void)floatingViewOnClickCloseButton:(WCFinderMinimizeFloatingView *)arg1 restoreView:(UIView *)arg2;
@end

