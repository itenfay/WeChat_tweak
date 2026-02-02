//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveColorfulLabel, NSMutableArray, NSString, WCFinderLiveAggregationCardAnchorGroup;

@interface WCFinderLiveHomePageAggregationAnchorHeaderInfoView : UIView
{
    NSMutableArray *_headImageViews;
    WCFinderLiveAggregationCardAnchorGroup *_anchorGroup;
    NSString *_title;
    MMLiveColorfulLabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveColorfulLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) WCFinderLiveAggregationCardAnchorGroup *anchorGroup; // @synthesize anchorGroup=_anchorGroup;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
- (void)layoutSubviews;
- (double)widthToFit:(double)arg1;
- (void)cropHeadViewIntersectionArea:(id)arg1;
- (void)updateWithAnchorGroup:(id)arg1 title:(id)arg2 textColors:(id)arg3;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

