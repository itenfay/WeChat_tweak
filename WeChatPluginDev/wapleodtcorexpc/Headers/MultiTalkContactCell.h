//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, ColorGradientView, MMTimer, MMUILabel, MultiTalkHDHeadView, MultiTalkMuteIconView, MultiTalkSharingScreenTipsView, NSMutableArray, NSString, UIImageView, UILabel, WCVideoRender;
@protocol MultiTalkContactCellDelegate;

@interface MultiTalkContactCell : UIView
{
    _Bool m_hasShowTipsView;
    _Bool m_showBigview;
    _Bool m_needRefresh;
    _Bool _m_renderDisplay;
    _Bool _m_highlighted;
    _Bool _m_highlightAnimating;
    _Bool _m_hasHighlightAnimationTodo;
    CContact *m_contact;
    MultiTalkHDHeadView *m_headImageView;
    WCVideoRender *m_render;
    UIImageView *m_talkingImageView;
    UIImageView *m_netQualityImageView;
    id <MultiTalkContactCellDelegate> m_delegate;
    UIView *m_videoTipsView;
    MultiTalkSharingScreenTipsView *m_screenSharingTipsView;
    UIView *_m_backgroundMaskView;
    UIImageView *_m_waittingImageView;
    NSMutableArray *_m_waittingImageList;
    UILabel *_m_busyLabel;
    MultiTalkMuteIconView *_m_muteIconView;
    MMTimer *_m_videoTipsVideoTimer;
    MMUILabel *_memberNameLabel;
    MMUILabel *_callerMemberNameLabel;
    ColorGradientView *_blurView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ColorGradientView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMUILabel *callerMemberNameLabel; // @synthesize callerMemberNameLabel=_callerMemberNameLabel;
@property(retain, nonatomic) MMUILabel *memberNameLabel; // @synthesize memberNameLabel=_memberNameLabel;
@property(nonatomic) _Bool m_hasHighlightAnimationTodo; // @synthesize m_hasHighlightAnimationTodo=_m_hasHighlightAnimationTodo;
@property(nonatomic) _Bool m_highlightAnimating; // @synthesize m_highlightAnimating=_m_highlightAnimating;
@property(nonatomic) _Bool m_highlighted; // @synthesize m_highlighted=_m_highlighted;
@property(retain, nonatomic) MMTimer *m_videoTipsVideoTimer; // @synthesize m_videoTipsVideoTimer=_m_videoTipsVideoTimer;
@property(retain, nonatomic) MultiTalkMuteIconView *m_muteIconView; // @synthesize m_muteIconView=_m_muteIconView;
@property(retain, nonatomic) UILabel *m_busyLabel; // @synthesize m_busyLabel=_m_busyLabel;
@property(retain, nonatomic) NSMutableArray *m_waittingImageList; // @synthesize m_waittingImageList=_m_waittingImageList;
@property(retain, nonatomic) UIImageView *m_waittingImageView; // @synthesize m_waittingImageView=_m_waittingImageView;
@property(nonatomic) _Bool m_renderDisplay; // @synthesize m_renderDisplay=_m_renderDisplay;
@property(retain, nonatomic) UIView *m_backgroundMaskView; // @synthesize m_backgroundMaskView=_m_backgroundMaskView;
@property(nonatomic) _Bool m_needRefresh; // @synthesize m_needRefresh;
@property(nonatomic) _Bool m_showBigview; // @synthesize m_showBigview;
@property(retain, nonatomic) MultiTalkSharingScreenTipsView *m_screenSharingTipsView; // @synthesize m_screenSharingTipsView;
@property(retain, nonatomic) UIView *m_videoTipsView; // @synthesize m_videoTipsView;
@property(nonatomic) _Bool m_hasShowTipsView; // @synthesize m_hasShowTipsView;
@property(nonatomic) __weak id <MultiTalkContactCellDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *m_netQualityImageView; // @synthesize m_netQualityImageView;
@property(retain, nonatomic) UIImageView *m_talkingImageView; // @synthesize m_talkingImageView;
@property(retain, nonatomic) WCVideoRender *m_render; // @synthesize m_render;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)onMultiTalkMemberQualityChange:(unsigned int)arg1;
- (void)onMultiTalkMemberSilent;
- (void)onMultiTalkMemberTalking;
- (void)onMultiTalkMemberWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (void)updateContact:(id)arg1 callerName:(id)arg2;
- (void)initUserNameLabel;
- (void)initScreenSharingTipsView;
- (void)initWaittingImageView;
- (void)initHeadImageView;
- (void)initMuteIconView;
- (void)initBusyLabel;
- (void)initNetQualityImageView;
- (void)initTalkingImageView;
- (void)initBackgroundMaskView;
- (void)onSingleTap;
- (void)updateAccessibility;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateRenderDisplayStatus:(_Bool)arg1;
- (void)updateRender:(id)arg1;
- (void)hideScreenSharingTips;
- (void)showScreenSharingTips;
- (void)statusHighlighted:(_Bool)arg1;
- (void)internalHighlightStautsUpdate;
- (void)hideMuteIcon;
- (void)showMuteIcon;
- (void)hideRender;
- (void)showRenderView:(id)arg1;
- (void)hideBusyLabel;
- (void)showBusyLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

