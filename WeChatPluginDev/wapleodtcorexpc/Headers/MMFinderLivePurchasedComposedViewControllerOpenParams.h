//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, MMFinderLivePurchasedFeedViewModel;

@interface MMFinderLivePurchasedComposedViewControllerOpenParams : NSObject
{
    MMFinderLivePurchasedFeedViewModel *_livePurchasedFeedVM;
    FinderJumpInfo *_paidMicJumpInfo;
    unsigned long long _livePurchasedCount;
    unsigned long long _paidMicCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long paidMicCount; // @synthesize paidMicCount=_paidMicCount;
@property(nonatomic) unsigned long long livePurchasedCount; // @synthesize livePurchasedCount=_livePurchasedCount;
@property(retain, nonatomic) FinderJumpInfo *paidMicJumpInfo; // @synthesize paidMicJumpInfo=_paidMicJumpInfo;
@property(retain, nonatomic) MMFinderLivePurchasedFeedViewModel *livePurchasedFeedVM; // @synthesize livePurchasedFeedVM=_livePurchasedFeedVM;

@end

