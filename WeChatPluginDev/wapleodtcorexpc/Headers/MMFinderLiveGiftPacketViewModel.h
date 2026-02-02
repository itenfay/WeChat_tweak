//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId;

@interface MMFinderLiveGiftPacketViewModel : NSObject
{
    _Bool _isSelected;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_giftItem;
    unsigned long long _productCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned long long productCount; // @synthesize productCount=_productCount;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2;

@end

