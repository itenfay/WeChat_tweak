//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMWebImageButton, MMWebImageView, NSString, UIButton, UILabel, UIView, WCFinderFeedContentVM, WCFinderSimplePlayerView;

@interface WCFinderFullCardTypeMediaTableViewCell
{
    WCFinderSimplePlayerView *_playerView;
    UIView *_bottomContainerView;
    MMWebImageView *_headerView;
    UILabel *_titleLabel;
    UILabel *_recommendReasonLabel;
    MMWebImageButton *_rightButton;
    MMUIImageView *_playIconView;
    UIButton *_dragupTipsLabel;
    WCFinderFeedContentVM *_contentVM;
}

+ (id)cellId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIButton *dragupTipsLabel; // @synthesize dragupTipsLabel=_dragupTipsLabel;
@property(retain, nonatomic) MMUIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMWebImageButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
- (void)onFeedContent:(id)arg1 pauseChanged:(_Bool)arg2;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(_Bool)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (_Bool)shouldCaluculateAsFocusCell;
- (void)onTapInPlayer;
- (void)onClickBottomContainerView;
- (void)onClickRightButton:(id)arg1;
- (_Bool)currentMediaIsPlay;
- (void)_updateUIWithLeftJumpInfo:(id)arg1 rightJumpInfo:(id)arg2;
- (void)_updateUIWithContentVM:(id)arg1;
- (void)_updatePlayPauseState;
- (void)updateWithContentVM:(id)arg1;
- (double)getPlayVideoTotalTime;
- (void)setupLayout;
- (struct CGSize)rightBtnSizeWithTitle:(id)arg1;
- (id)genImageButton;
- (id)gen29179ReportDict;
- (void)setup29179ReportParamsWithView:(id)arg1 viewId:(id)arg2;
- (void)setupSubView;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

