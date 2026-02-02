//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderLiveTopCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int liveScene; // @dynamic liveScene;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSString *originalClientMsgId; // @dynamic originalClientMsgId;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

