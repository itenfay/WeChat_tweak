//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WalletIcon;

@interface WalletFunction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int funcId; // @dynamic funcId;
@property(retain, nonatomic) WalletIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

