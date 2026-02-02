//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAEJClassLoader : NSObject
{
    struct OpaqueJSClass *jsConstructorClass;
    NSMutableDictionary *classCache;
}

@property(readonly, nonatomic) struct OpaqueJSClass *jsConstructorClass; // @synthesize jsConstructorClass;
- (id)loadJSClass:(id)arg1 isComponent:(_Bool)arg2;
- (id)getJSClass:(id)arg1 isComponent:(_Bool)arg2;
- (void)dealloc;
- (void)addSubContext:(id)arg1 context:(struct OpaqueJSContext *)arg2 name:(id)arg3;
- (id)initWithScriptView:(id)arg1 name:(id)arg2;

@end

