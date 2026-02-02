//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderLongVideoUserPageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baserequest; // @dynamic baserequest;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

