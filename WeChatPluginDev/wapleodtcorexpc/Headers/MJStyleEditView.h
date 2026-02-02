//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJCollectionView, MJMaterialLoadingStatusCoordinator, MJStyleEditData, NSString, UIButton;
@protocol MJStyleEditViewDelegate;

@interface MJStyleEditView
{
    id <MJStyleEditViewDelegate> _delegate;
    MJMaterialLoadingStatusCoordinator *_coordinator;
    MJStyleEditData *_data;
    MJCollectionView *_collectionView;
    UIButton *_reloadButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) MJCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MJStyleEditData *data; // @synthesize data=_data;
@property(retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <MJStyleEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)reuseId;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) unsigned long long type;
- (void)selectedStateChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)reloadConstraints;
- (void)reloadWithData:(id)arg1;
- (void)setupViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

