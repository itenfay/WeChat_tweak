//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo, FinderGetLiveInfoReq_LiveADBypassInfo, FinderLiveClientStatus, NSString;

@interface FinderGetLiveInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderGetLiveInfoReq_LiveADBypassInfo *adBypassInfo; // @dynamic adBypassInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(retain, nonatomic) FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *notificationInfo; // @dynamic notificationInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

