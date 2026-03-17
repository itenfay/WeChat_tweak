//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAEJJavaScriptView;

@interface WAEJTimer : NSObject
{
    double interval;
    struct OpaqueJSValue *callback;
    _Bool active;
    _Bool repeat;
    WAEJJavaScriptView *scriptView;
    _Bool subContext;
    double _target;
}

@property(nonatomic) double target; // @synthesize target=_target;
@property(nonatomic) _Bool subContext; // @synthesize subContext;
@property(readonly) _Bool active; // @synthesize active;
- (void)check;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1 callback:(struct OpaqueJSValue *)arg2 interval:(double)arg3 repeat:(_Bool)arg4;

@end

