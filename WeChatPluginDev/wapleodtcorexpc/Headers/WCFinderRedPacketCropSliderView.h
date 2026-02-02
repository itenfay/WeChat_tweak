//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, WCFinderRedPacketCropFrameView, WCFinderRedPacketCropSliderModel;
@protocol WCFinderRedPacketCropSliderViewDelegate;

@interface WCFinderRedPacketCropSliderView
{
    id <WCFinderRedPacketCropSliderViewDelegate> _delegate;
    WCFinderRedPacketCropSliderModel *_sliderModel;
    WCFinderRedPacketCropFrameView *_cropFrameView;
    UICollectionView *_collectionView;
    long long _minSeconds;
    long long _maxSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxSeconds; // @synthesize maxSeconds=_maxSeconds;
@property(nonatomic) long long minSeconds; // @synthesize minSeconds=_minSeconds;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderRedPacketCropFrameView *cropFrameView; // @synthesize cropFrameView=_cropFrameView;
@property(retain, nonatomic) WCFinderRedPacketCropSliderModel *sliderModel; // @synthesize sliderModel=_sliderModel;
@property(nonatomic) __weak id <WCFinderRedPacketCropSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCollectionViewInset;
- (id)getCurCropVideoTimeRange;
- (void)onCropSliderPanViewRangeChanged:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutAllSubviews;
- (struct CGSize)getShareSize;
- (void)loadAvAssetInfo;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1 videoURL:(id)arg2 minSeconds:(long long)arg3 maxSeconds:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

