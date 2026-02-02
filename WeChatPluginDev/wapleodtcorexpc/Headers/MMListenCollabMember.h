//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUserInfo;

@interface MMListenCollabMember : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int collabId; // @dynamic collabId;
@property(nonatomic) int role; // @dynamic role;
@property(retain, nonatomic) MMListenUserInfo *user; // @dynamic user;

@end

