//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface VerifyOpenIMContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long friendFlag; // @dynamic friendFlag;
@property(retain, nonatomic) NSString *tpUsername; // @dynamic tpUsername;
@property(retain, nonatomic) NSString *verifyTicket; // @dynamic verifyTicket;

@end

