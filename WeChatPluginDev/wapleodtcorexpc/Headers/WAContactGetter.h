//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAContactMainThreadGetter;

@interface WAContactGetter : NSObject
{
    WAContactMainThreadGetter *_mainThreadGetter;
    unsigned int _scene;
}

+ (void)getWeAppContactWithKey:(id)arg1 keyType:(unsigned long long)arg2 version:(unsigned long long)arg3 force:(_Bool)arg4 requestSource:(id)arg5 handler:(CDUnknownBlockType)arg6 timeout:(unsigned int)arg7;
+ (void)getWeAppContactWithAppid:(id)arg1 username:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)getWeAppContactWithAppid:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
+ (void)getWeAppContactWithAppid:(id)arg1 force:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)getWeAppContactWithAppid:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)getWeAppContact:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
+ (void)getWeAppContact:(id)arg1 force:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)getWeAppContact:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)mainThread_getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 requestSource:(id)arg4 handler:(CDUnknownBlockType)arg5 timeout:(unsigned int)arg6;
- (void)getWeAppContactWithKey:(id)arg1 keyType:(unsigned long long)arg2 version:(unsigned long long)arg3 force:(_Bool)arg4 requestSource:(id)arg5 handler:(CDUnknownBlockType)arg6 timeout:(unsigned int)arg7;
- (void)getWeAppContactWithAppid:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithAppid:(id)arg1 force:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getWeAppContactWithAppid:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeAppContact:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContact:(id)arg1 force:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getWeAppContact:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned int)arg5;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)dealloc;

@end

