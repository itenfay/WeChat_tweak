//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderIdentityInfo, NSString;

@interface FinderFansContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int displayFlag; // @dynamic displayFlag;
@property(retain, nonatomic) NSString *fansid; // @dynamic fansid;
@property(retain, nonatomic) FinderIdentityInfo *finderIdentity; // @dynamic finderIdentity;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int interactionCount; // @dynamic interactionCount;
@property(nonatomic) _Bool isSelf; // @dynamic isSelf;
@property(nonatomic) unsigned int memberFlag; // @dynamic memberFlag;
@property(nonatomic) unsigned int orderCount; // @dynamic orderCount;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

