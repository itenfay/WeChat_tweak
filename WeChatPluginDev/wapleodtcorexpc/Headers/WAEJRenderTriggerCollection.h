//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAEJJavaScriptView;

@interface WAEJRenderTriggerCollection : NSObject
{
    NSMutableDictionary *triggers;
    int lastId;
    WAEJJavaScriptView *scriptView;
}

- (void)update;
- (void)cancelId:(int)arg1;
- (int)scheduleCallback:(struct OpaqueJSValue *)arg1 isMain:(_Bool)arg2;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1;

@end

