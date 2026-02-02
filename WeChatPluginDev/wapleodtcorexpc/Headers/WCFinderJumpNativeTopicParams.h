//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderJumpNativeTopicParams : NSObject
{
    int _topicType;
    NSString *_topic;
    NSString *_byPassInfoString;
    NSData *_byPassInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(copy, nonatomic) NSString *byPassInfoString; // @synthesize byPassInfoString=_byPassInfoString;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;

@end

