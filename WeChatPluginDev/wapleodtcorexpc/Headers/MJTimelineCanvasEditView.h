//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTimelineCanvasEditViewModel, MMUIButton, NSString, UICollectionView;
@protocol MJTimelineCanvasEditViewDelegate;

@interface MJTimelineCanvasEditView
{
    id <MJTimelineCanvasEditViewDelegate> _delegate;
    MJTimelineCanvasEditViewModel *_viewModel;
    UICollectionView *_canvasCollectionView;
    MMUIButton *_contentScaleModeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *contentScaleModeButton; // @synthesize contentScaleModeButton=_contentScaleModeButton;
@property(retain, nonatomic) UICollectionView *canvasCollectionView; // @synthesize canvasCollectionView=_canvasCollectionView;
@property(retain, nonatomic) MJTimelineCanvasEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJTimelineCanvasEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCellSelection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)contentScaleModeButtonDidTouchUpInside:(id)arg1;
- (void)bindViews;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

