//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveColorfulLabel, NSMutableArray, UIImageView, UIView;

@interface WCFinderLiveHomePageAggregationDualTextCard
{
    NSMutableArray *_headInfoViews;
    UIView *_headInfoBgView;
    MMLiveColorfulLabel *_titleLabel;
    MMLiveColorfulLabel *_subTitleLabel;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMLiveColorfulLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headInfoBgView; // @synthesize headInfoBgView=_headInfoBgView;
@property(retain, nonatomic) NSMutableArray *headInfoViews; // @synthesize headInfoViews=_headInfoViews;
- (void)updateWithCard:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;

@end

