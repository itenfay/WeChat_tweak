//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MinimizeReportUtil : NSObject
{
}

+ (id)moveContainerPositionDescFromPoint:(struct CGPoint)arg1;
+ (void)reportMoveContainer:(id)arg1 toPoint:(struct CGPoint)arg2 aggreSessionId:(id)arg3 arrTaskSessionId:(id)arg4;
+ (void)reportOpTask:(id)arg1;
+ (void)reportExitTaskListPage:(id)arg1;
+ (void)reportNewTask:(id)arg1;
+ (id)genAggreSessionId;
+ (id)genSessionId;

@end

