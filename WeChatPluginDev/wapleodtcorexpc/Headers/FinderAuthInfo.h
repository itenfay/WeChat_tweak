//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, NSString;

@interface FinderAuthInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) FinderContact *authGuarantor; // @dynamic authGuarantor;
@property(nonatomic) unsigned int authIconType; // @dynamic authIconType;
@property(retain, nonatomic) NSString *authIconUrl; // @dynamic authIconUrl;
@property(retain, nonatomic) NSString *authProfession; // @dynamic authProfession;
@property(nonatomic) unsigned int authVerifyIdentity; // @dynamic authVerifyIdentity;
@property(nonatomic) unsigned int customerType; // @dynamic customerType;
@property(retain, nonatomic) NSString *detailLink; // @dynamic detailLink;
@property(retain, nonatomic) NSString *realName; // @dynamic realName;
@property(retain, nonatomic) NSString *unauthProfession; // @dynamic unauthProfession;
@property(nonatomic) unsigned int verifyStatus; // @dynamic verifyStatus;

@end

