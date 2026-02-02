//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol AffSyncCppToNativeManagerBase <NSObject>

@optional
- (NSData *)getLiteAppVersionInfo;
- (NSString *)mergeSyncKey:(NSString *)arg1 newKey:(NSString *)arg2;
- (_Bool)isShowWebSearchEntry;
- (_Bool)isShowLookOneLookEntry;
- (NSData *)getWebSearchRequestSyncConfig;
- (NSData *)getNewLifeRequestSyncResult;
- (NSArray *)getConfigSyncKeyPathList:(int)arg1;
- (_Bool)enableSync:(int)arg1 syncScene:(int)arg2;
- (void)handleCmd:(int)arg1 cmd:(NSData *)arg2 syncScene:(int)arg3 handleFinderSync:(_Bool)arg4;
- (NSString *)debugSwitchInfo:(NSData *)arg1;
- (NSString *)debugInfo:(NSData *)arg1;
@end

