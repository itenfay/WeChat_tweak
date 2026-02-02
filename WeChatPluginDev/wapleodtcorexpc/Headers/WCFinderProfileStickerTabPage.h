//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, UILabel, UITapGestureRecognizer, WCFinderStreamFooterView;

@interface WCFinderProfileStickerTabPage
{
    _Bool _didScrollToSingleEmoji;
    UILabel *_statusTips;
    WCFinderStreamFooterView *_loadmoreFooterView;
    WCFinderStreamFooterView *_noMoreFooterView;
    UICollectionView *_collectionView;
    unsigned long long _emotionFetchStatus;
    unsigned long long _emojiCellLineCount;
    double _emojiCellMargin;
    UITapGestureRecognizer *_storePackViewMoreGesture;
    NSString *_sdkRequestID;
    unsigned long long _enterTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSString *sdkRequestID; // @synthesize sdkRequestID=_sdkRequestID;
@property(nonatomic) _Bool didScrollToSingleEmoji; // @synthesize didScrollToSingleEmoji=_didScrollToSingleEmoji;
@property(retain, nonatomic) UITapGestureRecognizer *storePackViewMoreGesture; // @synthesize storePackViewMoreGesture=_storePackViewMoreGesture;
@property(nonatomic) double emojiCellMargin; // @synthesize emojiCellMargin=_emojiCellMargin;
@property(nonatomic) unsigned long long emojiCellLineCount; // @synthesize emojiCellLineCount=_emojiCellLineCount;
@property(nonatomic) unsigned long long emotionFetchStatus; // @synthesize emotionFetchStatus=_emotionFetchStatus;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderStreamFooterView *noMoreFooterView; // @synthesize noMoreFooterView=_noMoreFooterView;
@property(retain, nonatomic) WCFinderStreamFooterView *loadmoreFooterView; // @synthesize loadmoreFooterView=_loadmoreFooterView;
@property(retain, nonatomic) UILabel *statusTips; // @synthesize statusTips=_statusTips;
- (id)reportParams;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)updateLoadMoreFooterViewStatus;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollToSingleEmojiIfNeeded;
- (void)onTapGesture:(id)arg1;
- (unsigned long long)cellTypeForSection:(unsigned long long)arg1;
- (id)enterTimeStr;
- (unsigned long long)sdkPageID;
- (id)sdkPageName;
- (id)getViewController;
- (id)getNavController;
- (void)onTapRetry;
- (void)updateStatusTips:(_Bool)arg1 tips:(id)arg2;
- (void)emotionTabPageModelGotDataChangeAndNeedReload;
- (void)emotionTabPageModelFetchFailedForType:(unsigned long long)arg1;
- (void)emotionTabPageModelFetchDoneForType:(unsigned long long)arg1 andHasMore:(_Bool)arg2;
- (void)emotionTabPageModelFirstPageDataLoadFinish:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)isStorePackFlattened;
- (void)configHeaderViewFor:(id)arg1 withTitle:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)genEmojiCellWidth;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 footerEdgeInsetAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)pageSizeDidChanged;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

