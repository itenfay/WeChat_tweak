//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, ChanllengeInfo;

@class WXPBGeneratedMessage;

@interface GetChallengeForAuthNonLoginResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ChanllengeInfo *challenge; // @dynamic challenge;

@end

