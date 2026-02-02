//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface ExtRegResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;
@property(nonatomic) unsigned int serverTime; // @dynamic serverTime;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

