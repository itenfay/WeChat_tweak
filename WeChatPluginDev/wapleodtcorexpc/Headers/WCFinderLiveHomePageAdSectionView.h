//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveHomePageAdSectionViewCollectionFlowLayout;
@protocol WCFinderLiveHomePageAdSectionViewDelegate;

@interface WCFinderLiveHomePageAdSectionView
{
    id <WCFinderLiveHomePageAdSectionViewDelegate> _delegate;
    WCFinderLiveHomePageAdSectionViewCollectionFlowLayout *_layout;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageAdSectionViewCollectionFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <WCFinderLiveHomePageAdSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onContainerSectionVMHomePageResetState;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)generateCollectionView;
- (void)updateWithVM:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

