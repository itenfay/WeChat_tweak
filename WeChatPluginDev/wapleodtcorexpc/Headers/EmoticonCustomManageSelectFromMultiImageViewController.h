//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIImage, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol EmoticonCustomManageSelectFromMultiImageViewControllerDelegate;

@interface EmoticonCustomManageSelectFromMultiImageViewController
{
    _Bool _allMediaDownloaded;
    id <EmoticonCustomManageSelectFromMultiImageViewControllerDelegate> _delegate;
    UIImage *_placeHolderImage;
    NSArray *_mediaInfos;
    unsigned long long _selectedIndex;
    double _cellViewWidth;
    MMUIButton *_cancelBtn;
    UIButton *_confirmBtn;
    MMUILabel *_tipsLabel;
    UIImageView *_imgPreviewView;
    UICollectionView *_imgPreviewCollectionView;
    NSMutableArray *_cellViews;
    UIView *_cellViewInteractiveView;
    UIPanGestureRecognizer *_swipeSelectGesture;
    UITapGestureRecognizer *_tapSelectGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapSelectGesture; // @synthesize tapSelectGesture=_tapSelectGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *swipeSelectGesture; // @synthesize swipeSelectGesture=_swipeSelectGesture;
@property(retain, nonatomic) UIView *cellViewInteractiveView; // @synthesize cellViewInteractiveView=_cellViewInteractiveView;
@property(retain, nonatomic) NSMutableArray *cellViews; // @synthesize cellViews=_cellViews;
@property(retain, nonatomic) UICollectionView *imgPreviewCollectionView; // @synthesize imgPreviewCollectionView=_imgPreviewCollectionView;
@property(retain, nonatomic) UIImageView *imgPreviewView; // @synthesize imgPreviewView=_imgPreviewView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) _Bool allMediaDownloaded; // @synthesize allMediaDownloaded=_allMediaDownloaded;
@property(nonatomic) double cellViewWidth; // @synthesize cellViewWidth=_cellViewWidth;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *mediaInfos; // @synthesize mediaInfos=_mediaInfos;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(nonatomic) __weak id <EmoticonCustomManageSelectFromMultiImageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapNext;
- (void)onTapCancel;
- (void)doTaptic:(long long)arg1;
- (void)onSwipeSelectGesure:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (void)genCellViewWidth;
- (void)viewWillLayoutSubviews;
- (void)createOrUpdataLayout;
- (id)getImageDataFromMediaInfo:(id)arg1;
- (void)genCellViews;
- (void)initViews;
- (void)onAllMediaDownloaded;
- (void)viewDidTransitionToNewSize;
- (void)bringBtnsToFront;
- (id)progressViewX;
- (void)viewDidLoad;
- (id)initWithMediaInfos:(id)arg1 placeHolderImageData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

