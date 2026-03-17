//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString, TwistExtinfo;

@class WXPBGeneratedMessage;

@interface GetTwistAdCardIdResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) NSString *snsId; // @dynamic snsId;
@property(retain, nonatomic) TwistExtinfo *twistExtinfo; // @dynamic twistExtinfo;

@end

