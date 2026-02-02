//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UILabel, UIScrollView, WCFinderRedPacketCoverCropView, WCFinderRedPacketCropSliderView, WCFinderRedPacketVideoEditRequestParams;
@protocol WCFinderRedPacketVideoEditViewControllerDelegate;

@interface WCFinderRedPacketVideoEditViewController
{
    id <WCFinderRedPacketVideoEditViewControllerDelegate> _delegate;
    WCFinderRedPacketVideoEditRequestParams *_requestParams;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    WCFinderRedPacketCoverCropView *_coverCropView;
    WCFinderRedPacketCropSliderView *_sliderView;
    MMUIButton *_saveBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) WCFinderRedPacketCropSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) WCFinderRedPacketCoverCropView *coverCropView; // @synthesize coverCropView=_coverCropView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WCFinderRedPacketVideoEditRequestParams *requestParams; // @synthesize requestParams=_requestParams;
@property(nonatomic) __weak id <WCFinderRedPacketVideoEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCoverCropRangeModel;
- (void)throttleCheckCropViewScroll;
- (void)onSliderViewScrollAction;
- (void)onSliderViewPanGesture:(long long)arg1;
- (void)loadCoverInfo;
- (void)onClickSavebtn;
- (void)layoutAllSubviews;
- (id)navigationBarBackgroundColor;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)willDisappear;
- (id)initWithVideoUrl:(id)arg1 minSeconds:(long long)arg2 maxSeconds:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

