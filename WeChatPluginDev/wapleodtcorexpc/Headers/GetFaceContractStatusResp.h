//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetFaceContractStatusResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *contractDesc; // @dynamic contractDesc;
@property(retain, nonatomic) NSString *contractHint; // @dynamic contractHint;
@property(nonatomic) unsigned int contractStatus; // @dynamic contractStatus;
@property(retain, nonatomic) NSString *contractTitle; // @dynamic contractTitle;
@property(retain, nonatomic) NSString *contractUrl; // @dynamic contractUrl;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

