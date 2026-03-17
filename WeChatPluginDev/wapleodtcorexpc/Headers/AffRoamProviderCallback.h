//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffRoamProviderCallback : NSObject
{
    struct AffRoamProviderDispatcherBridgeObjcImpl *dispatcher_bridge;
}

- (void)onFilterRestoreMediaComplete:(unsigned long long)arg1 filteredSize:(unsigned long long)arg2 filteredMediaIdList:(id)arg3;
- (void)onGetDeviceAvailableStorageSpaceComplete:(unsigned long long)arg1 availableBytes:(unsigned long long)arg2 minThreshold:(unsigned long long)arg3;
- (void)onGetDeviceNetworkInfosComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onGetNetworkInfosComplete:(unsigned long long)arg1 infos:(id)arg2;
- (void)onSetRoamBackupPackagesComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onGetRoamBackupPackagesComplete:(unsigned long long)arg1 response:(id)arg2;
- (void)onInsertChatPackageComplete:(unsigned long long)arg1;
- (void)onGetChatPackageComplete:(unsigned long long)arg1 isLastPkg:(_Bool)arg2 offset:(unsigned long long)arg3 chatPackage:(id)arg4;
- (void)onGetIlinkDeviceBindingSessionComplete:(unsigned long long)arg1 error:(int)arg2 response:(id)arg3;
- (void)onGetAdamTunnelCryptoInfoComplete:(unsigned long long)arg1 cryptoResult:(id)arg2;
- (void)onGetRoamFileEncKeyComplete:(unsigned long long)arg1 error:(int)arg2 createNew:(_Bool)arg3 encKeyList:(id)arg4;
- (id)initWithCpp:(struct AffRoamProviderDispatcherBridgeObjcImpl *)arg1;

@end

