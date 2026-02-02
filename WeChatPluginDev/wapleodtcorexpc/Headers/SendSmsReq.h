//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface SendSmsReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *optionalMobile; // @dynamic optionalMobile;
@property(retain, nonatomic) NSString *payToken; // @dynamic payToken;
@property(retain, nonatomic) NSString *phoneId; // @dynamic phoneId;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

