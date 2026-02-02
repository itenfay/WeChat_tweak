//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TextStatePublishTask;

@protocol TextStatePublishTaskDeletate <NSObject>
- (_Bool)shouldModifySelfContact;
- (void)onTaskFailure:(TextStatePublishTask *)arg1;
- (void)onTaskSuccess:(TextStatePublishTask *)arg1;
- (void)onTaskUpdate;
@end

