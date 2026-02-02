//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveReceiveCouponResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(nonatomic) unsigned int clickButtonAction; // @dynamic clickButtonAction;
@property(nonatomic) unsigned int clickButtonStyle; // @dynamic clickButtonStyle;
@property(nonatomic) unsigned int couponStatus; // @dynamic couponStatus;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;

@end

