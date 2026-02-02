//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, UICollectionView, WCVideoProducerDataSource;
@protocol WCMomentsCompositorTemplateTableDelegate;

@interface WCMomentsCompositorTemplateTableViewController
{
    struct CGSize _size;
    NSIndexPath *_focusedIndex;
    long long _originSection;
    id <WCMomentsCompositorTemplateTableDelegate> _delegate;
    WCVideoProducerDataSource *_cellVMData;
    UICollectionView *_templateCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *templateCollectionView; // @synthesize templateCollectionView=_templateCollectionView;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(nonatomic) __weak id <WCMomentsCompositorTemplateTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initView;
- (void)onTemplateAtIndex:(id)arg1 changedFocusTo:(_Bool)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)showWithTemplateData:(id)arg1 fromSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

