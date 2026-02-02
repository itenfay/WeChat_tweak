//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveColorfulLabel, WCFinderLiveHomePageAggregationAnchorHeaderInfoView;

@interface WCFinderLiveHomePageAggregationImageInfoCard
{
    MMLiveColorfulLabel *_titleLabel;
    WCFinderLiveHomePageAggregationAnchorHeaderInfoView *_headerInfoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageAggregationAnchorHeaderInfoView *headerInfoView; // @synthesize headerInfoView=_headerInfoView;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)showHeaderInfo;
- (void)updateWithCard:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;

@end

