//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPaidCollectionInfo;

@interface WCFinderPaidCollectionConsumeAdapter : NSObject
{
    int _collectionType;
    FinderPaidCollectionInfo *_paidCollectionInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int collectionType; // @synthesize collectionType=_collectionType;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo; // @synthesize paidCollectionInfo=_paidCollectionInfo;
- (id)consumeRepeatTips;
- (id)consumeTimeoutTips;
- (id)consumeSuccTips;
- (id)consumeFailTips;
- (id)consumeAggrementString;
- (id)productInsufficientTitle;
- (id)productTitle;
- (int)wecoinBusinessID;
- (void)fetchPurchaseBillWithFinderUsername:(id)arg1 sourceFeedID:(id)arg2 reportScene:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithPaidCollectionInfo:(id)arg1;

@end

