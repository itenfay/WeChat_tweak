//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetLiveTabsRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *byPass; // @dynamic byPass;
@property(retain, nonatomic) NSString *encryptedObjectId; // @dynamic encryptedObjectId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

