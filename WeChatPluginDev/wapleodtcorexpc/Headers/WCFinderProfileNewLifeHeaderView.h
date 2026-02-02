//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSMutableArray, WCFinderProfileNewLifeBannerView, WCFinderProfileNewLifeHeaderViewModel;

@interface WCFinderProfileNewLifeHeaderView : UICollectionReusableView
{
    WCFinderProfileNewLifeHeaderViewModel *_viewModel;
    WCFinderProfileNewLifeBannerView *_bannerView;
    NSMutableArray *_gadgetViews;
}

+ (double)topPadding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *gadgetViews; // @synthesize gadgetViews=_gadgetViews;
@property(retain, nonatomic) WCFinderProfileNewLifeBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) WCFinderProfileNewLifeHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onTapBanner;
- (id)generateGadgetViewWithSvgIconName:(id)arg1 count:(unsigned int)arg2;
- (void)updateGadgets;
- (void)updateBannerReportParams:(id)arg1;
- (void)refresh;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateLayouts;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

