//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo, FinderGetLiveInfoReq_LiveADBypassInfo, NSString, WCFinderDataItem;

@interface WCFinderLiveGetLiveInfoParams : NSObject
{
    int _scene;
    WCFinderDataItem *_dataItem;
    unsigned long long _liveID;
    NSString *_finderUsername;
    FinderGetLiveInfoReq_LiveADBypassInfo *_liveADByPassInfo;
    FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *_notificationInfo;
}

+ (id)paramsWithLiveID:(unsigned long long)arg1 finderUsername:(id)arg2;
+ (id)paramsWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(retain, nonatomic) FinderGetLiveInfoReq_LiveADBypassInfo *liveADByPassInfo; // @synthesize liveADByPassInfo=_liveADByPassInfo;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long liveID; // @synthesize liveID=_liveID;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

