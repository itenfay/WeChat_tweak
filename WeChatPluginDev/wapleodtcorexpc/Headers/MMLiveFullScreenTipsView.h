//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, MMUILabel, UIButton, UIImageView;
@protocol MMLiveFullScreenTipsViewDelegate;

@interface MMLiveFullScreenTipsView : UIView
{
    MMLiveTaskId *_taskId;
    UIView *_blurBackgroundView;
    UIImageView *_iconImageView;
    MMUILabel *_fullViewTipsTitleLabel;
    MMUILabel *_fullViewTipsDescLabel;
    UIButton *_closeButton;
    id <MMLiveFullScreenTipsViewDelegate> _delegate;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <MMLiveFullScreenTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *fullViewTipsDescLabel; // @synthesize fullViewTipsDescLabel=_fullViewTipsDescLabel;
@property(retain, nonatomic) MMUILabel *fullViewTipsTitleLabel; // @synthesize fullViewTipsTitleLabel=_fullViewTipsTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onCloseButtonClicked:(id)arg1;
- (void)relayout;
- (void)setCloseButtonColor:(id)arg1 andTitleColor:(id)arg2;
- (void)showInView:(id)arg1 titleWording:(id)arg2 descWording:(id)arg3;
- (void)layoutCloseButton;
- (void)layoutBlurBackgroundView;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2 delegate:(id)arg3;

@end

