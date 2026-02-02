//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EdgeComputingThresholdController : NSObject
{
    NSMutableDictionary *receiveDataThresholdRecords;
}

- (void).cxx_destruct;
- (unsigned long long)getCacheDataTimeLimit;
- (unsigned long long)getCacheDataCountLimit;
- (unsigned long long)getTotalCacheDataCountLimit;
- (_Bool)checkDataReceiveFrequency:(id)arg1;
- (id)init;

@end

