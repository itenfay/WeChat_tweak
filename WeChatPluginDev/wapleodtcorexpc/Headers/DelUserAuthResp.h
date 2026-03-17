//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, UserMgrBaseResponse;

@class WXPBGeneratedMessage;

@interface DelUserAuthResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) UserMgrBaseResponse *usermgrBaseresp; // @dynamic usermgrBaseresp;

@end

