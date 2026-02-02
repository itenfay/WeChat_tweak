//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol MMMsgTipsExpandViewDelegate;

@interface MMMsgTipsExpandView : UIView
{
    _Bool _showBottomGradientMask;
    _Bool _isAnimating;
    id <MMMsgTipsExpandViewDelegate> _expandViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool showBottomGradientMask; // @synthesize showBottomGradientMask=_showBottomGradientMask;
@property(nonatomic) __weak id <MMMsgTipsExpandViewDelegate> expandViewDelegate; // @synthesize expandViewDelegate=_expandViewDelegate;
- (void)onCustomHeaderButtonClick;
- (id)customHeaderButton;
- (void)onExpandViewDisappear;
- (void)hideExpandView:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

