//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, WCFinderLiveAggregationCard, WCFinderLiveHomePageFeedAggregationCardVM;

@interface WCFinderLiveHomePageAggregationBaseCard : UIView
{
    MMWebImageView *_bgImgView;
    WCFinderLiveAggregationCard *_card;
    CDUnknownBlockType _backgroundTapAction;
    WCFinderLiveHomePageFeedAggregationCardVM *_feedVM;
    CDUnknownBlockType _itemActionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType itemActionBlock; // @synthesize itemActionBlock=_itemActionBlock;
@property(retain, nonatomic) WCFinderLiveHomePageFeedAggregationCardVM *feedVM; // @synthesize feedVM=_feedVM;
@property(copy, nonatomic) CDUnknownBlockType backgroundTapAction; // @synthesize backgroundTapAction=_backgroundTapAction;
@property(retain, nonatomic) WCFinderLiveAggregationCard *card; // @synthesize card=_card;
@property(retain, nonatomic) MMWebImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void)didEndDisplay;
- (void)willDisplay;
- (unsigned long long)currenLoopPageIndex;
- (id)currentGroupJumpBypassBuffer;
- (id)currentGroupEntryBuffer;
- (_Bool)useImgMode;
- (void)updateWithCard:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

