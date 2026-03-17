//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffRoamProviderCallback, NSArray, NSData, NSString;

@protocol AffRoamProviderBase <NSObject>

@optional
- (void)filterRestoreMediaAsync:(unsigned long long)arg1 convId:(NSString *)arg2 svrIdList:(NSArray *)arg3 mediaIdList:(NSArray *)arg4 mediaTypeList:(NSArray *)arg5;
- (void)getDeviceAvailableStorageSpaceAsync:(unsigned long long)arg1;
- (void)getDeviceNetworkInfosAsync:(unsigned long long)arg1;
- (void)getNetworkInfosAsync:(unsigned long long)arg1;
- (void)setRoamBackupPackagesAsync:(unsigned long long)arg1 request:(NSData *)arg2;
- (void)getRoamBackupPackagesAsync:(unsigned long long)arg1 request:(NSData *)arg2;
- (void)insertChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(NSString *)arg3 chatPackage:(NSData *)arg4;
- (void)getChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 conversationId:(NSString *)arg3 fromTime:(unsigned long long)arg4 toTime:(unsigned long long)arg5 offset:(unsigned long long)arg6 limit:(int)arg7;
- (void)getIlinkDeviceBindingSessionAsync:(unsigned long long)arg1 request:(NSData *)arg2;
- (void)getAdamTunnelCryptoInfoAsync:(unsigned long long)arg1 cryptoMaterial:(NSString *)arg2;
- (void)getRoamFileEncKeyAsync:(unsigned long long)arg1 encIds:(NSArray *)arg2 createNew:(_Bool)arg3;
- (void)setCallback:(AffRoamProviderCallback *)arg1;
@end

