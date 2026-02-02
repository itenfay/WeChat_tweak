//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSTimer.h>

@interface NSTimer (Blocks)
+ (void)jdExecuteSimpleBlock:(id)arg1;
+ (id)timerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)sc_timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)initialize;
@end

