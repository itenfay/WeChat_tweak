//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveColorfulLabel, NSArray;

@interface WCFinderLiveHomePageAggregationECBrandsCard
{
    MMLiveColorfulLabel *_titleLabel;
    MMLiveColorfulLabel *_subTitleLabel;
    NSArray *_promotingViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *promotingViews; // @synthesize promotingViews=_promotingViews;
@property(retain, nonatomic) MMLiveColorfulLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)currentGroupEntryBuffer;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

