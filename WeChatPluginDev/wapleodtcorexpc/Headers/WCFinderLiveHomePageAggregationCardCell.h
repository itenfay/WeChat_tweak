//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveHomePageAggregationBaseCard, WCFinderLiveHomePageFeedAggregationCardVM;
@protocol WCFinderLiveHomePageAggregationCardCellDelegate;

@interface WCFinderLiveHomePageAggregationCardCell
{
    id <WCFinderLiveHomePageAggregationCardCellDelegate> _delegate;
    WCFinderLiveHomePageFeedAggregationCardVM *_feedVM;
    WCFinderLiveHomePageAggregationBaseCard *_currentCard;
}

+ (id)cellIdentifier;
+ (Class)cardClass;
+ (Class)classWithMode:(unsigned long long)arg1;
+ (id)cardMode2CardClassMap;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageAggregationBaseCard *currentCard; // @synthesize currentCard=_currentCard;
@property(retain, nonatomic) WCFinderLiveHomePageFeedAggregationCardVM *feedVM; // @synthesize feedVM=_feedVM;
@property(nonatomic) __weak id <WCFinderLiveHomePageAggregationCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getCurrentLoopPageIndex;
- (void)onAggregationCardGetPagFile;
- (void)onAggregationCardUpdate;
- (id)currentGroupJumpBypassBuffer;
- (id)currentGroupEntryBuffer;
- (void)didMoveToWindow;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)updateWithFeedVM:(id)arg1;
- (void)layoutSubviews;
- (void)initCardViewIfNeeded;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

