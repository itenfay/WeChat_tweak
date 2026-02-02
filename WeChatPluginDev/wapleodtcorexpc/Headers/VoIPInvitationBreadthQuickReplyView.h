//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView, XImageViewRenderer;
@protocol VoIPInvitationBreadthQuickReplyViewDelegate;

@interface VoIPInvitationBreadthQuickReplyView : UIView
{
    _Bool _lookLikeInviteView;
    _Bool _isCaptureImageVisable;
    id <VoIPInvitationBreadthQuickReplyViewDelegate> _delegate;
    double _lookLikeInviteViewTitleCenterY;
    UIImageView *_backgroundView;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_phoneIconImageView;
    UILabel *_titleLabel;
    UILabel *_actionLabel;
    UIImageView *_jumpIconImageView;
    XImageViewRenderer *_renderer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XImageViewRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) UIImageView *jumpIconImageView; // @synthesize jumpIconImageView=_jumpIconImageView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *phoneIconImageView; // @synthesize phoneIconImageView=_phoneIconImageView;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isCaptureImageVisable; // @synthesize isCaptureImageVisable=_isCaptureImageVisable;
@property(nonatomic) double lookLikeInviteViewTitleCenterY; // @synthesize lookLikeInviteViewTitleCenterY=_lookLikeInviteViewTitleCenterY;
@property(nonatomic) _Bool lookLikeInviteView; // @synthesize lookLikeInviteView=_lookLikeInviteView;
@property(nonatomic) __weak id <VoIPInvitationBreadthQuickReplyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMyselfClick:(id)arg1;
- (void)layoutSubviews;
- (void)setupCaptureImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;

@end

