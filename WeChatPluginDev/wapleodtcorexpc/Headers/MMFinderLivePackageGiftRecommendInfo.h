//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, NSArray, NSString;

@interface MMFinderLivePackageGiftRecommendInfo : NSObject
{
    unsigned long long _recommendType;
    unsigned long long _seq;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSString *_wording;
    NSArray *_batchList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *batchList; // @synthesize batchList=_batchList;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned long long recommendType; // @synthesize recommendType=_recommendType;
- (id)description;
- (void)copyFromPackageGiftRecommendInfoResp:(id)arg1;
- (id)initWithPackageGiftRecommendInfoResp:(id)arg1;

@end

