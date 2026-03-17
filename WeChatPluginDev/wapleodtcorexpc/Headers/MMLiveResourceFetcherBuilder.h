//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveResourceFetcherBuilder : NSObject
{
}

+ (id)createRootlessWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createFanoutWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createFanout;
+ (id)createUnarchiving;
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createDefault;

@end

