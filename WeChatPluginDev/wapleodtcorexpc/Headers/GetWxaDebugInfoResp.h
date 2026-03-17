//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, GetWxaDebugInfoResp_ModuleItem, NSString;

@class WXPBGeneratedMessage;

@interface GetWxaDebugInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *extJson; // @dynamic extJson;
@property(retain, nonatomic) GetWxaDebugInfoResp_ModuleItem *moduleItem; // @dynamic moduleItem;

@end

