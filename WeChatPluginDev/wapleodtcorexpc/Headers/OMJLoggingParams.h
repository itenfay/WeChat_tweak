//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OMJLoggingProvider;

@interface OMJLoggingParams : NSObject
{
    id <OMJLoggingProvider> _loggingProvider;
    long long _maxLogLevel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long maxLogLevel; // @synthesize maxLogLevel=_maxLogLevel;
@property(readonly, nonatomic) id <OMJLoggingProvider> loggingProvider; // @synthesize loggingProvider=_loggingProvider;
- (id)initWithLoggingProvider:(id)arg1 maxLogLevel:(long long)arg2;
- (id)initWithLoggingProvider:(id)arg1;

@end

