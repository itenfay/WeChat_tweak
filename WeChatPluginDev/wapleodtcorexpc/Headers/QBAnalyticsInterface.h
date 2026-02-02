//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBAnalyticsInterface : NSObject
{
}

+ (_Bool)doReport:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (void)reportURL:(id)arg1;
+ (void)initAnalytics;

@end

