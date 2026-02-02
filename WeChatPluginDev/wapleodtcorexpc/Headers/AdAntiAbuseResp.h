//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface AdAntiAbuseResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int canvasAuthFailed; // @dynamic canvasAuthFailed;
@property(nonatomic) unsigned int cleanLocalCache; // @dynamic cleanLocalCache;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;

@end

