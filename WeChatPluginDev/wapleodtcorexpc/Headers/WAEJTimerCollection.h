//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAEJJavaScriptView;

@interface WAEJTimerCollection : NSObject
{
    NSMutableDictionary *timers;
    int lastId;
    WAEJJavaScriptView *scriptView;
    int lastUpdateId;
    int signalWaitingId;
    _Bool skipCurrentTaskLoop;
}

- (void)skipCurrentTaskLoop;
- (void)updateImmediate:(id)arg1;
- (void)update;
- (void)cancelId:(int)arg1;
- (int)scheduleCallback:(struct OpaqueJSValue *)arg1 isMain:(_Bool)arg2 interval:(double)arg3 repeat:(_Bool)arg4;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1;

@end

