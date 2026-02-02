//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJInspectorToolBar, MJMaterialLoadingStatusCoordinator, MJStickerPickerViewModel, NSIndexPath, NSString, UICollectionView;
@protocol MJStickerPickerViewControllerDelegate;

@interface MJStickerPickerViewController : UIViewController
{
    _Bool _isAppearing;
    id <MJStickerPickerViewControllerDelegate> _delegate;
    MJStickerPickerViewModel *_viewModel;
    MJMaterialLoadingStatusCoordinator *_coordinator;
    NSIndexPath *_selectedIndexPath;
    UICollectionView *_contentView;
    MJInspectorToolBar *_toolBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJInspectorToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) MJStickerPickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJStickerPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(readonly, nonatomic) _Bool isReplacing;
- (void)updateSelect:(_Bool)arg1 withCell:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)fetchDatas;
- (void)updateOnIsPlayingDidChange:(_Bool)arg1;
- (void)updateOnPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)updateOnSkimTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)resetPreview;
- (void)reloadData:(id)arg1;
- (void)addToolBarIfNeeded;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

