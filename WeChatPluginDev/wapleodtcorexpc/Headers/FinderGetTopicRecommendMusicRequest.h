//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetTopicRecommendMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *encryptedTopicEventId; // @dynamic encryptedTopicEventId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned long long fromObjectId; // @dynamic fromObjectId;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(nonatomic) unsigned int topicType; // @dynamic topicType;
@property(retain, nonatomic) NSString *topicWording; // @dynamic topicWording;

@end

