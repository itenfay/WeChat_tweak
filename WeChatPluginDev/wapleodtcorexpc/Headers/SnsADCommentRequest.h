//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinString_t, SnsActionGroup;

@interface SnsADCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SnsActionGroup *action; // @dynamic action;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) SKBuiltinString_t *snsAduxInfo; // @dynamic snsAduxInfo;
@property(retain, nonatomic) SKBuiltinString_t *snsStatExt; // @dynamic snsStatExt;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *supportCapability; // @dynamic supportCapability;
@property(retain, nonatomic) NSString *vangoghLibVersion; // @dynamic vangoghLibVersion;

@end

