//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface MMFinderLiveRewardFreeGiftParams : NSObject
{
    unsigned int _scene;
    NSArray *_freeGiftIdArray;
    NSString *_rewardProductId;
    NSString *_rewardRequestId;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *rewardRequestId; // @synthesize rewardRequestId=_rewardRequestId;
@property(copy, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(retain, nonatomic) NSArray *freeGiftIdArray; // @synthesize freeGiftIdArray=_freeGiftIdArray;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;

@end

