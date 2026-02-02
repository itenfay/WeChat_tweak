//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;
@protocol PageScrollViewDataSource, PageScrollViewDelegate;

@interface PageScrollView
{
    NSMutableSet *_recycledPages;
    NSMutableSet *_visiblePages;
    _Bool _reloading;
    _Bool _supportOrientation;
    id <PageScrollViewDataSource> _pageDataSource;
    id <PageScrollViewDelegate> _pageDelegate;
    double m_padding;
}

- (void).cxx_destruct;
@property(nonatomic) double m_padding; // @synthesize m_padding;
@property(nonatomic) __weak id <PageScrollViewDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(nonatomic) __weak id <PageScrollViewDataSource> pageDataSource; // @synthesize pageDataSource=_pageDataSource;
@property(retain, nonatomic) NSMutableSet *visiblePages; // @synthesize visiblePages=_visiblePages;
@property(retain, nonatomic) NSMutableSet *recycledPages; // @synthesize recycledPages=_recycledPages;
@property(nonatomic) _Bool supportOrientation; // @synthesize supportOrientation=_supportOrientation;
- (id)visiblePageAtIndex:(unsigned long long)arg1;
- (id)viewAtPageIndex:(unsigned long long)arg1;
- (void)updatePageAtIndex:(unsigned long long)arg1;
- (void)removeVisiblePageAtIndex:(unsigned long long)arg1;
- (void)foreceReloadData;
- (void)reloadData;
- (void)onFullScreenItemDidDragToRect:(struct CGRect)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onDoubleTapWCImageScrollView;
- (void)onSingleTapWCImageScrollView;
- (double)Padding;
- (void)configPadding:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)dequeueRecycledPage;
- (_Bool)isDisplayingPageForItem:(unsigned long long)arg1;
- (struct CGRect)frameForPageAtItem:(unsigned long long)arg1;
- (id)imageViewModelForItem:(unsigned long long)arg1;
- (id)getViewForItem:(unsigned long long)arg1;
- (unsigned long long)getItemsCount;
- (unsigned long long)getCurrentIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

