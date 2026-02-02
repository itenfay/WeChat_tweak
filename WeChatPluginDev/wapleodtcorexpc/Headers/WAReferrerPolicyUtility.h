//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAReferrerPolicyUtility : NSObject
{
}

+ (id)referrerPolicyDict;
+ (id)refererStringWithReferrerPolicyType:(unsigned long long)arg1 appID:(id)arg2 appVersion:(unsigned long long)arg3;
+ (unsigned long long)typeWithString:(id)arg1 defaultType:(unsigned long long)arg2;
+ (unsigned long long)typeWithString:(id)arg1;

@end

