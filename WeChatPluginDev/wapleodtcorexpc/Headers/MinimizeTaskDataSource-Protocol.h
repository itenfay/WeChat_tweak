//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, NSArray, NSString;

@protocol MinimizeTaskDataSource <NSObject>
- (void)setTaskIsForegournd:(_Bool)arg1 taskKey:(NSString *)arg2;
- (NSArray *)getAllOutterTaskList;
- (MinimizeTaskData *)getTask:(NSString *)arg1;
@end

