//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPrefetchDisasterInfo : NSObject
{
    unsigned long long _lastRequestTimestamp;
    unsigned long long _requestInterval;
}

+ (void)initialize;
+ (void)PBArrayAdd_requestInterval;
+ (void)PBArrayAdd_lastRequestTimestamp;
@property(nonatomic) unsigned long long requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) unsigned long long lastRequestTimestamp; // @synthesize lastRequestTimestamp=_lastRequestTimestamp;
@property(readonly, copy) NSString *description;
- (unsigned long long)nextAllowedRequestTimestamp;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

