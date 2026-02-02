//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface CheckCanSetAliasResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *results; // @dynamic results;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(nonatomic) unsigned int verifyType; // @dynamic verifyType;
@property(retain, nonatomic) NSString *verifyUrl; // @dynamic verifyUrl;

@end

