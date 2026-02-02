//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveListenPromoteInfo, MMUIButton, MMUILabel, MMWebImageView;

@interface MMFinderLiveListenPromotePubbleContentView
{
    _Bool _downLoadImageSuccess;
    MMWebImageView *_backgroundImgView;
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    FinderLiveListenPromoteInfo *_listenPromoteInfo;
    MMUIButton *_actionButton;
}

+ (void)preloadWithUrl:(id)arg1;
+ (void)preloadListenBgWithPromoteMsgInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool downLoadImageSuccess; // @synthesize downLoadImageSuccess=_downLoadImageSuccess;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) FinderLiveListenPromoteInfo *listenPromoteInfo; // @synthesize listenPromoteInfo=_listenPromoteInfo;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
@property(retain, nonatomic) MMWebImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
- (id)onPromoteBubbleActionExtraInfo;
- (void)onClosed;
- (void)onShowed;
- (void)updateDisMiss;
- (void)categoryItem:(id)arg1 onLikeStatusChanged:(_Bool)arg2;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (double)getLabelWidth:(double)arg1;
- (void)layoutTitleLabel;
- (void)updateActionButtonWithPromoteInfo:(id)arg1;
- (void)layoutActionButton;
- (void)layoutTitleImgView;
- (void)layoutBackgroundImgView;
- (void)onTapAction:(_Bool)arg1;
- (void)onPromoteButtonClicked:(_Bool)arg1;
- (void)actionButtonClicked;
- (void)handleSingleTapGesture:(id)arg1;
- (_Bool)shouldBeAccessibilityElement;
- (void)updateBackgroundImgViewWithUrl:(id)arg1;
- (void)updateCoverImgViewWithUrl:(id)arg1;
- (void)refreshData;
- (_Bool)isUseSpecialConfig;
- (_Bool)isUseDarkMode;
- (id)getActionButtonColor;
- (id)getActionButtonBackgroundColor;
- (void)layoutUI;
- (id)getCurrentPromoteBuffer;
- (void)reportCurrentPromoteData;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

