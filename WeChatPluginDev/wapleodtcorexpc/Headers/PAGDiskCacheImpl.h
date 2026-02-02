//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGDiskCacheImpl : NSObject
{
}

+ (_Bool)WritFile:(id)arg1 data:(id)arg2;
+ (id)ReadFile:(id)arg1;
+ (void)RemoveAll;
+ (void)SetMaxDiskSize:(unsigned long long)arg1;
+ (unsigned long long)MaxDiskSize;

@end

