//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WCAdURLImageView, WCAdvertiseInfo, WCCanvasComponent, WCCanvasComponentRedEnvelopInfo, WCCanvasComponentRedEnvelopSubCardInfo, WCCanvasRedEnvelopComponentAvatarView;
@protocol WCCanvasComponentDelegate, WCCanvasRedEnvelopComponentCardDelegate;

@interface WCCanvasRedEnvelopComponentCardView : UIView
{
    int _baseType;
    id <WCCanvasRedEnvelopComponentCardDelegate> _delegate;
    WCAdvertiseInfo *_advertiseInfo;
    long long _orientation;
    id <WCCanvasComponentDelegate> _canvasDelegate;
    WCCanvasComponentRedEnvelopInfo *_baseCardInfo;
    WCCanvasComponentRedEnvelopSubCardInfo *_subCardInfo;
    UIImageView *_bgImageView;
    UILabel *_headlineView;
    WCCanvasRedEnvelopComponentAvatarView *_avatarView;
    UILabel *_titleView;
    UILabel *_descView;
    WCAdURLImageView *_redEnvelopView;
    WCCanvasComponent *_redEnvelopVideoView;
    UILabel *_redEnvelopBottomDescView;
    UIImageView *_redEnvelopBottomImageView;
    UIButton *_actionBtn;
    WCCanvasComponent *_shareComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponent *shareComponent; // @synthesize shareComponent=_shareComponent;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIImageView *redEnvelopBottomImageView; // @synthesize redEnvelopBottomImageView=_redEnvelopBottomImageView;
@property(retain, nonatomic) UILabel *redEnvelopBottomDescView; // @synthesize redEnvelopBottomDescView=_redEnvelopBottomDescView;
@property(retain, nonatomic) WCCanvasComponent *redEnvelopVideoView; // @synthesize redEnvelopVideoView=_redEnvelopVideoView;
@property(retain, nonatomic) WCAdURLImageView *redEnvelopView; // @synthesize redEnvelopView=_redEnvelopView;
@property(retain, nonatomic) UILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCCanvasRedEnvelopComponentAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *headlineView; // @synthesize headlineView=_headlineView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) WCCanvasComponentRedEnvelopSubCardInfo *subCardInfo; // @synthesize subCardInfo=_subCardInfo;
@property(retain, nonatomic) WCCanvasComponentRedEnvelopInfo *baseCardInfo; // @synthesize baseCardInfo=_baseCardInfo;
@property(nonatomic) int baseType; // @synthesize baseType=_baseType;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(nonatomic) __weak id <WCCanvasRedEnvelopComponentCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encoreShakeResetSpecialView;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)cardReportAddExposureCount;
- (void)canvasCloseBtnClick;
- (void)cardWillStopState:(_Bool)arg1;
- (void)cardWillResumeState:(_Bool)arg1;
- (void)cardWillEnterForeground;
- (void)cardDidEnterBackground;
- (void)cardAppearFactorChagneInMainScreen;
- (void)cardWillDisappearInMainScreen:(_Bool)arg1;
- (void)cardWillAppearInMainScreen:(_Bool)arg1;
- (void)cardDidFullyAppearInMainScreen:(_Bool)arg1;
- (int)componentCardSubtype;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)updateCardViewWithStatus:(unsigned int)arg1 opType:(unsigned int)arg2;
- (void)removeShadowFromView;
- (void)setShadowToView;
- (void)onActionButtonClicked;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3 delegate:(id)arg4 canvasDelegate:(id)arg5 baseType:(int)arg6 baseCardInfo:(id)arg7 subCardInfo:(id)arg8;

@end

