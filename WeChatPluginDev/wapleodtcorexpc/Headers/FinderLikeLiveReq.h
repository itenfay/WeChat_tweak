//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveReportBaseInfo, NSData, NSString;

@interface FinderLikeLiveReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned long long count; // @dynamic count;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int liveMsgType; // @dynamic liveMsgType;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

