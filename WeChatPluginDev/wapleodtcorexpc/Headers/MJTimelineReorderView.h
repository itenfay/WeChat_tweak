//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPlaybackViewModel, MJTimelineViewModel, NSArray, NSString, OMCBatchThumbnailProvider, UICollectionView, UICollectionViewFlowLayout, UILabel, UILongPressGestureRecognizer;
@protocol MJTimelineReorderViewDelegate;

@interface MJTimelineReorderView
{
    id <MJTimelineReorderViewDelegate> _delegate;
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    UILongPressGestureRecognizer *_longPressGR;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UILabel *_titleLabel;
    NSArray *_initialOrder;
    OMCBatchThumbnailProvider *_batchThumbnailProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMCBatchThumbnailProvider *batchThumbnailProvider; // @synthesize batchThumbnailProvider=_batchThumbnailProvider;
@property(retain, nonatomic) NSArray *initialOrder; // @synthesize initialOrder=_initialOrder;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGR; // @synthesize longPressGR=_longPressGR;
@property(readonly, nonatomic) MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
@property(nonatomic) __weak id <MJTimelineReorderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSelectSegmentAtIndexPath:(id)arg1;
- (void)updateVisibleCellNumbers;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)hasChanges;
- (void)setupGestures;
- (void)bindViews;
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

