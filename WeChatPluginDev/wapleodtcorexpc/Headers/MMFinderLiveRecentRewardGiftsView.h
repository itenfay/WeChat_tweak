//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol MMFinderLiveRecentRewardGiftsViewDelegate;

@interface MMFinderLiveRecentRewardGiftsView : UIView
{
    id <MMFinderLiveRecentRewardGiftsViewDelegate> _delegate;
    unsigned long long _layoutMode;
    double _maxLength;
    NSMutableArray *_reservedItemViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reservedItemViews; // @synthesize reservedItemViews=_reservedItemViews;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) __weak id <MMFinderLiveRecentRewardGiftsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetReservedItemViewsState;
- (void)cleanUnresersedGiftItemViews;
- (id)addAndItemViewToSubViewWithFrame:(struct CGRect)arg1 giftItem:(id)arg2;
- (void)refreshContentWithUserItem:(id)arg1;
- (void)onClickListOneItemView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

