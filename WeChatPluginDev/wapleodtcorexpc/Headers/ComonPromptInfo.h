//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ComonPromptInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cgiType; // @dynamic cgiType;
@property(retain, nonatomic) NSString *jumpText; // @dynamic jumpText;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *promptText; // @dynamic promptText;
@property(retain, nonatomic) NSString *tinyappUsername; // @dynamic tinyappUsername;

@end

