//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADCommentWrap : NSObject
{
    unsigned int _startPositionType;
    unsigned int _endPositionType;
    unsigned int _commentCount;
    unsigned int _source;
    NSString *_adID;
    NSString *_publishID;
    NSString *_uxInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    double _tableContentY;
    NSString *_snsStatExt;
    NSString *_adInfoAddress;
    NSString *_cacheKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *adInfoAddress; // @synthesize adInfoAddress=_adInfoAddress;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) double tableContentY; // @synthesize tableContentY=_tableContentY;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int endPositionType; // @synthesize endPositionType=_endPositionType;
@property(nonatomic) unsigned int startPositionType; // @synthesize startPositionType=_startPositionType;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;

@end

