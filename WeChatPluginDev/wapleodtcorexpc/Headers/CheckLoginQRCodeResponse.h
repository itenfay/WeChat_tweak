//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, LoginQRCodeNotifyPkg;

@class WXPBGeneratedMessage;

@interface CheckLoginQRCodeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LoginQRCodeNotifyPkg *notifyPkg; // @dynamic notifyPkg;

@end

