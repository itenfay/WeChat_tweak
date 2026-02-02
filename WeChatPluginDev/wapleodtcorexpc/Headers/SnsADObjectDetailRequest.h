//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, RemindFriendsInfo, SKBuiltinBuffer_t;

@interface SnsADObjectDetailRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *adInfoSyncBuffer; // @dynamic adInfoSyncBuffer;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(retain, nonatomic) RemindFriendsInfo *remindFriendsInfo; // @dynamic remindFriendsInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *supportCapability; // @dynamic supportCapability;
@property(retain, nonatomic) NSString *vangoghLibVersion; // @dynamic vangoghLibVersion;

@end

