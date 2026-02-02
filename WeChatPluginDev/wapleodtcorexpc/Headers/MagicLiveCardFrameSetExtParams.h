//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MagicLiveCardFrameSetExtParams : NSObject
{
    NSString *_uxInfo;
    NSString *_commentScene;
    NSString *_enterImmerseType;
    NSString *_promotionRecommendInfo;
    NSString *_query;
    NSString *_gameClientParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *gameClientParams; // @synthesize gameClientParams=_gameClientParams;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *promotionRecommendInfo; // @synthesize promotionRecommendInfo=_promotionRecommendInfo;
@property(retain, nonatomic) NSString *enterImmerseType; // @synthesize enterImmerseType=_enterImmerseType;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
- (id)description;
- (id)toQueryString;

@end

