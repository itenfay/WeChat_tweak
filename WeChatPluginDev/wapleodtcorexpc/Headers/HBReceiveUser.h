//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface HBReceiveUser : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *gameTips; // @dynamic gameTips;
@property(retain, nonatomic) NSString *headimg; // @dynamic headimg;
@property(nonatomic) unsigned int isFriend; // @dynamic isFriend;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned long long receiveAmount; // @dynamic receiveAmount;
@property(nonatomic) unsigned long long receiveTime; // @dynamic receiveTime;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

