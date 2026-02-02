//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CheckExternalUrlAntiSpam, NSData, NSString;

@interface CheckExternalUrlResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *actionBuffer; // @dynamic actionBuffer;
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) CheckExternalUrlAntiSpam *antispam; // @dynamic antispam;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *transBuffer; // @dynamic transBuffer;
@property(retain, nonatomic) NSString *transBufferSign; // @dynamic transBufferSign;

@end

