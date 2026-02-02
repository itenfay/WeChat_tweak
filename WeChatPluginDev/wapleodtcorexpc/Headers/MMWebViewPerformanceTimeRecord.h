//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewPerformanceTimeRecord : NSObject
{
    _Bool _isNewCategory;
    NSString *_name;
    unsigned long long _timeInMs;
    unsigned long long _sequence;
    NSString *_detail;
    unsigned long long _relativeTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long relativeTimeInMs; // @synthesize relativeTimeInMs=_relativeTimeInMs;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) _Bool isNewCategory; // @synthesize isNewCategory=_isNewCategory;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned long long timeInMs; // @synthesize timeInMs=_timeInMs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)timeCompare:(id)arg1;
- (id)descriptionWithStartTime:(unsigned long long)arg1;

@end

