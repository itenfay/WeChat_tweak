//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameUrlSessionTaskTryInfo : NSObject
{
    _Bool _isUsingSimpleDns;
    _Bool _isReqRedirect;
    _Bool _forceNoSimpleDns;
    unsigned long long _errorType;
    long long _tryIndex;
    long long _requestTotalCount;
    double _startTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long requestTotalCount; // @synthesize requestTotalCount=_requestTotalCount;
@property(nonatomic) long long tryIndex; // @synthesize tryIndex=_tryIndex;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) _Bool forceNoSimpleDns; // @synthesize forceNoSimpleDns=_forceNoSimpleDns;
@property(nonatomic) _Bool isReqRedirect; // @synthesize isReqRedirect=_isReqRedirect;
@property(nonatomic) _Bool isUsingSimpleDns; // @synthesize isUsingSimpleDns=_isUsingSimpleDns;
- (unsigned long long)getRttMs;

@end

