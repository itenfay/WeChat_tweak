//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TransToBankHistoryItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankLogo; // @dynamic bankLogo;
@property(retain, nonatomic) NSString *moneyText; // @dynamic moneyText;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *stateColor; // @dynamic stateColor;
@property(retain, nonatomic) NSString *stateText; // @dynamic stateText;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *transferBillId; // @dynamic transferBillId;
@property(retain, nonatomic) NSString *transferTime; // @dynamic transferTime;
@property(nonatomic) unsigned long long transferUnixtime; // @dynamic transferUnixtime;

@end

