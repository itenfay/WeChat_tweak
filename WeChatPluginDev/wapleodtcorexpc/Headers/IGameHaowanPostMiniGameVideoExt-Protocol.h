//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IGameHaowanPostMiniGameVideoExt <NSObject>

@optional
- (void)onPublishMiniGameVideoCancel:(NSString *)arg1;
- (void)onPublishMiniGameVideoFaild:(NSString *)arg1 errorMsg:(NSString *)arg2;
- (void)onPublishMiniGameVideoSuccess:(NSString *)arg1 needDelete:(_Bool)arg2;
@end

