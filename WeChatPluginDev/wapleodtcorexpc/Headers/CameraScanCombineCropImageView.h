//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface CameraScanCombineCropImageView : UIView
{
    _Bool _isAnimating;
    UIImageView *_outerBorderView;
    CDUnknownBlockType _hideCompletion;
    CDUnknownBlockType _showCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType showCompletion; // @synthesize showCompletion=_showCompletion;
@property(copy, nonatomic) CDUnknownBlockType hideCompletion; // @synthesize hideCompletion=_hideCompletion;
@property(retain, nonatomic) UIImageView *outerBorderView; // @synthesize outerBorderView=_outerBorderView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (struct CGRect)adjustRectSizeIfTooCloseToScreenEdge:(struct CGRect)arg1;
- (void)resetCropImageView;
- (void)doOuterBorderViewHideAnimation;
- (void)doOuterBorderExpandAndRestoreAnimation;
- (void)doOuterBorderViewShowAnimation:(struct CGRect)arg1;
- (void)hideOuterBorderView;
- (void)showBorderView:(struct CGRect)arg1 showCompletion:(CDUnknownBlockType)arg2 hideCompletion:(CDUnknownBlockType)arg3;
- (id)init;

@end

