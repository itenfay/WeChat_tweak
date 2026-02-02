//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WxaUseUserInfo;

@interface WAAppAuthRespData
{
    NSArray *_authInfoList;
    WxaUseUserInfo *_useUserInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaUseUserInfo *useUserInfo; // @synthesize useUserInfo=_useUserInfo;
@property(retain, nonatomic) NSArray *authInfoList; // @synthesize authInfoList=_authInfoList;

@end

