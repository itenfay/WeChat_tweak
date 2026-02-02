//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoipmpCoreImplServiceCallback : NSObject
{
    struct VoipmpCoreImplServiceDispatcherBridgeObjcImpl *dispatcher_bridge;
}

- (void)onbindSocketToNetWorkComplete:(unsigned long long)arg1;
- (void)ondeviceRouteToComplete:(unsigned long long)arg1 succ:(_Bool)arg2;
- (void)ononReportDataComplete:(unsigned long long)arg1 ret:(int)arg2 reportInfo:(id)arg3;
- (void)ononVideoFrameComplete:(unsigned long long)arg1;
- (void)ononConfEventComplete:(unsigned long long)arg1;
- (void)onupdateAudioMenuComplete:(unsigned long long)arg1;
- (void)onrecErrorToComplete:(unsigned long long)arg1;
- (void)onrecordStateUpdateToComplete:(unsigned long long)arg1;
- (void)onaudioUIRouteToComplete:(unsigned long long)arg1;
- (id)initWithCpp:(struct VoipmpCoreImplServiceDispatcherBridgeObjcImpl *)arg1;

@end

