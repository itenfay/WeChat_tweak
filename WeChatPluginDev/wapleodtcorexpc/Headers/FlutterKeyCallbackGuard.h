//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterKeyCallbackGuard : NSObject
{
    CDUnknownBlockType _callback;
    _Bool _handled;
    NSString *_debugHandleSource;
}

@property(readonly) NSString *debugHandleSource; // @synthesize debugHandleSource=_debugHandleSource;
@property(nonatomic) _Bool handled; // @synthesize handled=_handled;
- (void)resolveTo:(_Bool)arg1;
- (void)pendTo:(id)arg1 withId:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end

