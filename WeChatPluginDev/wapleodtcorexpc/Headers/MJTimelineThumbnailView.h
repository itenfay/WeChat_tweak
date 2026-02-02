//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPlaybackViewModel, MJTimelineViewModel, MMUIView, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol MJTimelineThumbnailViewDelegate, OMCThumbnailProvider;

@interface MJTimelineThumbnailView
{
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    id <MJTimelineThumbnailViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UILabel *_timeLabel;
    id <OMCThumbnailProvider> _thumbnailProvider;
    MMUIView *_playheadView;
    struct CGRect _currentBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *playheadView; // @synthesize playheadView=_playheadView;
@property(retain, nonatomic) id <OMCThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MJTimelineThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
- (CDStruct_e83c9415)timeRangeForOffsetRange:(struct MCOffsetRange)arg1;
- (double)offsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForOffset:(double)arg1 shouldClamp:(_Bool)arg2 contentRangeClamp:(_Bool)arg3;
- (void)syncTimelinePlayheadTime;
- (void)stopScrollIfNeeded;
- (void)didCancel;
- (void)didFinish;
- (void)skimAndNotify;
- (CDStruct_1b6d18a9)playbackTimeFromPlayheadOffset;
- (void)scrollToContentRange;
- (void)didEndScrubbingTimelineView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelThumbnailImageRequestForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)requestThumbnailImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupThumbnailCell:(id)arg1 atIndexPath:(id)arg2;
- (long long)numberOfThumbnailTiles;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (void)layoutViews;
- (void)setupViews;
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

