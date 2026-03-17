//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol IRoamOutBoxServiceExt <NSObject>

@optional
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(_Bool)arg1 dirURL:(NSURL *)arg2 deviceId:(NSString *)arg3;
- (void)onRoamOutBoxServiceFinishGetURL:(NSURL *)arg1;
@end

