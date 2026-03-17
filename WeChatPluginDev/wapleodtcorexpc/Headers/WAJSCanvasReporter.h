//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAJSCanvasReporter : NSObject
{
}

+ (void)reportTimeAxisEvent:(id)arg1 costTime:(unsigned long long)arg2 sessionId:(id)arg3;
+ (void)reportKeyEvent:(id)arg1;
+ (void)reportException:(id)arg1;

@end

