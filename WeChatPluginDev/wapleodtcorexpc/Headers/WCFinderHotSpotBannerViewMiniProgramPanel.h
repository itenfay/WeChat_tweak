//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderDataItem, WCFinderHotSpotBannerView, WCFinderLiveAudienceComodityLogReporter, WCFinderLiveProductShareItem, WCFinderShareEntranceMessageInfo;

@interface WCFinderHotSpotBannerViewMiniProgramPanel : UIView
{
    _Bool _isLoading;
    WCFinderDataItem *_dataItem;
    WCFinderLiveProductShareItem *_productShareItem;
    WCFinderShareEntranceMessageInfo *_entranceMessageInfo;
    WCFinderLiveAudienceComodityLogReporter *_reporter;
    WCFinderHotSpotBannerView *_bannerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHotSpotBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo; // @synthesize entranceMessageInfo=_entranceMessageInfo;
@property(retain, nonatomic) WCFinderLiveProductShareItem *productShareItem; // @synthesize productShareItem=_productShareItem;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)resetLoadingFlag;
- (void)handleEnterLiving:(id)arg1;
- (void)onClickEnterLiving:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (id)initWithWidget:(id)arg1 params:(id)arg2;
- (id)initWithWidget:(id)arg1 anchor:(id)arg2 ecSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

