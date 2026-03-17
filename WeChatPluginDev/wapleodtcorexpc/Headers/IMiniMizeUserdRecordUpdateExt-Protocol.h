//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, UIImage;

@protocol IMiniMizeUserdRecordUpdateExt <NSObject>

@optional
- (void)onTaskSnapShotUpdate:(MinimizeTaskData *)arg1 snapshot:(UIImage *)arg2;
- (void)onRemoveMinimizedTaskData:(MinimizeTaskData *)arg1;
- (void)onUpdateMinimizedTaskData:(MinimizeTaskData *)arg1;
- (void)onAppendMinimizedTaskData:(MinimizeTaskData *)arg1;
- (void)onMinimizedTaskDataListChanged;
- (void)onRecentUsedTaskRemoved:(MinimizeTaskData *)arg1 inScene:(unsigned int)arg2;
- (void)onRecentUsedTaskAppended:(MinimizeTaskData *)arg1;
- (void)onRecentUsedTaskChanged;
@end

