//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderGetTopicInfoResponse_RedirectTopicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *encryptedTopicEventId; // @dynamic encryptedTopicEventId;
@property(nonatomic) unsigned int openRedirect; // @dynamic openRedirect;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(nonatomic) unsigned int topicType; // @dynamic topicType;
@property(retain, nonatomic) NSString *topicWording; // @dynamic topicWording;

@end

