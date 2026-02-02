//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, WCAdRandomPickCardDescriptionView, WCAdRandomPickCardInfo, WCAdRandomPickCardItemsView, WCDataItem;
@protocol WCAdRandomPickCardViewDelegate;

@interface WCAdRandomPickCardView
{
    _Bool _isRandomPickCardViewActive;
    _Bool _shouldResumeCardItemsView;
    _Bool _shouldResumeBackgroundPagPlaying;
    id <WCAdRandomPickCardViewDelegate> _delegate;
    WCAdRandomPickCardInfo *_randomPickCardInfo;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    WCAdRandomPickCardDescriptionView *_descriptionView;
    WCAdRandomPickCardItemsView *_cardItemsView;
    PAGView *_backgroundPagView;
}

+ (struct CGSize)calcViewSizeForPickCardInfo:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResumeBackgroundPagPlaying; // @synthesize shouldResumeBackgroundPagPlaying=_shouldResumeBackgroundPagPlaying;
@property(retain, nonatomic) PAGView *backgroundPagView; // @synthesize backgroundPagView=_backgroundPagView;
@property(nonatomic) _Bool shouldResumeCardItemsView; // @synthesize shouldResumeCardItemsView=_shouldResumeCardItemsView;
@property(nonatomic) _Bool isRandomPickCardViewActive; // @synthesize isRandomPickCardViewActive=_isRandomPickCardViewActive;
@property(retain, nonatomic) WCAdRandomPickCardItemsView *cardItemsView; // @synthesize cardItemsView=_cardItemsView;
@property(retain, nonatomic) WCAdRandomPickCardDescriptionView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdRandomPickCardInfo *randomPickCardInfo; // @synthesize randomPickCardInfo=_randomPickCardInfo;
@property(nonatomic) __weak id <WCAdRandomPickCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)onRandomPickCardDescriptionFetchPickCardLogic;
- (id)onRandomPickCardDescriptionFetchCanvasPageId;
- (void)onRandomPickCardItemsPlayBackgroundAnimationWithStatus:(long long)arg1;
- (void)onRandomPickCardItemsUpdateContainerViewStatus:(long long)arg1;
- (void)onRandomPickCardItemsItemViewDidClick:(id)arg1 index:(unsigned long long)arg2;
- (id)onRandomPickCardItemsFetchPickCardLogic;
- (id)onRandomPickCardItemsFetchCanvasPageId;
- (id)pickCardLogic;
- (void)setCardItemsViewActive:(_Bool)arg1;
- (void)setBackgroundPagViewActive:(_Bool)arg1;
- (void)setRandomPickCardViewActive:(_Bool)arg1;
- (void)setCardItemsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)playBackgroundPagForStatus:(long long)arg1;
- (double)fetchContentMaxWidth;
- (id)pageId;
- (void)showAllPickedAnimation;
- (void)showRandomAnimation;
- (void)showIntroduceAnimation;
- (void)makeCardItemsViewPrepare;
- (void)resetCardItemsView;
- (void)layoutSubviews;
- (void)generateSubviews;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 randomPickCardInfo:(id)arg2 dataItem:(id)arg3 scene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

