//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CRGameChannelReportInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *channel; // @dynamic channel;
@property(retain, nonatomic) NSString *channelV2; // @dynamic channelV2;
@property(retain, nonatomic) NSString *channelVersion; // @dynamic channelVersion;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *extra; // @dynamic extra;
@property(retain, nonatomic) NSString *gameAppid; // @dynamic gameAppid;
@property(retain, nonatomic) NSString *packageId; // @dynamic packageId;
@property(nonatomic) unsigned long long sceneId; // @dynamic sceneId;
@property(retain, nonatomic) NSString *sceneName; // @dynamic sceneName;
@property(nonatomic) long long scenePopTime; // @dynamic scenePopTime;
@property(retain, nonatomic) NSString *subSceneName; // @dynamic subSceneName;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;
@property(retain, nonatomic) NSString *uinType; // @dynamic uinType;

@end

