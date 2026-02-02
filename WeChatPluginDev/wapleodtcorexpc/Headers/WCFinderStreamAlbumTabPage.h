//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderStreamFooterView;

@interface WCFinderStreamAlbumTabPage
{
    WCFinderStreamFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)playList:(id)arg1 appendDataAtRange:(struct _NSRange)arg2;
- (void)playListDataDidReload:(id)arg1;
- (void)updateLoadingaState;
- (void)viewDidAppear;
- (void)viewWillApear;
- (void)setViewModel:(id)arg1;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

