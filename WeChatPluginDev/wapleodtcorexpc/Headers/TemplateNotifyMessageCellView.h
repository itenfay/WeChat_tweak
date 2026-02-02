//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMWebImageView, NSString, NotifyMessageViewModel, UILabel, UIView, WCFinderGetLiveInfoModel, WCFinderLiveInfo, WCFinderLiveNowView;

@interface TemplateNotifyMessageCellView
{
    _Bool _liveImageLoaded;
    WCFinderLiveInfo *_liveInfo;
    WCFinderGetLiveInfoModel *_getLiveInfoModel;
    MMUILabel *_blockSloganLabel;
    MMWebImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    MMWebImageView *_authIconImageView;
    MMUIButton *_headerMenuButton;
    UIView *_lineView;
    UILabel *_titleLabel;
    UIView *_liveMaskView;
    WCFinderLiveNowView *_logoView;
    WCFinderLiveNowView *_liveMaskTipsView;
    MMWebImageView *_liveImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool liveImageLoaded; // @synthesize liveImageLoaded=_liveImageLoaded;
@property(retain, nonatomic) MMWebImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) WCFinderLiveNowView *liveMaskTipsView; // @synthesize liveMaskTipsView=_liveMaskTipsView;
@property(retain, nonatomic) WCFinderLiveNowView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUIButton *headerMenuButton; // @synthesize headerMenuButton=_headerMenuButton;
@property(retain, nonatomic) MMWebImageView *authIconImageView; // @synthesize authIconImageView=_authIconImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMUILabel *blockSloganLabel; // @synthesize blockSloganLabel=_blockSloganLabel;
@property(retain, nonatomic) WCFinderGetLiveInfoModel *getLiveInfoModel; // @synthesize getLiveInfoModel=_getLiveInfoModel;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void)onNotifyInfoChangeWithMsg:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isCustomNotifyMsg;
- (_Bool)isFinderLiveFansGroupLiveMsg;
- (_Bool)isFinderGameLiveRefundMsg;
- (_Bool)isFinderLiveTeamUpMsg;
@property(readonly, nonatomic) NSString *liveChannelExtra;
- (void)onLiveInfoUpdated;
- (void)complaintEntry;
- (void)autoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (_Bool)canAutoPlayVideoWithoutSound;
- (_Bool)shouldShowComplaintEntry;
- (_Bool)shouldShowMoreButton;
- (id)genLiveRoomAlternativeDataItem:(id)arg1;
- (void)report21158Click;
- (_Bool)isAutoPlaying;
- (void)onTouchUpInside;
- (void)reportMoreButton:(id)arg1 isCick:(_Bool)arg2 isCancel:(_Bool)arg3;
- (void)onMoreButton:(id)arg1;
- (void)updateLiveStatus;
- (void)onAppear;
- (void)refreshLiveMaskEffect;
- (id)genHeaderMenuButton;
- (id)genAuthIconImageView;
- (id)genMoreLiveAvatarImageView;
- (id)genAvatarImageView;
- (void)initLiveImageView;
- (id)genTitleLabel;
- (id)genblockSloganLabel;
- (struct CGSize)muteSloganSize;
- (id)muteSloganFont;
- (id)muteSloganStr;
- (id)genNickNameLabel;
- (id)genLineView;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3 maxLine:(unsigned long long)arg4;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)genDisplayViewWithItemInfo:(id)arg1 longestKeyLabelWidth:(double)arg2 maxDisplayViewWidth:(double)arg3;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NotifyMessageViewModel *viewModel;

@end

