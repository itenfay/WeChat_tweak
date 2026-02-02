//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, ColorGradientView, MMUILabel, MultiTalkHDHeadView, MultiTalkMuteIconView, MultiTalkSharingScreenTipsView, NSMutableArray, NSObject, NSString, UIColor, UIImageView, UILabel, WCVideoRender;
@protocol MultiTalkMemberCellDelegate, MultiTalkMemberProtocol;

@interface MultiTalkMemberCell : UIView
{
    _Bool _muteIconHidden;
    _Bool _busyLabelHidden;
    _Bool _isInMinimizeMode;
    _Bool _highlighted;
    _Bool _renderDisplayed;
    _Bool _screenSharingTipsEnable;
    _Bool _isTalking;
    _Bool _isSelected;
    _Bool _isChanging;
    unsigned int _talkingQuality;
    CDUnknownBlockType _clickActionCallback;
    id <MultiTalkMemberCellDelegate> _cellDelegate;
    WCVideoRender *_render;
    CContact *_contact;
    UIView *_backgroundMaskView;
    UIColor *_maskColor;
    MultiTalkHDHeadView *_headImageView;
    UIImageView *_talkingImageView;
    UIImageView *_waittingImageView;
    unsigned long long _waittingImageListIndex;
    NSMutableArray *_waittingImageList;
    UIImageView *_netQualityImageView;
    UILabel *_busyLabel;
    MultiTalkMuteIconView *_muteIconView;
    MultiTalkSharingScreenTipsView *_screenSharingTipsView;
    UIView *_renderView;
    UIView *_clickView;
    MMUILabel *_memberNameLabel;
    MMUILabel *_callerMemberNameLabel;
    ColorGradientView *_blurView;
    NSObject<MultiTalkMemberProtocol> *_member;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isChanging; // @synthesize isChanging=_isChanging;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSObject<MultiTalkMemberProtocol> *member; // @synthesize member=_member;
@property(retain, nonatomic) ColorGradientView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMUILabel *callerMemberNameLabel; // @synthesize callerMemberNameLabel=_callerMemberNameLabel;
@property(retain, nonatomic) MMUILabel *memberNameLabel; // @synthesize memberNameLabel=_memberNameLabel;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(nonatomic) unsigned int talkingQuality; // @synthesize talkingQuality=_talkingQuality;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool screenSharingTipsEnable; // @synthesize screenSharingTipsEnable=_screenSharingTipsEnable;
@property(nonatomic) _Bool renderDisplayed; // @synthesize renderDisplayed=_renderDisplayed;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) MultiTalkSharingScreenTipsView *screenSharingTipsView; // @synthesize screenSharingTipsView=_screenSharingTipsView;
@property(retain, nonatomic) MultiTalkMuteIconView *muteIconView; // @synthesize muteIconView=_muteIconView;
@property(retain, nonatomic) UILabel *busyLabel; // @synthesize busyLabel=_busyLabel;
@property(retain, nonatomic) UIImageView *netQualityImageView; // @synthesize netQualityImageView=_netQualityImageView;
@property(retain, nonatomic) NSMutableArray *waittingImageList; // @synthesize waittingImageList=_waittingImageList;
@property(nonatomic) unsigned long long waittingImageListIndex; // @synthesize waittingImageListIndex=_waittingImageListIndex;
@property(retain, nonatomic) UIImageView *waittingImageView; // @synthesize waittingImageView=_waittingImageView;
@property(retain, nonatomic) UIImageView *talkingImageView; // @synthesize talkingImageView=_talkingImageView;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode=_isInMinimizeMode;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCVideoRender *render; // @synthesize render=_render;
@property(nonatomic) __weak id <MultiTalkMemberCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(copy, nonatomic) CDUnknownBlockType clickActionCallback; // @synthesize clickActionCallback=_clickActionCallback;
@property(nonatomic) _Bool busyLabelHidden; // @synthesize busyLabelHidden=_busyLabelHidden;
@property(nonatomic) _Bool muteIconHidden; // @synthesize muteIconHidden=_muteIconHidden;
- (void)onMultiTalkMemberWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (void)onMultiTalkMemberQualityChange:(unsigned int)arg1;
- (void)onMultiTalkMemberSilent;
- (void)onMultiTalkMemberTalking;
- (void)onTapWithSender:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateMaskColorWithIndex:(unsigned long long)arg1 membersCount:(unsigned long long)arg2;
- (void)updateContact:(id)arg1 member:(id)arg2 isSelected:(_Bool)arg3;
- (void)updateRender:(id)arg1;
- (void)updateScreenSharingTipsEnable:(_Bool)arg1;
- (void)updateRenderDisplayed:(_Bool)arg1;
- (_Bool)getRenderDisplayed;
- (void)updateHighlighted:(_Bool)arg1;
- (void)layoutUserNameLabel;
- (void)bringClickViewFront;
- (void)layoutClickView;
- (void)layoutRenderView;
- (void)layoutScreenSharingTipsView;
- (void)layoutMultiTalkMuteIconView;
- (void)layoutBusyLabel;
- (void)layoutNetQualityImageView;
- (void)layoutTalkingImageView;
- (void)layoutWaittingImageView;
- (void)layoutHeadImageView;
- (void)layoutBackgroundMaskView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

