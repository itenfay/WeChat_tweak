//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FetchFinderSubscribeMembershipPayBillRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *memberInletSource; // @dynamic memberInletSource;
@property(nonatomic) unsigned int monthCount; // @dynamic monthCount;
@property(retain, nonatomic) NSData *subscriptionExtInfo; // @dynamic subscriptionExtInfo;
@property(nonatomic) unsigned int subscriptionType; // @dynamic subscriptionType;

@end

