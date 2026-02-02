//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderDelFeedRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSString *posterUsername; // @dynamic posterUsername;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

