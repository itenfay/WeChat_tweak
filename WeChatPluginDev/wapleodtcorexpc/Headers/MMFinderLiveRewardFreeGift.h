//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGift, NSString;

@interface MMFinderLiveRewardFreeGift : NSObject
{
    _Bool _isLocalInserted;
    unsigned int _isUsed;
    FinderLiveGift *_gift;
    unsigned long long _expireTime;
    NSString *_giftId;
}

+ (id)createFromPBGiftInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLocalInserted; // @synthesize isLocalInserted=_isLocalInserted;
@property(retain, nonatomic) NSString *giftId; // @synthesize giftId=_giftId;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int isUsed; // @synthesize isUsed=_isUsed;
@property(retain, nonatomic) FinderLiveGift *gift; // @synthesize gift=_gift;

@end

