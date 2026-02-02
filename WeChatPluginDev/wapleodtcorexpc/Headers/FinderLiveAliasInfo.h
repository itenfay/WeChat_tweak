//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSString;

@interface FinderLiveAliasInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *aliasMsgName; // @dynamic aliasMsgName;
@property(nonatomic) unsigned int aliasStatus; // @dynamic aliasStatus;
@property(nonatomic) unsigned int aliasVersion; // @dynamic aliasVersion;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderLiveContact *roleContact; // @dynamic roleContact;
@property(nonatomic) unsigned int roleType; // @dynamic roleType;

@end

