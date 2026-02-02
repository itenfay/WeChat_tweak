//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, BaseRequest, NSData, NSString;

@interface PaySubscribeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) NSString *appServiceUserName; // @dynamic appServiceUserName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int channel; // @dynamic channel;
@property(nonatomic) int payScene; // @dynamic payScene;
@property(retain, nonatomic) NSData *reqKey; // @dynamic reqKey;
@property(nonatomic) int subscribeLevel; // @dynamic subscribeLevel;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end

