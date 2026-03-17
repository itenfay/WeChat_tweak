//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAEJJavaScriptView;

@interface WAEJBindingBase : NSObject
{
    struct OpaqueJSValue *jsObject;
    unsigned int uid_;
    _Bool isJsObjectValid;
    WAEJJavaScriptView *scriptView;
    unsigned int _ownerId;
}

+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 instance:(id)arg3;
@property(nonatomic) unsigned int ownerId; // @synthesize ownerId=_ownerId;
@property(readonly, nonatomic) WAEJJavaScriptView *scriptView; // @synthesize scriptView;
- (_Bool)isPaused;
- (void)resetJSObject;
- (void)prepareGarbageCollection;
- (void)dealloc;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end

