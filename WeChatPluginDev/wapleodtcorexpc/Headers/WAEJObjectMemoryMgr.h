//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAEJObjectMemoryMgr : NSObject
{
    NSMutableDictionary *_bindingObjects;
    long long _frameTick;
}

- (id)getBindingObjects;
- (void)removeBindingObject:(id)arg1 jsObject:(id)arg2;
- (void)addBindingObject:(id)arg1 jsObject:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

