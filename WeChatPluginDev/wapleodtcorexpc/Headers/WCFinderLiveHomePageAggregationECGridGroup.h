//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;
@protocol WCFinderLiveHomePageAggregationECGridGroupDelegate;

@interface WCFinderLiveHomePageAggregationECGridGroup : UIView
{
    id <WCFinderLiveHomePageAggregationECGridGroupDelegate> _delegate;
    NSMutableArray *_productGroup;
    UIView *_containerView;
    NSMutableArray *_productViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *productViews; // @synthesize productViews=_productViews;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *productGroup; // @synthesize productGroup=_productGroup;
@property(nonatomic) __weak id <WCFinderLiveHomePageAggregationECGridGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)enableFinderLiveGenericProductInfoViewHotSellingAnimation:(id)arg1;
- (void)onFinderLiveGenericProductInfoViewStopHotSellingAnimation:(id)arg1;
- (void)onFinderLiveGenericProductInfoViewStartHotSellingAnimation:(id)arg1;
- (void)updateWithGroup:(id)arg1 hotSellingOptions:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

