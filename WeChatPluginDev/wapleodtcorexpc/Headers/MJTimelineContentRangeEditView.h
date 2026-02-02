//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJCollectionView, MJPlaybackViewModel, MJSegmentCellBorderView, MJTimelineViewModel, MMUIView, NSString, OMCBatchThumbnailProvider, UICollectionView, UICollectionViewFlowLayout, UIPanGestureRecognizer, UIView;
@protocol MJTimelineContentRangeEditViewDelegate, OMCThumbnailProvider;

@interface MJTimelineContentRangeEditView
{
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    id <MJTimelineContentRangeEditViewDelegate> _delegate;
    MJSegmentCellBorderView *_contentRangeBorderView;
    UIView *_leftMaskView;
    UIView *_rightMaskView;
    MJCollectionView *_thumbnailCollectionView;
    UICollectionViewFlowLayout *_thumbnailCollectionViewLayout;
    UICollectionView *_segmentCollectionView;
    UICollectionViewFlowLayout *_segmentCollectionViewLayout;
    id <OMCThumbnailProvider> _thumbnailProvider;
    MMUIView *_playheadView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    OMCBatchThumbnailProvider *_batchThumbnailProvider;
    struct CGRect _currentBounds;
    struct UIEdgeInsets _playheadTouchInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMCBatchThumbnailProvider *batchThumbnailProvider; // @synthesize batchThumbnailProvider=_batchThumbnailProvider;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets playheadTouchInsets; // @synthesize playheadTouchInsets=_playheadTouchInsets;
@property(retain, nonatomic) MMUIView *playheadView; // @synthesize playheadView=_playheadView;
@property(retain, nonatomic) id <OMCThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(retain, nonatomic) UICollectionViewFlowLayout *segmentCollectionViewLayout; // @synthesize segmentCollectionViewLayout=_segmentCollectionViewLayout;
@property(retain, nonatomic) UICollectionView *segmentCollectionView; // @synthesize segmentCollectionView=_segmentCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *thumbnailCollectionViewLayout; // @synthesize thumbnailCollectionViewLayout=_thumbnailCollectionViewLayout;
@property(retain, nonatomic) MJCollectionView *thumbnailCollectionView; // @synthesize thumbnailCollectionView=_thumbnailCollectionView;
@property(retain, nonatomic) UIView *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) UIView *leftMaskView; // @synthesize leftMaskView=_leftMaskView;
@property(retain, nonatomic) MJSegmentCellBorderView *contentRangeBorderView; // @synthesize contentRangeBorderView=_contentRangeBorderView;
@property(nonatomic) __weak id <MJTimelineContentRangeEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
- (CDStruct_e83c9415)timeRangeForOffsetRange:(struct MCOffsetRange)arg1;
- (double)offsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForOffset:(double)arg1 shouldClamp:(_Bool)arg2 contentRangeClamp:(_Bool)arg3;
- (void)stopPlayingAndBeginClipSkimming;
- (void)updatePlayheadWithGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutMaskView;
- (void)skimAndNotify;
- (CDStruct_1b6d18a9)playbackTimeFromPlayheadOffset;
- (void)scrollToContentRange;
- (void)updateSegmentContentRange;
- (void)didEndScrubbingTimelineView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelThumbnailImageRequestForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)requestThumbnailImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadOnFocusSegmentDidChange;
- (void)setupSegmentCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupThumbnailCell:(id)arg1 atIndexPath:(id)arg2;
- (long long)numberOfThumbnailTiles;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupGestureRecognizers;
- (void)reloadData;
- (void)bindViews;
- (void)layoutSubviews;
- (void)layoutPlayheadView;
- (void)layoutViews;
- (void)setupViews;
- (void)setupThumbnailProvider;
- (void)dealloc;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

