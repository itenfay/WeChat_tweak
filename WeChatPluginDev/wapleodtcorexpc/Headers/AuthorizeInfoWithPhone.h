//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthenticNameInfo, AuthorizeWording, GetAllPhoneData, NSString, ScopeWording;

@interface AuthorizeInfoWithPhone : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GetAllPhoneData *allphoneInfo; // @dynamic allphoneInfo;
@property(retain, nonatomic) NSString *applyWording; // @dynamic applyWording;
@property(retain, nonatomic) AuthorizeWording *authorizeWording; // @dynamic authorizeWording;
@property(retain, nonatomic) NSString *phoneWording; // @dynamic phoneWording;
@property(retain, nonatomic) AuthenticNameInfo *realnameInfo; // @dynamic realnameInfo;
@property(retain, nonatomic) NSString *realnameWording; // @dynamic realnameWording;
@property(retain, nonatomic) ScopeWording *scopeWording; // @dynamic scopeWording;

@end

