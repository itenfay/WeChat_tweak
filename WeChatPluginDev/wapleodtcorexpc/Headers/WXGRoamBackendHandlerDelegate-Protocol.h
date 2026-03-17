//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BuildRelationSessionResp, ChatRecordEnc, GetDeviceNetworkInfoResp, NSArray, NSString, RoamBackupPackagesGetResp, RoamBackupPackagesSetResp;

@protocol WXGRoamBackendHandlerDelegate <NSObject>

@optional
- (void)onRoamBackendGetRoamBackupPackagesSetResponse:(RoamBackupPackagesSetResp *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetRoamBackupPackagesGetResponse:(RoamBackupPackagesGetResp *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetSeruceTunnelResponse:(NSString *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetDeviceNetworkInfo:(GetDeviceNetworkInfoResp *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendBuildRelationSession:(BuildRelationSessionResp *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGenNewEncrytKey:(ChatRecordEnc *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetEncrytKey:(NSArray *)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
@end

