//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenJumpAppInfo, NSString;

@interface MMListenMembershipJoinInfo_AdSchemeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adToken; // @dynamic adToken;
@property(nonatomic) unsigned long long getFreeTimeS; // @dynamic getFreeTimeS;
@property(retain, nonatomic) MMListenJumpAppInfo *jumpAppInfo; // @dynamic jumpAppInfo;

@end

