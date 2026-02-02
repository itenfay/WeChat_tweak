//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, SightLocalVideoImageSlider, UICollectionView, WCVideoProducerBaseSheetView, WCVideoProducerDataSource;
@protocol WCVideoProducerAssetClipperDelegate;

@interface WCVideoProducerAssetClipperViewController
{
    _Bool _isMJAppLauncherEnabled;
    id <WCVideoProducerAssetClipperDelegate> _delegate;
    WCVideoProducerBaseSheetView *_sheetView;
    UICollectionView *_cvAssetBarView;
    SightLocalVideoImageSlider *_sliderView;
    WCVideoProducerDataSource *_cellVMData;
    NSIndexPath *_selectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(retain, nonatomic) SightLocalVideoImageSlider *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UICollectionView *cvAssetBarView; // @synthesize cvAssetBarView=_cvAssetBarView;
@property(retain, nonatomic) WCVideoProducerBaseSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) _Bool isMJAppLauncherEnabled; // @synthesize isMJAppLauncherEnabled=_isMJAppLauncherEnabled;
@property(nonatomic) __weak id <WCVideoProducerAssetClipperDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_getSheetViewContentheight;
- (double)_getSheetViewHeight;
- (void)_initMJAppLauncherButton;
- (void)_initClipperView;
- (void)_initAssetBarView;
- (void)_initSheetView;
- (void)_initView;
- (void)_relayoutView;
- (id)_errorWithCode:(long long)arg1;
- (void)_onDataChanged;
- (void)_appendClipSgementList:(id)arg1;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(_Bool)arg2 manually:(_Bool)arg3;
- (_Bool)_isSelectedCellVMContainsAssetId:(id)arg1;
- (void)_hideSliderView;
- (void)_updateSliderViewWithVideoAVAsset:(id)arg1 assetId:(id)arg2 sliderTimeRange:(CDStruct_e83c9415)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateSliderViewWithPictureImage:(id)arg1 assetId:(id)arg2 sliderTimeRange:(CDStruct_e83c9415)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareSliderViewForAsset:(id)arg1 withPictureDetection:(CDUnknownBlockType)arg2 videoDetection:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)_showSliderViewForCellVM:(id)arg1;
- (void)_playSegmentForCellVM:(id)arg1 startAtTimeSec:(double)arg2;
- (void)_seekSegmentForCellVM:(id)arg1 toTimeSec:(double)arg2;
- (_Bool)_isIndexPathValid:(id)arg1;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (void)_onClickMJAppLauncherButton:(id)arg1;
- (void)_onShowMJAppLauncherButton;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)imageSliderCanMoveStartAndEndFlag:(id)arg1;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(_Bool)arg3;
- (void)imageSlider:(id)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 playFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 startFlagDidMoveToTime:(float)arg2;
- (void)onClickTopActionBarRightButton:(id)arg1;
- (void)onClickTopActionBarLeftButton:(id)arg1;
- (void)selectFirstAssetClip;
- (double)getAssetClipperShowingHeight;
- (id)getAllCellVMList;
- (void)resetDataWithClipSegmentListList:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)setViewTop:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (double)getContentHeightWhenShowing;
- (void)onRelayoutViews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

