//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJStyleEditToolBar, MJStyleEditView, MJStyleEditViewModel, MMUIButton, MMUIView, NSMutableDictionary, NSString, UICollectionView;
@protocol MJStyleEditViewControllerDelegate;

@interface MJStyleEditViewController : UIViewController
{
    id <MJStyleEditViewControllerDelegate> _delegate;
    MJStyleEditViewModel *_viewModel;
    MJStyleEditView *_stickerEditView;
    MJStyleEditView *_styleEditView;
    UICollectionView *_tabCollectionView;
    MMUIView *_seperatorLineView;
    MJStyleEditToolBar *_toolBar;
    MMUIButton *_applyToAllButton;
    NSMutableDictionary *_selectedIdxDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *selectedIdxDict; // @synthesize selectedIdxDict=_selectedIdxDict;
@property(retain, nonatomic) MMUIButton *applyToAllButton; // @synthesize applyToAllButton=_applyToAllButton;
@property(retain, nonatomic) MJStyleEditToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) MMUIView *seperatorLineView; // @synthesize seperatorLineView=_seperatorLineView;
@property(retain, nonatomic) UICollectionView *tabCollectionView; // @synthesize tabCollectionView=_tabCollectionView;
@property(retain, nonatomic) MJStyleEditView *styleEditView; // @synthesize styleEditView=_styleEditView;
@property(retain, nonatomic) MJStyleEditView *stickerEditView; // @synthesize stickerEditView=_stickerEditView;
@property(readonly, nonatomic) MJStyleEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJStyleEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genBtn;
- (void)updateCellSelection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)styleEditView:(id)arg1 needReloadData:(unsigned long long)arg2;
- (long long)selectedIndexWithStyleEditView:(id)arg1 dataType:(unsigned long long)arg2;
- (void)styleEditView:(id)arg1 dataType:(unsigned long long)arg2 didLoadedStyleAtIndex:(long long)arg3 materialID:(id)arg4 error:(id)arg5;
- (void)fetchDatas;
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

