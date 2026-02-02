//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, WCFinderAnimationLoadingView, WCFinderProfileNewLifeHeaderView, WCFinderProfileNewLifeHeaderViewModel, WCFinderStreamFooterView;

@interface WCFinderProfileNewLifePage
{
    _Bool _firstAppear;
    int _newlifetabEnterType;
    WCFinderProfileNewLifeHeaderView *_headerView;
    WCFinderProfileNewLifeHeaderViewModel *_headerViewModel;
    WCFinderStreamFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    RichTextView *_stateLabel;
    RichTextView *_stateClickLabel;
}

- (void).cxx_destruct;
@property(nonatomic) int newlifetabEnterType; // @synthesize newlifetabEnterType=_newlifetabEnterType;
@property(nonatomic) _Bool firstAppear; // @synthesize firstAppear=_firstAppear;
@property(retain, nonatomic) RichTextView *stateClickLabel; // @synthesize stateClickLabel=_stateClickLabel;
@property(retain, nonatomic) RichTextView *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderProfileNewLifeHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) WCFinderProfileNewLifeHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (id)collectionView:(id)arg1 layout:(id)arg2 decorationLayoutAttributesAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onNewLifePageModelMoveFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)onNewLifePageModelReload;
- (void)onNewLifePageModelRefreshHeader;
- (void)onNewLifePageModelDeleteAtIndex:(unsigned long long)arg1;
- (void)onNewLifePageModelAppendFromRange:(struct _NSRange)arg1 countAfterAppend:(unsigned long long)arg2;
- (void)onNewLifePageModelFetchStateChanged:(id)arg1;
- (void)onNewLifePageModelStartPost:(id)arg1;
- (_Bool)isDiscoverSearchEnabled;
- (void)refetch;
- (id)stateClickContent;
- (id)stateContent;
- (void)setupStateClickLabel:(id)arg1;
- (void)setupStateLabel:(id)arg1;
- (void)setupLoadingView:(_Bool)arg1;
- (void)updateStateLayout;
- (double)originY30percent;
- (void)updateState;
- (void)updateHeaderView;
- (void)updateHeaderModel;
- (void)initHeaderView;
- (void)viewWillApear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

