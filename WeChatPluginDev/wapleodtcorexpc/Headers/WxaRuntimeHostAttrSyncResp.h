//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, DynamicAttrInfo, GlobalAttrInfo;

@class WXPBGeneratedMessage;

@interface WxaRuntimeHostAttrSyncResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) DynamicAttrInfo *dynamicAttrInfo; // @dynamic dynamicAttrInfo;
@property(retain, nonatomic) GlobalAttrInfo *globalAttrInfo; // @dynamic globalAttrInfo;

@end

