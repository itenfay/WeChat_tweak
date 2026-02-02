//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGetTopicRecommendMusicCGIParams : NSObject
{
    int _topicType;
    unsigned long long _topicId;
    NSString *_encryptedEventTopicId;
    NSString *_topicWording;
    NSString *_fromObjectId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromObjectId; // @synthesize fromObjectId=_fromObjectId;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(copy, nonatomic) NSString *topicWording; // @synthesize topicWording=_topicWording;
@property(copy, nonatomic) NSString *encryptedEventTopicId; // @synthesize encryptedEventTopicId=_encryptedEventTopicId;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;

@end

