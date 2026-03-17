//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LiteAppDynamicModuleParamStringifier : NSObject
{
}

+ (id)stringifyDynamicModuleObject:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 isFromView:(_Bool)arg4;
+ (id)jsonStringifyString:(id)arg1;
+ (id)stringifyJSONObject:(id)arg1;
+ (id)stringifyBufferData:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 isFromView:(_Bool)arg4;
+ (id)setNativeBuffer:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 isFromView:(_Bool)arg4;

@end

