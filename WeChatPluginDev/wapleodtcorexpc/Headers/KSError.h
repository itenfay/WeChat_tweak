//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KSError : NSObject
{
}

+ (_Bool)clearError:(id *)arg1;
+ (_Bool)fillError:(id *)arg1 withDomain:(id)arg2 code:(long long)arg3 description:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

@end

