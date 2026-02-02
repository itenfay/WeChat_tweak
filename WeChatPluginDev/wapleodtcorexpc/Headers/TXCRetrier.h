//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCRetrier : NSObject
{
    long long _retryCount;
    long long _limitCount;
}

+ (id)retrierWithLimitCount:(long long)arg1;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void)retry:(CDUnknownBlockType)arg1 onReachLimit:(CDUnknownBlockType)arg2;

@end

