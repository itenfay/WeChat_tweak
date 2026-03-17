//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIViewController;

@interface UIView (YYText)
- (struct CGRect)yy_convertRect:(struct CGRect)arg1 fromViewOrWindow:(id)arg2;
- (struct CGRect)yy_convertRect:(struct CGRect)arg1 toViewOrWindow:(id)arg2;
- (struct CGPoint)yy_convertPoint:(struct CGPoint)arg1 fromViewOrWindow:(id)arg2;
- (struct CGPoint)yy_convertPoint:(struct CGPoint)arg1 toViewOrWindow:(id)arg2;
@property(readonly, nonatomic) double yy_visibleAlpha;
@property(readonly, nonatomic) UIViewController *yy_viewController;
@end

