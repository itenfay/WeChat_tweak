//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EdgeComputingCacheStrategyBase : NSObject
{
    unsigned int _type;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (unsigned long long)count;
- (id)query:(id)arg1;
- (void)migrate;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)clear;
- (void)remove:(id)arg1;
- (void)save:(id)arg1;
- (void)close;
- (void)reset;
- (id)initWithType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

