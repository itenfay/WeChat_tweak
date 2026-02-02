//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WalletActivity, WalletEntrance, WalletFunction;

@interface FunctionDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WalletActivity *activity; // @dynamic activity;
@property(retain, nonatomic) NSString *disclaimer; // @dynamic disclaimer;
@property(nonatomic) _Bool downloadRestrict; // @dynamic downloadRestrict;
@property(retain, nonatomic) WalletEntrance *entrance; // @dynamic entrance;
@property(retain, nonatomic) WalletFunction *function; // @dynamic function;
@property(nonatomic) _Bool needGetLatestInfo; // @dynamic needGetLatestInfo;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;

@end

