//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, CEmoticonWrap, EmoticonPreviewWindowViewController, EmoticonRecommendMessageContext, FTSWebSearchMgr, MMUIActivityIndicatorView, MMUILabel, NSIndexPath, NSMutableArray, NSString, RelatedEmoticonCollectionFooterView, RelatedEmoticonReportObject, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer, WSSImilarPageModel;
@protocol RelatedEmoticonHalfScreenViewControllerDelegate;

@interface RelatedEmoticonHalfScreenViewController
{
    _Bool _hasAddObserver;
    EmoticonRecommendMessageContext *_relatedEmoticonMessageContext;
    NSString *_chatId;
    CEmoticonWrap *_relatedEmoticonWrap;
    WSSImilarPageModel *_similarEmoticonModel;
    RelatedEmoticonReportObject *_reportObject;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    EmoticonPreviewWindowViewController *_emoticonPreview;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_selectedIndexPath;
    CEmoticonWrap *_currentEmoticonWrap;
    CADisplayLink *_displayLink;
    MMUIActivityIndicatorView *_loadingIndicator;
    MMUILabel *_loadingTipLabel;
    RelatedEmoticonCollectionFooterView *_footerView;
    FTSWebSearchMgr *_webSearchMgr;
    unsigned long long _fetchStatus;
    NSString *_webSearchSessionId;
    NSString *_lastRequestId;
    NSString *_searchId;
    long long _offset;
    NSMutableArray *_similarItems;
    double _itemWidth;
    unsigned long long _itemCount;
    double _itemSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSMutableArray *similarItems; // @synthesize similarItems=_similarItems;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *lastRequestId; // @synthesize lastRequestId=_lastRequestId;
@property(retain, nonatomic) NSString *webSearchSessionId; // @synthesize webSearchSessionId=_webSearchSessionId;
@property(nonatomic) unsigned long long fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(retain, nonatomic) RelatedEmoticonCollectionFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *loadingTipLabel; // @synthesize loadingTipLabel=_loadingTipLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool hasAddObserver; // @synthesize hasAddObserver=_hasAddObserver;
@property(retain, nonatomic) CEmoticonWrap *currentEmoticonWrap; // @synthesize currentEmoticonWrap=_currentEmoticonWrap;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) EmoticonPreviewWindowViewController *emoticonPreview; // @synthesize emoticonPreview=_emoticonPreview;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) RelatedEmoticonReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) WSSImilarPageModel *similarEmoticonModel; // @synthesize similarEmoticonModel=_similarEmoticonModel;
@property(retain, nonatomic) CEmoticonWrap *relatedEmoticonWrap; // @synthesize relatedEmoticonWrap=_relatedEmoticonWrap;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(retain, nonatomic) EmoticonRecommendMessageContext *relatedEmoticonMessageContext; // @synthesize relatedEmoticonMessageContext=_relatedEmoticonMessageContext;
- (void)onSearchSimilarEmoticon:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)calItemWidthAndCount;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)reportEmoticonExposure;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 frame:(struct CGRect)arg3 index:(unsigned long long)arg4;
- (void)onLongPressToPreview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)animateContentViewTop;
- (void)onContentViewTopChanged:(id)arg1;
- (void)invalidateDisplayLink;
- (void)setupAnimateTransitionBlocks;
- (void)fetchNextSimilarPage;
- (void)initData;
- (void)initView;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithChatId:(id)arg1 relatedEmoticonWrap:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <RelatedEmoticonHalfScreenViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

