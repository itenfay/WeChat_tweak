//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderSectionInfo, NSData, NSString, TopicFilter;

@interface FinderGetTopicListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *byPassInfo; // @dynamic byPassInfo;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(retain, nonatomic) NSString *encryptedTopicid; // @dynamic encryptedTopicid;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long fromObjectId; // @dynamic fromObjectId;
@property(nonatomic) unsigned int fromType; // @dynamic fromType;
@property(nonatomic) unsigned int innerTabType; // @dynamic innerTabType;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned int mediaTabType; // @dynamic mediaTabType;
@property(retain, nonatomic) NSData *nextObjectBuffer; // @dynamic nextObjectBuffer;
@property(nonatomic) unsigned int prefetchType; // @dynamic prefetchType;
@property(nonatomic) unsigned int rollDir; // @dynamic rollDir;
@property(retain, nonatomic) FinderSectionInfo *sectionInfo; // @dynamic sectionInfo;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSString *topic; // @dynamic topic;
@property(retain, nonatomic) NSData *topicBuffer; // @dynamic topicBuffer;
@property(retain, nonatomic) TopicFilter *topicFilter; // @dynamic topicFilter;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(nonatomic) unsigned int topicType; // @dynamic topicType;

@end

