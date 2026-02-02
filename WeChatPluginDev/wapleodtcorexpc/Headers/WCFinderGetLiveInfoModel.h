//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo, FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo, FinderJumpInfo, FinderNotifyMoreLiveInfo, NSString;

@interface WCFinderGetLiveInfoModel : NSObject
{
    int _anchorDisplayElementFlag;
    unsigned int _autoPlayControlFlag;
    FinderJumpInfo *_liveLoyaltyCardJump;
    unsigned long long _objectId;
    NSString *_objectNonceId;
    NSString *_sessionBuffer;
    FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo *_previewJoinliveControlInfo;
    unsigned long long _displayElementFlag;
    FinderNotifyMoreLiveInfo *_notifyMoreLiveConfig;
    FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo *_notificationDynamicDisplayInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderGetLiveInfoResp_LiveNotificationDynamicDisplayInfo *notificationDynamicDisplayInfo; // @synthesize notificationDynamicDisplayInfo=_notificationDynamicDisplayInfo;
@property(retain, nonatomic) FinderNotifyMoreLiveInfo *notifyMoreLiveConfig; // @synthesize notifyMoreLiveConfig=_notifyMoreLiveConfig;
@property(nonatomic) unsigned int autoPlayControlFlag; // @synthesize autoPlayControlFlag=_autoPlayControlFlag;
@property(nonatomic) int anchorDisplayElementFlag; // @synthesize anchorDisplayElementFlag=_anchorDisplayElementFlag;
@property(nonatomic) unsigned long long displayElementFlag; // @synthesize displayElementFlag=_displayElementFlag;
@property(retain, nonatomic) FinderGetLiveInfoResp_LivePreviewJoinliveControlInfo *previewJoinliveControlInfo; // @synthesize previewJoinliveControlInfo=_previewJoinliveControlInfo;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) FinderJumpInfo *liveLoyaltyCardJump; // @synthesize liveLoyaltyCardJump=_liveLoyaltyCardJump;

@end

