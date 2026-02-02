//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, MMFinderLivePurchasedFeedViewModel;

@interface MMFinderLivePuchasedContentJumpParams : NSObject
{
    unsigned long long _livePurchasedCount;
    unsigned long long _memberPurchasedCount;
    unsigned long long _paidCollectionCount;
    unsigned long long _livePaidMicCount;
    MMFinderLivePurchasedFeedViewModel *_livePurchasedFeedVM;
    FinderJumpInfo *_livePaidMicJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *livePaidMicJumpInfo; // @synthesize livePaidMicJumpInfo=_livePaidMicJumpInfo;
@property(retain, nonatomic) MMFinderLivePurchasedFeedViewModel *livePurchasedFeedVM; // @synthesize livePurchasedFeedVM=_livePurchasedFeedVM;
@property(nonatomic) unsigned long long livePaidMicCount; // @synthesize livePaidMicCount=_livePaidMicCount;
@property(nonatomic) unsigned long long paidCollectionCount; // @synthesize paidCollectionCount=_paidCollectionCount;
@property(nonatomic) unsigned long long memberPurchasedCount; // @synthesize memberPurchasedCount=_memberPurchasedCount;
@property(nonatomic) unsigned long long livePurchasedCount; // @synthesize livePurchasedCount=_livePurchasedCount;
- (id)descForLogging;

@end

