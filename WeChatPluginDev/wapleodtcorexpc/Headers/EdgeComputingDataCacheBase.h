//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol IEdgeComputingCacheStrategyProtocol;

@interface EdgeComputingDataCacheBase : NSObject
{
    unsigned int _storageMode;
    unsigned int _type;
    id <IEdgeComputingCacheStrategyProtocol> _cacheStrategy;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int storageMode; // @synthesize storageMode=_storageMode;
@property(retain, nonatomic) id <IEdgeComputingCacheStrategyProtocol> cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
- (void)migrate;
- (unsigned long long)count;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)clear:(id)arg1;
- (id)read:(id)arg1;
- (void)save:(id)arg1;
- (void)close;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

