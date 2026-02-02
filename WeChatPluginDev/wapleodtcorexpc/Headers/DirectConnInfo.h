//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, VoipAddrSet;

@interface DirectConnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int connId; // @dynamic connId;
@property(nonatomic) int localNetType; // @dynamic localNetType;
@property(retain, nonatomic) NSString *localNicDeviceId; // @dynamic localNicDeviceId;
@property(nonatomic) int localNicType; // @dynamic localNicType;
@property(retain, nonatomic) NSMutableArray *natDetectSession; // @dynamic natDetectSession;
@property(nonatomic) unsigned int natDetectSessionCnt; // @dynamic natDetectSessionCnt;
@property(retain, nonatomic) VoipAddrSet *punchSvr; // @dynamic punchSvr;
@property(nonatomic) int remoteNetType; // @dynamic remoteNetType;
@property(retain, nonatomic) NSString *remoteNicDeviceId; // @dynamic remoteNicDeviceId;
@property(nonatomic) int remoteNicType; // @dynamic remoteNicType;
@property(nonatomic) int statInterval; // @dynamic statInterval;

@end

