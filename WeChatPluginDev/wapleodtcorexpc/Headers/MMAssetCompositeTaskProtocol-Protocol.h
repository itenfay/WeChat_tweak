//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class MMAssetCompositeSession, NSError, NSString;

@protocol MMAssetCompositeTaskProtocol <NSObject, NSCoding>
- (void)onTaskDetached;
- (void)onTaskInterrupted;
- (void)onTaskStoppedWithResult:(NSError *)arg1 session:(MMAssetCompositeSession *)arg2;
- (void)onTaskStarted;
- (void)onTaskReady;
- (void)onTaskPending;
- (_Bool)shouldSaveExportVideoToLibrary;
- (_Bool)isSafe;
- (_Bool)isValid;
- (long long)taskType;
- (NSString *)taskId;
@end

