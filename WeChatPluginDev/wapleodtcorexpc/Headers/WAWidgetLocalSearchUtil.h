//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAWidgetLocalSearchUtil : NSObject
{
}

+ (void)reportJumpAction:(unsigned long long)arg1 searchId:(id)arg2 sessionId:(id)arg3 query:(id)arg4 path:(id)arg5 weappUsrname:(id)arg6 serviceType:(unsigned int)arg7;
+ (_Bool)isMoreBtnSwitchType;
+ (_Bool)isLeftRightSwitchType;
+ (void)reportOpenAppErrorForPermission:(id)arg1 url:(id)arg2;
+ (id)statBufferForRelayInfo:(id)arg1;
+ (unsigned int)debugModeForRelayInfo:(id)arg1;
+ (unsigned int)openAppPermissionForRelayInfo:(id)arg1;
+ (id)srcAppidForRelayInfo:(id)arg1;
+ (id)footerForWidgetData:(id)arg1;
+ (id)currentItemForWidgetData:(id)arg1;
+ (unsigned long long)serviceTypeForWidgetItem:(id)arg1;
+ (id)provderInfoForWidgetItem:(id)arg1;
+ (id)relayInfoForWidgetItem:(id)arg1;
+ (long long)currentPrividerForWidgetData:(id)arg1;

@end

