//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveFreeGiftPackageInfo, MMFinderLiveRewardFreeGift, NSMutableArray, NSMutableSet;

@interface MMFinderLiveRewardFreeGiftManager : NSObject
{
    NSMutableSet *_usedFreeGiftIdSet;
    NSMutableArray *_freeGiftArray;
    MMFinderLiveRewardFreeGift *_latestLocalInsertFreeGift;
    FinderLiveFreeGiftPackageInfo *_latestFreeGiftPackageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveFreeGiftPackageInfo *latestFreeGiftPackageInfo; // @synthesize latestFreeGiftPackageInfo=_latestFreeGiftPackageInfo;
@property(retain, nonatomic) MMFinderLiveRewardFreeGift *latestLocalInsertFreeGift; // @synthesize latestLocalInsertFreeGift=_latestLocalInsertFreeGift;
@property(retain, nonatomic) NSMutableArray *freeGiftArray; // @synthesize freeGiftArray=_freeGiftArray;
@property(retain, nonatomic) NSMutableSet *usedFreeGiftIdSet; // @synthesize usedFreeGiftIdSet=_usedFreeGiftIdSet;
- (void)insertLocalReceivedFreeGiftArrayIfNeeded;
- (void)rebuildFreeGiftArray;
- (_Bool)isFreeGiftAlreadyUsed:(id)arg1;
- (id)handleFreeGiftWithCurrentPackageItems:(id)arg1;
- (id)createBatchInfoFromFreeGift:(id)arg1;
- (id)createRewardItemFromFreeGift:(id)arg1;
- (id)getNextSendableFreeGift;
- (void)unmarkFreeGiftDidSent:(id)arg1 giftIds:(id)arg2;
- (void)markFreeGiftDidSent:(id)arg1 count:(unsigned long long)arg2;
- (void)insertFreeGiftIfNeeded:(id)arg1;
- (void)syncServerFreeGiftPackageInfo:(id)arg1;
- (id)init;

@end

