//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VideoUploadTaskController;

@protocol VideoUploadTaskControllerDelegate <NSObject>
- (void)onUploadTaskFail:(VideoUploadTaskController *)arg1 errorType:(int)arg2;
- (void)onUploadTaskSuccess:(VideoUploadTaskController *)arg1;
- (void)onSendOccupyMsgFail:(VideoUploadTaskController *)arg1 errorType:(int)arg2;
- (void)onSendOccupyMsgSucc:(VideoUploadTaskController *)arg1;
@end

