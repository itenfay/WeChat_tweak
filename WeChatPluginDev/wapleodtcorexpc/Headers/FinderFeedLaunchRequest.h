//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FinderFeedLaunchRequest : NSObject
{
    long long _feedId;
    NSString *_nonceId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFeedId:(long long)arg1 nonceId:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) long long feedId; // @synthesize feedId=_feedId;
- (id)toList;

@end

