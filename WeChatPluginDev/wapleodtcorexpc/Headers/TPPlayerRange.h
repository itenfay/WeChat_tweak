//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerRange : NSObject
{
    long long _startTimeMs;
    long long _endTimeMs;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithStartTimeMs:(long long)arg1 endTimeMs:(long long)arg2;
@property(nonatomic) long long endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
- (id)toList;

@end

