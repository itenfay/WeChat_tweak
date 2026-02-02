//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface NewLifeCallbackGenerator : NSObject
{
    CDUnknownBlockType _callbackGenerateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType callbackGenerateHandler; // @synthesize callbackGenerateHandler=_callbackGenerateHandler;
- (void)onGenerateCallback:(id)arg1 forCommand:(id)arg2;
- (void)registerListenerForCommand:(id)arg1 keyList:(id)arg2 userInfo:(id)arg3;
- (void)registerListenerForCommand:(id)arg1 userInfo:(id)arg2;

@end
