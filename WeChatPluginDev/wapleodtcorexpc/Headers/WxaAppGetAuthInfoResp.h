//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, WxaAppBaseResponse, WxaUseUserInfo;

@interface WxaAppGetAuthInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *authItem; // @dynamic authItem;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WxaUseUserInfo *useUserInfo; // @dynamic useUserInfo;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

