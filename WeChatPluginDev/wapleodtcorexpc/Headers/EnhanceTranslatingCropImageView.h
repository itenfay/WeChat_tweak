//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface EnhanceTranslatingCropImageView : UIView
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
- (void)resetCropImageView;
- (void)hideOuterBorderView;
- (void)doOuterBorderHideAnimation:(struct CGRect)arg1;
- (void)doOuterBorderExpandAnimation:(struct CGRect)arg1;
- (void)doOuterBorderShowAnimation:(struct CGRect)arg1;
- (void)drawRoundCorner:(struct CGContext *)arg1 vetrix:(struct CGPoint)arg2 leftVetrix:(struct CGPoint)arg3 rightVetrix:(struct CGPoint)arg4;
- (void)updateOuterBorderView:(struct CGRect)arg1 leftTop:(struct CGPoint)arg2 rightTop:(struct CGPoint)arg3 leftBottom:(struct CGPoint)arg4 rightBottom:(struct CGPoint)arg5;
- (void)showBorderView:(struct CGPoint)arg1 rightTop:(struct CGPoint)arg2 leftBottom:(struct CGPoint)arg3 rightBottom:(struct CGPoint)arg4 showCompletion:(CDUnknownBlockType)arg5 hideCompletion:(CDUnknownBlockType)arg6;
- (id)init;

@end

