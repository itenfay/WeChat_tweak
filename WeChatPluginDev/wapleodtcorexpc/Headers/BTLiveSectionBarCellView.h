//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTBrandBarScrollView, BTLiveSectionBarHeaderView, BTLiveSectionData, NSMutableArray, NSString, UITapGestureRecognizer, UIView;
@protocol BTLiveSectionBarCellViewDelegate;

@interface BTLiveSectionBarCellView
{
    _Bool _isTitleUp;
    BTLiveSectionData *_sectionData;
    id <BTLiveSectionBarCellViewDelegate> _barViewDelegate;
    BTBrandBarScrollView *_scrollView;
    BTLiveSectionBarHeaderView *_headerView;
    NSMutableArray *_itemViewArr;
    unsigned long long _pageIndexBeforeScroll;
    UITapGestureRecognizer *_headerTapGesture;
    unsigned long long _itemNumPerPage;
    double _itemWidth;
    double _itemHeight;
    double _pageWidth;
    UIView *_splitLineView;
    unsigned long long _splitLineIndex;
    NSMutableArray *_voiceOverElements;
}

+ (double)headerViewHeightForFold;
+ (double)headerViewHeight;
+ (double)barViewHeight;
+ (double)cellHeightForFold;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
@property(nonatomic) unsigned long long splitLineIndex; // @synthesize splitLineIndex=_splitLineIndex;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(nonatomic) double pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) unsigned long long itemNumPerPage; // @synthesize itemNumPerPage=_itemNumPerPage;
@property(retain, nonatomic) UITapGestureRecognizer *headerTapGesture; // @synthesize headerTapGesture=_headerTapGesture;
@property(nonatomic) unsigned long long pageIndexBeforeScroll; // @synthesize pageIndexBeforeScroll=_pageIndexBeforeScroll;
@property(retain, nonatomic) NSMutableArray *itemViewArr; // @synthesize itemViewArr=_itemViewArr;
@property(retain, nonatomic) BTLiveSectionBarHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isTitleUp; // @synthesize isTitleUp=_isTitleUp;
@property(retain, nonatomic) BTBrandBarScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <BTLiveSectionBarCellViewDelegate> barViewDelegate; // @synthesize barViewDelegate=_barViewDelegate;
@property(retain, nonatomic) BTLiveSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)initVoiceOverElements;
- (void)updateHeaderViewPosWithContentOffsetX:(double)arg1;
- (void)onClickExpand;
- (void)onClickContact:(id)arg1;
- (void)foldStateWithAnimated;
- (void)expendStateWithAnimated;
- (void)callLiveBarItemViewExposed;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)getCurrentPageIndex;
- (void)resetContentOffset;
- (id)visibleItemViewArr;
- (void)setItemViewOffset:(id)arg1 index:(long long)arg2 splitLineWidth:(double)arg3;
- (void)setItemViewAlpha:(id)arg1;
- (double)itemViewWidth;
- (void)layoutSpliteLineAndGetCurrentWidth:(double *)arg1;
- (void)layoutItemViews;
- (void)layoutSubviews;
- (void)setupViewWhenScrollViewShow;
- (void)setupViewWhenScrollViewHidden;
- (void)initSpliteLineView;
- (void)setupSplitLine;
- (void)initSubviews;
- (void)resetPosition;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

