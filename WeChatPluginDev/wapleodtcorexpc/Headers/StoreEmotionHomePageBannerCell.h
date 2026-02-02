//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class InfiniteLoopContainerView, MMTimer, NSArray, NSString;

@interface StoreEmotionHomePageBannerCell : UICollectionViewCell
{
    NSArray *_bannerList;
    InfiniteLoopContainerView *_pageLoopView;
    MMTimer *_timer;
    CDUnknownBlockType _tapItemHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapItemHandler; // @synthesize tapItemHandler=_tapItemHandler;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) InfiniteLoopContainerView *pageLoopView; // @synthesize pageLoopView=_pageLoopView;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (void)onLoop;
- (void)initTimer;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

