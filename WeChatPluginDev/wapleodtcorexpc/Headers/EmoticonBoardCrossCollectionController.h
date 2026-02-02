//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardCrossSectionInfo, MMUIView, NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol EmoticonBoardCrossCollectionControllerDelegate;

@interface EmoticonBoardCrossCollectionController
{
    _Bool _darkMode;
    _Bool _shouldShowRecentUseEmoji;
    _Bool _emojiCanSend;
    _Bool _hideRightBottomBtns;
    _Bool _useSystemEmojiStyle;
    _Bool _isExpandBarEnabled;
    _Bool _shouldIgnoreScroll;
    _Bool _isProgramScroll;
    id <EmoticonBoardCrossCollectionControllerDelegate> _delegate;
    UIView *_contentView;
    NSString *_emojiFinishButtonTitle;
    EmoticonBoardCrossSectionInfo *_currentSectionInfo;
    NSArray *_sectionInfoArray;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    NSMutableDictionary *_emoticonListStorage;
    unsigned long long _recentCheckSectionInfoIndex;
    NSMutableDictionary *_pidToSectionInfoDict;
    MMUIView *_expandBarView;
    UIPanGestureRecognizer *_expandPanGes;
    UITapGestureRecognizer *_expandTapGes;
    double _expandPanGesLastPosY;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isProgramScroll; // @synthesize isProgramScroll=_isProgramScroll;
@property(nonatomic) _Bool shouldIgnoreScroll; // @synthesize shouldIgnoreScroll=_shouldIgnoreScroll;
@property(nonatomic) _Bool isExpandBarEnabled; // @synthesize isExpandBarEnabled=_isExpandBarEnabled;
@property(nonatomic) double expandPanGesLastPosY; // @synthesize expandPanGesLastPosY=_expandPanGesLastPosY;
@property(retain, nonatomic) UITapGestureRecognizer *expandTapGes; // @synthesize expandTapGes=_expandTapGes;
@property(retain, nonatomic) UIPanGestureRecognizer *expandPanGes; // @synthesize expandPanGes=_expandPanGes;
@property(retain, nonatomic) MMUIView *expandBarView; // @synthesize expandBarView=_expandBarView;
@property(retain, nonatomic) NSMutableDictionary *pidToSectionInfoDict; // @synthesize pidToSectionInfoDict=_pidToSectionInfoDict;
@property(nonatomic) unsigned long long recentCheckSectionInfoIndex; // @synthesize recentCheckSectionInfoIndex=_recentCheckSectionInfoIndex;
@property(retain, nonatomic) NSMutableDictionary *emoticonListStorage; // @synthesize emoticonListStorage=_emoticonListStorage;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *sectionInfoArray; // @synthesize sectionInfoArray=_sectionInfoArray;
@property(retain, nonatomic) EmoticonBoardCrossSectionInfo *currentSectionInfo; // @synthesize currentSectionInfo=_currentSectionInfo;
@property(retain, nonatomic) NSString *emojiFinishButtonTitle; // @synthesize emojiFinishButtonTitle=_emojiFinishButtonTitle;
@property(nonatomic) _Bool useSystemEmojiStyle; // @synthesize useSystemEmojiStyle=_useSystemEmojiStyle;
@property(nonatomic) _Bool hideRightBottomBtns; // @synthesize hideRightBottomBtns=_hideRightBottomBtns;
@property(nonatomic) _Bool emojiCanSend; // @synthesize emojiCanSend=_emojiCanSend;
@property(nonatomic) _Bool shouldShowRecentUseEmoji; // @synthesize shouldShowRecentUseEmoji=_shouldShowRecentUseEmoji;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)checkExpand;
- (void)handleExpandTap:(id)arg1;
- (void)handleExpandPan:(id)arg1;
- (_Bool)accessibilityManualScrollTo:(long long)arg1;
- (void)OnEmoticonStoreItemInstallFinished:(id)arg1;
- (void)onConfirmMerge;
- (id)emoticonListForWrap:(id)arg1;
- (void)onRecommendPageCellTapRecommendViewWithPid:(id)arg1;
- (void)onCameraEmoticonEntryPageCellTapCreateButton;
- (_Bool)isLayoutForExpand;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)pushToDesignerProfile:(id)arg1 redotReporter:(id)arg2;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(struct CGRect)arg5;
- (void)onEmoticonPageCellTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 pid:(id)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)shouldHideQQEmojiPreview;
- (void)shouldShowQQEmojiPreviewForKey:(id)arg1 atCenterPoint:(struct CGPoint)arg2 hideDesc:(_Bool)arg3;
- (void)onQQEmojiPageCellTapDeleteButton;
- (void)onQQEmojiPageCellTapSendButton;
- (_Bool)shouldShowQQEmojiSendButton;
- (void)onQQEmojiPageCellTapQQEmojiWithCode:(id)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (_Bool)shouldDisableScrollAdjustment;
- (void)onPageCell:(id)arg1 didScrollToOffset:(struct CGPoint)arg2;
- (void)onEmojiBoardKeyListChanged;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isCustomOrCameraPid:(id)arg1;
- (id)getVisibleEmoticonPageCell;
- (id)getVisibleSystemEmojiPageCell;
- (id)getVisibleQQEmojiPageCell;
- (id)getQQEmojiSectionInfo;
- (id)getSystemEmojiDictionary:(id)arg1;
- (id)getQQEmojiDictionary;
- (id)safeGetPreviousSectionInfo;
- (id)safeGetNextSectionInfo;
- (id)sectionInfoForPid:(id)arg1;
- (_Bool)checkNeedReloadForIPChangeForPid:(id)arg1;
- (_Bool)updateExsitingEmoticonSectionInfoWithPageWrap:(id)arg1;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;
- (void)reportAutoSelectCustomEmoticonPageIfNeeded;
- (unsigned long long)currentSelectedIndex;
- (id)visibleCellView;
- (void)stopCurrentPageScroll;
- (void)updateRecentUseEmojiNeedReload:(_Bool)arg1;
- (void)changePageToPid:(id)arg1 scrollToTop:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setEmoticonPageArray:(id)arg1;
- (void)updateContentViewFrame:(struct CGRect)arg1 isByPassScroll:(_Bool)arg2;
- (void)updateContentViewFrame:(struct CGRect)arg1;
- (void)preLoadEmoticonListForPid:(id)arg1;
- (void)preLoadCustomAndCameraEmoticonList;
- (void)changeToExpand:(_Bool)arg1;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

