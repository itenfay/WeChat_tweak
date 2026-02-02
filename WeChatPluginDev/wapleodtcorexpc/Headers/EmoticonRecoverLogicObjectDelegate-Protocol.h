//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EmoticonRecoverLogicObjectDelegate <NSObject>
- (_Bool)isFirstRecoverAfterAuth;
- (_Bool)needNotifyEmoticonListChangeImmediately;

@optional
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
@end

