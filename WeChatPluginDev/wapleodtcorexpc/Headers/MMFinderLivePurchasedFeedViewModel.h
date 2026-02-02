//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;
@protocol MMFinderLivePurchasedFeedViewModelDelegate;

@interface MMFinderLivePurchasedFeedViewModel : NSObject
{
    _Bool _isFetching;
    _Bool _hasMoreData;
    unsigned int _purchasedFeedsTotalCount;
    id <MMFinderLivePurchasedFeedViewModelDelegate> _delegate;
    NSMutableArray *_purchasedFeedsList;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) unsigned int purchasedFeedsTotalCount; // @synthesize purchasedFeedsTotalCount=_purchasedFeedsTotalCount;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *purchasedFeedsList; // @synthesize purchasedFeedsList=_purchasedFeedsList;
@property(nonatomic) __weak id <MMFinderLivePurchasedFeedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchNextPurchasedFeedsList;
- (void)resetAndFetchPurchasedFeedsList;
- (id)init;

@end

