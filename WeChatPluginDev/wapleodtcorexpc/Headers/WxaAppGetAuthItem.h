//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, ScopeRiskPopUpInfo, UserAvatarInfo;

@interface WxaAppGetAuthItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authWording; // @dynamic authWording;
@property(retain, nonatomic) NSString *bottomDesc; // @dynamic bottomDesc;
@property(retain, nonatomic) NSString *itemTitle; // @dynamic itemTitle;
@property(retain, nonatomic) ScopeRiskPopUpInfo *riskPopupInfo; // @dynamic riskPopupInfo;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *scopeDesc; // @dynamic scopeDesc;
@property(retain, nonatomic) NSString *scopeSecDesc; // @dynamic scopeSecDesc;
@property(retain, nonatomic) NSString *scopeSubDesc; // @dynamic scopeSubDesc;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) UserAvatarInfo *userAvatarInfo; // @dynamic userAvatarInfo;

@end

