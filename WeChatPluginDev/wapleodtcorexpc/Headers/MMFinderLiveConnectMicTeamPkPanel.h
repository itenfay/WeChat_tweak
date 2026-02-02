//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicPKInfo, NSString, UICollectionView, UICollectionViewDiffableDataSource;

@interface MMFinderLiveConnectMicTeamPkPanel
{
    _Bool _isApplicant;
    CDUnknownBlockType _pkBlock;
    CDUnknownBlockType _quitMicBlock;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    MMFinderLiveConnectMicPKInfo *_pkInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicant; // @synthesize isApplicant=_isApplicant;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo; // @synthesize pkInfo=_pkInfo;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType quitMicBlock; // @synthesize quitMicBlock=_quitMicBlock;
@property(copy, nonatomic) CDUnknownBlockType pkBlock; // @synthesize pkBlock=_pkBlock;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)changeTeamToAnother:(id)arg1;
- (id)createTeam2Section:(id)arg1;
- (id)createTeam1Section:(id)arg1;
- (double)itemSpacingWithSection:(long long)arg1;
- (id)createLayout;
- (id)defaultSnapshot;
- (void)setupDataSourceIfNeeded;
- (void)layoutSubviews;
- (void)closeAction;
- (id)makeCloseButton;
- (void)initViews;
- (double)pageSheetContentHeight;
- (void)requestDismiss;
- (_Bool)useDiffableDatasourceWithCompositionalLayout;
- (void)updateWithPkInfo:(id)arg1;
- (void)showWithPkInfo:(id)arg1 isApplicant:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

