//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class MMUIViewController, UIColor, UIView;

@protocol WNSelectionViewDelegate <MMUIViewControllerDelegate>
- (double)getToolBarY;
- (long long)currentOrientation;
- (_Bool)isOnContentSearching;
- (void)scrollRectToVisible:(struct CGRect)arg1 fromView:(UIView *)arg2;
- (struct CGRect)getSelectionMenuTargetRectOnFirstResponder;
- (void)updateSelection;
- (UIColor *)getBackgroundColor;
- (MMUIViewController *)getCurrentViewController;
- (void)setPopGestureEnable:(_Bool)arg1;
- (_Bool)bEditable;
@end

