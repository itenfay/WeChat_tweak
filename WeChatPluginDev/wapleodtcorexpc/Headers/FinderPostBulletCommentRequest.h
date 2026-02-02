//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPostBulletCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned long long commentSource; // @dynamic commentSource;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned long long contentType; // @dynamic contentType;
@property(nonatomic) unsigned int feedPlayTimes; // @dynamic feedPlayTimes;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long followBulletCommentId; // @dynamic followBulletCommentId;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned int postIdentity; // @dynamic postIdentity;
@property(nonatomic) unsigned long long videoTimestamp; // @dynamic videoTimestamp;

@end

