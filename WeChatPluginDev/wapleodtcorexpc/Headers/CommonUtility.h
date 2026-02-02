//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CommonUtility : NSObject
{
}

+ (id)GetRootPathOfTrash;
+ (id)GetRandomPathOfTrash;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (unsigned long long)genCurrentTimeInMs;
+ (id)GetTmpPath;
+ (id)SafeUnarchive:(id)arg1;

@end

