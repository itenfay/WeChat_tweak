//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface SendOpenIMVerifyRequestReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(nonatomic) unsigned long long friendFlag; // @dynamic friendFlag;
@property(retain, nonatomic) NSString *tpUsername; // @dynamic tpUsername;
@property(retain, nonatomic) NSString *verifyContent; // @dynamic verifyContent;

@end

