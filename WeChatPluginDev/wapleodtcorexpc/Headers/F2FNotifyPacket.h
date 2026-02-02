//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface F2FNotifyPacket : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *fromUser; // @dynamic fromUser;
@property(nonatomic) unsigned long long key; // @dynamic key;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *toUser; // @dynamic toUser;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *xchgList; // @dynamic xchgList;

@end

