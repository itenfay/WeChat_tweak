//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderTabTipsDSLRenderTmpl, NSString;

@interface FinderMemberCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) FinderTabTipsDSLRenderTmpl *dslRender; // @dynamic dslRender;
@property(nonatomic) unsigned long long expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned int memberStatus; // @dynamic memberStatus;
@property(retain, nonatomic) NSString *membershipZoneTitle; // @dynamic membershipZoneTitle;

@end

