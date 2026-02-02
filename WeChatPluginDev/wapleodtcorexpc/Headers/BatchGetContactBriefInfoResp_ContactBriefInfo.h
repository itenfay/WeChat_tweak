//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ModContact, NSString;

@interface BatchGetContactBriefInfoResp_ContactBriefInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ModContact *contact; // @dynamic contact;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

