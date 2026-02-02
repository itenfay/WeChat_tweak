//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GameIndexSettingControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int defaultJumpType; // @dynamic defaultJumpType;
@property(retain, nonatomic) NSString *defaultJumpUrl; // @dynamic defaultJumpUrl;
@property(nonatomic) _Bool enableGameIndexCgiPreload; // @dynamic enableGameIndexCgiPreload;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;

@end

