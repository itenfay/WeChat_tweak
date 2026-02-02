//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTemplateMsgAuthMessageBubbleModel, FinderLiveMessageCellMainContentView, FinderNotifyGetMoreLiveResponse, FinderNotifyMoreLiveInfo, MMLiveCDNPlayerView, MMUIButton, NSString, UIView, WCFinderDataItem;

@interface NotifyLiveImageMessageCellView
{
    FinderLiveMessageCellMainContentView *m_mainContentView;
    MMLiveCDNPlayerView *m_playerView;
    WCFinderDataItem *m_finderDataItem;
    UIView *_onPressedView;
    FinderNotifyGetMoreLiveResponse *_moreLiveInfo;
    FinderNotifyMoreLiveInfo *_moreLiveConfig;
    MMUIButton *_moreLiveButton;
    BrandTemplateMsgAuthMessageBubbleModel *_messageBubbleModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandTemplateMsgAuthMessageBubbleModel *messageBubbleModel; // @synthesize messageBubbleModel=_messageBubbleModel;
@property(retain, nonatomic) MMUIButton *moreLiveButton; // @synthesize moreLiveButton=_moreLiveButton;
@property(retain, nonatomic) FinderNotifyMoreLiveInfo *moreLiveConfig; // @synthesize moreLiveConfig=_moreLiveConfig;
@property(retain, nonatomic) FinderNotifyGetMoreLiveResponse *moreLiveInfo; // @synthesize moreLiveInfo=_moreLiveInfo;
@property(retain, nonatomic) UIView *onPressedView; // @synthesize onPressedView=_onPressedView;
- (_Bool)isAutoPlaying;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (_Bool)isListDragging;
- (void)onAppEnterBackground;
- (void)onDisappear;
- (_Bool)setRecommendReason:(id)arg1;
- (_Bool)cleanRecommendReasonIfNeeded;
- (_Bool)updateRecommendReasonIfNeeded:(id)arg1;
- (void)reportMessageBubbleOperationType:(unsigned int)arg1;
- (void)fillMessageBubbleModeBaseInfo;
- (id)getChnlExtraForExposeReport;
- (id)getChnlExtraForNoticeReport;
- (id)getMoreLiveDataItemForReport;
- (void)reportMoreLiveClick;
- (void)reportMoreLiveRecommendLiveExpose;
- (void)reportMoreLiveEntranceExpose;
- (void)onMoreLiveConfigReadyWithUniqueKey:(id)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(_Bool)arg3;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (id)genFinderDataItem;
- (_Bool)hasMoreLiveConfig;
- (void)stopPlay;
- (void)startPlayLiveStream;
- (void)layoutLivePlayerView;
- (void)createLivePlayerIfNeed;
- (void)fetchLatestLiveInfo;
- (void)autoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (_Bool)canAutoPlayVideoWithoutSound;
- (void)updateLiveStatus;
- (void)onLiveInfoUpdated;
- (void)bindYReportSdk:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchDown;
- (void)onTapMoreLiveButton;
- (id)genDisplayViewWithExtItemInfo:(id)arg1 maxDisplayViewWidth:(double)arg2;
- (void)onMoreButton:(id)arg1;
- (void)onTouchUpInside;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)dealloc;
- (void)onAppear;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

