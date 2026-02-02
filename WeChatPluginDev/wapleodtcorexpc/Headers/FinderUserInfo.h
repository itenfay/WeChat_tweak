//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAuthInfo, NSString;

@interface FinderUserInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int authIconType; // @dynamic authIconType;
@property(retain, nonatomic) FinderAuthInfo *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) NSString *authProfession; // @dynamic authProfession;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;

@end

