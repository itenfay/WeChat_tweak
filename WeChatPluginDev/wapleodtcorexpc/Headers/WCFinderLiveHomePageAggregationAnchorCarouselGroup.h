//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, WCFinderLiveAggregationCardAnchorGroup;

@interface WCFinderLiveHomePageAggregationAnchorCarouselGroup : UIView
{
    WCFinderLiveAggregationCardAnchorGroup *_group;
    UIView *_headInfoBgView;
    NSMutableArray *_headInfoViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *headInfoViews; // @synthesize headInfoViews=_headInfoViews;
@property(retain, nonatomic) UIView *headInfoBgView; // @synthesize headInfoBgView=_headInfoBgView;
@property(retain, nonatomic) WCFinderLiveAggregationCardAnchorGroup *group; // @synthesize group=_group;
- (_Bool)isSmallScreen;
- (void)updateWithGroup:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

