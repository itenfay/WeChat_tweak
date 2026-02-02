//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootComposingTemplateSinglePageViewModel, NSIndexPath, NSString, UICollectionView;
@protocol MJShootComposingTemplatePageViewDelegate;

@interface MJShootComposingTemplatePageView
{
    UICollectionView *_collectionView;
    MJShootComposingTemplateSinglePageViewModel *_viewModel;
    id <MJShootComposingTemplatePageViewDelegate> _delegate;
    NSIndexPath *_selectedIndexPath;
    NSString *_downloadingTemplateID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadingTemplateID; // @synthesize downloadingTemplateID=_downloadingTemplateID;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak id <MJShootComposingTemplatePageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJShootComposingTemplateSinglePageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)calcSelectedIndexPath;
- (void)reloadData;
- (void)setDownloadingSucceed:(_Bool)arg1 templateID:(id)arg2;
- (void)setDownloadingProgress:(float)arg1 templateID:(id)arg2;
- (void)templateSinglePageViewModelDidFetchTemplateItemsFailed:(id)arg1;
- (void)templateSinglePageViewModel:(id)arg1 didFetchTemplateItems:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)commonInit;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

