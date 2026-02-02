//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSString;

@interface PayAuthAppRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSString *appSign; // @dynamic appSign;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(retain, nonatomic) NSString *partnerId; // @dynamic partnerId;
@property(retain, nonatomic) NSString *prepayId; // @dynamic prepayId;
@property(retain, nonatomic) NSString *scence; // @dynamic scence;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(retain, nonatomic) NSString *timeStamp; // @dynamic timeStamp;

@end

