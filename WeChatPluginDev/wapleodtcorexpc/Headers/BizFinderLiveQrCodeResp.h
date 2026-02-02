//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BizFinderLiveQrCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) _Bool verifyOk; // @dynamic verifyOk;

@end

