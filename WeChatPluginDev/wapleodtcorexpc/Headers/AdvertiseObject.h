//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class RemindFriendsInfo, SKBuiltinString_t, SnsADObject;

@interface AdvertiseObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinString_t *adinfo; // @dynamic adinfo;
@property(nonatomic) unsigned int adpos; // @dynamic adpos;
@property(retain, nonatomic) RemindFriendsInfo *remindFriendsInfo; // @dynamic remindFriendsInfo;
@property(retain, nonatomic) SnsADObject *snsAdobject; // @dynamic snsAdobject;

@end

