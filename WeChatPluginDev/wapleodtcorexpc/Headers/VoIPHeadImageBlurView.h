//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MultiTalkHDHeadView, UIImageView;

@interface VoIPHeadImageBlurView : UIView
{
    _Bool _shouldIgnoreHeadViewCenterYCompatibilityInSmall;
    int _scene;
    UIImageView *_blurView;
    MultiTalkHDHeadView *_headImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool shouldIgnoreHeadViewCenterYCompatibilityInSmall; // @synthesize shouldIgnoreHeadViewCenterYCompatibilityInSmall=_shouldIgnoreHeadViewCenterYCompatibilityInSmall;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
- (void)layoutBackground;
- (void)updateViewInfo:(id)arg1 scene:(int)arg2;
- (void)updateScene:(int)arg1;
- (void)layoutHeadView;
- (void)layoutBlurView;
- (void)layoutSubviews;
- (void)initView;
- (id)init;

@end

