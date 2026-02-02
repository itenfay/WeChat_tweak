//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SubmitOriginalReviewRequest_WxaGameEnvContext, SubmitOriginalReviewRequest_WxagGameOriginalReviewResult, WxaGameBaseInfo, WxaGameClientPublicLibInfo;

@interface SubmitOriginalReviewRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SubmitOriginalReviewRequest_WxaGameEnvContext *envContext; // @dynamic envContext;
@property(retain, nonatomic) WxaGameClientPublicLibInfo *publicLib; // @dynamic publicLib;
@property(retain, nonatomic) SubmitOriginalReviewRequest_WxagGameOriginalReviewResult *result; // @dynamic result;
@property(retain, nonatomic) WxaGameBaseInfo *wxaGameInfo; // @dynamic wxaGameInfo;

@end

