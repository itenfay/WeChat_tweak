//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, ModUserInfo, UserInfoExt;

@class WXPBGeneratedMessage;

@interface GetProfileResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ModUserInfo *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) UserInfoExt *userInfoExt; // @dynamic userInfoExt;

@end

