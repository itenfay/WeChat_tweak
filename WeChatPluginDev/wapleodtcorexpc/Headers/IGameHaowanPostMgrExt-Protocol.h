//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol IGameHaowanPostMgrExt <NSObject>

@optional
- (void)onGameHaowanPostCanceled:(NSString *)arg1;
- (void)onGameHaowanPostProgress:(NSString *)arg1 percent:(float)arg2;
- (void)onGameHaowanPostFailed:(NSString *)arg1 error:(NSError *)arg2;
- (void)onGameHaowanPostSucceed:(NSString *)arg1;
@end

