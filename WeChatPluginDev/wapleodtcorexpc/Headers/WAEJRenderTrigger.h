//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, WAEJJavaScriptView;

@interface WAEJRenderTrigger : NSObject
{
    struct OpaqueJSValue *callback;
    _Bool active;
    WAEJJavaScriptView *scriptView;
    _Bool subContext;
    NSDate *_target;
}

@property(retain, nonatomic) NSDate *target; // @synthesize target=_target;
@property(nonatomic) _Bool subContext; // @synthesize subContext;
@property(readonly) _Bool active; // @synthesize active;
- (void)invoke;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1 callback:(struct OpaqueJSValue *)arg2;

@end

