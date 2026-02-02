//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveConnectMicUserLocationDisplayInfo, MMLiveTaskId, NSMutableDictionary;
@protocol MMLiveConnectMicUserLocationDisplayLogicDelegate;

@interface MMLiveConnectMicUserLocationDisplayLogic : NSObject
{
    unsigned int _locationDisplayTimeInterval;
    id <MMLiveConnectMicUserLocationDisplayLogicDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_displayedLocationUserDict;
    MMLiveConnectMicUserLocationDisplayInfo *_anchorLocationDisplayInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int locationDisplayTimeInterval; // @synthesize locationDisplayTimeInterval=_locationDisplayTimeInterval;
@property(retain, nonatomic) MMLiveConnectMicUserLocationDisplayInfo *anchorLocationDisplayInfo; // @synthesize anchorLocationDisplayInfo=_anchorLocationDisplayInfo;
@property(retain, nonatomic) NSMutableDictionary *displayedLocationUserDict; // @synthesize displayedLocationUserDict=_displayedLocationUserDict;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveConnectMicUserLocationDisplayLogicDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)getLocationNameWithSdkUserId:(id)arg1;
- (id)getAnchorLocationName;
- (void)updateWithConnectMicUsersInfo:(id)arg1;
- (void)delayCheckExpiredTimeAndNotify;
- (unsigned long long)checkExpiredTimeForLocationDisplayInfo:(id)arg1 withCurrentTime:(unsigned int)arg2;
- (void)checkAndUpdateDisplayedLocationUserDictWithMicUsersInfo:(id)arg1 andCurrentTime:(unsigned int)arg2;
- (void)checkAndUpdateAnchorLocationDisplayInfoWithLiveTask:(id)arg1 andCurrentTime:(unsigned int)arg2;
- (id)getLiveTask;
- (id)initWithTaskId:(id)arg1;

@end

