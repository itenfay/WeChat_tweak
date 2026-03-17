//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LiteAppJsApiManager : NSObject
{
}

+ (void)removeAllPermanentJsApi:(unsigned int)arg1;
+ (id)getPermanentJsApi:(unsigned int)arg1 name:(id)arg2;
+ (void)addPermanentJsApi:(unsigned int)arg1 name:(id)arg2 api:(id)arg3;
+ (void)removeExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2;
+ (void)addExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2 api:(id)arg3;
+ (id)getExcutingApi:(unsigned int)arg1;
+ (void)timerRelease;
+ (_Bool)findJsApi:(id)arg1 name:(id)arg2;
+ (Class)getJsApi:(id)arg1;
+ (Class)getJsApi:(id)arg1 name:(id)arg2;
+ (void)addJsApi:(id)arg1 clz:(Class)arg2;
+ (void)addJsApi:(id)arg1 name:(id)arg2 clz:(Class)arg3;

@end

