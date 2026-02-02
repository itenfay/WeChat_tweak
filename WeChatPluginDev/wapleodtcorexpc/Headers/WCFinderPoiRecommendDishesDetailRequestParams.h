//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPoiRecommendDishesDetailRequestParams : NSObject
{
    int _commentScene;
    NSString *_poiId;
    unsigned long long _topicId;
    NSString *_poiBasicInfoBypassData;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *poiBasicInfoBypassData; // @synthesize poiBasicInfoBypassData=_poiBasicInfoBypassData;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;

@end

