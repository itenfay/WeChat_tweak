//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface RequestWxaHBRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int hbScope; // @dynamic hbScope;
@property(nonatomic) int hbType; // @dynamic hbType;
@property(nonatomic) unsigned int perValue; // @dynamic perValue;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;
@property(nonatomic) int totalNum; // @dynamic totalNum;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

