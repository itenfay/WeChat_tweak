//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSHashTable, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, WCStoryDataUnit, WCStoryPreviewPageView, WCStoryPreviewReportObj;
@protocol MMUIViewControllerDelegate, WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate;

@interface WCStoryPreivewPageCollectionController
{
    UICollectionViewFlowLayout *m_collectionLayout;
    WCStoryPreviewPageView *m_playingPageView;
    double m_startContentOffsetX;
    double m_willEndContentOffsetX;
    NSHashTable *m_pageViewsToStop;
    _Bool _needFixContentOffset;
    _Bool _resetToFirstPageWhenUpdateData;
    _Bool _isAllMuted;
    _Bool _isPlayingVideo;
    _Bool _enableDragToClose;
    _Bool _canDeleteMyOwnStory;
    _Bool _voiceOverEnable;
    UICollectionView *m_collectionView;
    NSIndexPath *m_currentIndexPath;
    id <WCStoryPreivewPageCollectionControllerDelegate> _delegate;
    id <WCStoryPreviewPageViewDelegate> _pageViewDelegate;
    id <MMUIViewControllerDelegate> _vcDelegate;
    WCStoryDataUnit *_dataUnit;
    WCStoryPreviewReportObj *_reportObj;
    NSIndexPath *_willDisplayIndex;
    struct CGSize _screenSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *willDisplayIndex; // @synthesize willDisplayIndex=_willDisplayIndex;
@property(nonatomic) _Bool voiceOverEnable; // @synthesize voiceOverEnable=_voiceOverEnable;
@property(retain, nonatomic) WCStoryPreviewReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(nonatomic) _Bool canDeleteMyOwnStory; // @synthesize canDeleteMyOwnStory=_canDeleteMyOwnStory;
@property(nonatomic) _Bool enableDragToClose; // @synthesize enableDragToClose=_enableDragToClose;
@property(nonatomic) _Bool isPlayingVideo; // @synthesize isPlayingVideo=_isPlayingVideo;
@property(nonatomic) _Bool isAllMuted; // @synthesize isAllMuted=_isAllMuted;
@property(nonatomic) _Bool resetToFirstPageWhenUpdateData; // @synthesize resetToFirstPageWhenUpdateData=_resetToFirstPageWhenUpdateData;
@property(nonatomic) _Bool needFixContentOffset; // @synthesize needFixContentOffset=_needFixContentOffset;
@property(retain, nonatomic) WCStoryDataUnit *dataUnit; // @synthesize dataUnit=_dataUnit;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(nonatomic) __weak id <WCStoryPreviewPageViewDelegate> pageViewDelegate; // @synthesize pageViewDelegate=_pageViewDelegate;
@property(nonatomic) __weak id <WCStoryPreivewPageCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=m_currentIndexPath;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=m_collectionView;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clearAllPageView;
- (void)addSafeStopPageView:(id)arg1;
- (void)changeToPlayingPageView:(id)arg1;
- (void)tilePages;
- (void)fixContentOffset;
- (void)reloadCollectionView;
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)voiceOverElementEnable:(_Bool)arg1;
- (void)tryShowCommentsList;
- (void)stopAllPlayer;
- (void)resumePlayer;
@property(readonly, nonatomic) WCStoryPreviewPageView *currentPageView;
- (void)updateCollectionViewFrame;
- (void)configCollectionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

