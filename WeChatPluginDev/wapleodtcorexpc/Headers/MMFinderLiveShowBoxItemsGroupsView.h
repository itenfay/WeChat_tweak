//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShowBoxItemsGroupsViewTuple, MMFinderLiveShowBoxItemsViewConfig, NSArray, NSTimer;

@interface MMFinderLiveShowBoxItemsGroupsView : UIView
{
    double _interval;
    MMFinderLiveShowBoxItemsViewConfig *_config;
    CDUnknownBlockType _onBecomeNoVisibleItemsForLimitDiscountInvalid;
    NSTimer *_timer;
    NSArray *_tuples;
    MMFinderLiveShowBoxItemsGroupsViewTuple *_current;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsGroupsViewTuple *current; // @synthesize current=_current;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType onBecomeNoVisibleItemsForLimitDiscountInvalid; // @synthesize onBecomeNoVisibleItemsForLimitDiscountInvalid=_onBecomeNoVisibleItemsForLimitDiscountInvalid;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsViewConfig *config; // @synthesize config=_config;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) NSArray *visibleShowBoxItems;
- (void)dealloc;
- (void)cleanInvalidLimitDiscountIn:(id)arg1;
- (void)switchTo:(id)arg1;
- (void)tryDisplayNext;
- (void)updateTimer;
- (void)layoutSubviews;
- (void)updateWithGroups:(id)arg1;

@end

