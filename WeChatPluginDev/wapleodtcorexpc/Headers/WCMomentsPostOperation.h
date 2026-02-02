//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface WCMomentsPostOperation : NSObject
{
    _Bool _isSuccessful;
    NSString *_compositionId;
    long long _source;
    long long _feedType;
    double _startTime;
    double _finishTime;
    long long _failedCount;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) _Bool isSuccessful; // @synthesize isSuccessful=_isSuccessful;
@property(nonatomic) double finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *compositionId; // @synthesize compositionId=_compositionId;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

