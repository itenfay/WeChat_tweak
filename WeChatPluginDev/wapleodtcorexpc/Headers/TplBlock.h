//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpInfo, NSString;

@interface TplBlock : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool canBeAt; // @dynamic canBeAt;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

