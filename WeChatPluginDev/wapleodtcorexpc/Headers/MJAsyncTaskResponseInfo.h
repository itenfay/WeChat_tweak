//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MJAsyncTaskResponseInfo : NSObject
{
    unsigned long long _queryIntervalMillis;
    NSData *_contextBuff;
}

+ (id)infoWithQueryIntervalMillis:(unsigned long long)arg1 contextBuff:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(readonly, nonatomic) unsigned long long queryIntervalMillis; // @synthesize queryIntervalMillis=_queryIntervalMillis;
- (id)initWithQueryIntervalMillis:(unsigned long long)arg1 contextBuff:(id)arg2;

@end

