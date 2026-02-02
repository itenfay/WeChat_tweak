//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKBasicUtility : NSObject
{
}

+ (void)array:(id)arg1 addObject:(id)arg2;
+ (void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(CDUnknownBlockType)arg2 stop:(_Bool *)arg3;
+ (_Bool)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;

@end

