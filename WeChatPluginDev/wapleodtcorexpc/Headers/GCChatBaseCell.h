//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCChatCellPublishBottomView, GCChatCellVoteView, GCRoleInfoView, MMUIActivityIndicatorView, MMWebImageView, NSString, PAGView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface GCChatBaseCell
{
    MMWebImageView *_headImgView;
    UIView *_nameLineView;
    UIView *_headLineView;
    UIView *_bubbleView;
    UIView *_midContentContainerView;
    UIView *_subClassContentView;
    UILabel *_nameLabel;
    UILabel *_tagLabel;
    GCRoleInfoView *_roleInfoView;
    MMWebImageView *_roleIcon;
    MMUIActivityIndicatorView *_loadingView;
    UIImageView *_sendFailView;
    UIView *_statusBgView;
    MMWebImageView *_statusIcon;
    UILabel *_debugLabel;
    GCChatCellVoteView *_voteView;
    UIButton *_channelBtn;
    GCChatCellPublishBottomView *_publishBottomView;
    UITapGestureRecognizer *_singleTapOnHead;
    UITapGestureRecognizer *_doubleTapOnHead;
    PAGView *_pagView;
    UIView *_headTickleMaskView;
}

+ (struct CGSize)sizeForStr:(id)arg1 font:(id)arg2;
+ (double)spaceBetweenTagAndRole;
+ (double)maxContentWidth;
+ (double)maxNameWidth;
+ (struct CGSize)ceilSize:(struct CGSize)arg1;
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (void)calculateLayoutIfNeed:(id)arg1;
+ (void)updateiPadCellWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headTickleMaskView; // @synthesize headTickleMaskView=_headTickleMaskView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapOnHead; // @synthesize doubleTapOnHead=_doubleTapOnHead;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapOnHead; // @synthesize singleTapOnHead=_singleTapOnHead;
@property(retain, nonatomic) GCChatCellPublishBottomView *publishBottomView; // @synthesize publishBottomView=_publishBottomView;
@property(retain, nonatomic) UIButton *channelBtn; // @synthesize channelBtn=_channelBtn;
@property(retain, nonatomic) GCChatCellVoteView *voteView; // @synthesize voteView=_voteView;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) MMWebImageView *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) UIView *statusBgView; // @synthesize statusBgView=_statusBgView;
@property(retain, nonatomic) UIImageView *sendFailView; // @synthesize sendFailView=_sendFailView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMWebImageView *roleIcon; // @synthesize roleIcon=_roleIcon;
@property(retain, nonatomic) GCRoleInfoView *roleInfoView; // @synthesize roleInfoView=_roleInfoView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *subClassContentView; // @synthesize subClassContentView=_subClassContentView;
@property(retain, nonatomic) UIView *midContentContainerView; // @synthesize midContentContainerView=_midContentContainerView;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UIView *headLineView; // @synthesize headLineView=_headLineView;
@property(retain, nonatomic) UIView *nameLineView; // @synthesize nameLineView=_nameLineView;
@property(retain, nonatomic) MMWebImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void)choosenBarDidClickPublish;
- (void)choosenBarDidClickJumpUrl;
- (void)innerShowLoadingView:(_Bool)arg1;
- (void)showLoadingView:(_Bool)arg1;
- (void)onSendFailImgTap;
- (void)showFailView:(_Bool)arg1;
- (void)configureRightView:(id)arg1 show:(_Bool)arg2;
- (void)onRightLightImageClick;
- (void)configureVoteView:(id)arg1;
- (_Bool)shouldBubbleViewClipsToBounds;
- (void)configurePublishChoosenView:(id)arg1 leftStartX:(double)arg2;
- (void)configureWithCellModel:(id)arg1;
- (void)configureSubClassContentView:(id)arg1;
- (void)endHighLightAnimation;
- (id)getBubbleViewColor:(id)arg1;
- (void)onUserDataDictUpdate:(id)arg1;
- (double)getCornerRadius;
- (void)onRoleInfoTap;
- (void)showNormalTickleAnimation;
- (void)showStrongTickleAnimation;
- (void)addMaskWhenTickleAnimation;
- (void)onHeadImgDoubleClick;
- (void)someoneTickleAtMeBy:(id)arg1;
- (id)lastStrongTickleMeDateKey:(id)arg1;
- (id)tickleLastTimeKey;
- (void)onHeadImgTap;
- (id)chatBaseCellModel;
- (void)handleChannelLabelTap;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

