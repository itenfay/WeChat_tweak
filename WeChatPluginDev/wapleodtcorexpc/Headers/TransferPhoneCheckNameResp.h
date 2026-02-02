//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RemindWin;

@interface TransferPhoneCheckNameResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) RemindWin *jumpWin; // @dynamic jumpWin;
@property(retain, nonatomic) NSString *newRealName; // @dynamic newRealName;
@property(retain, nonatomic) NSString *realNameToken; // @dynamic realNameToken;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

