//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMLocationCacheStorage
{
    NSMutableArray *_caches;
}

+ (void)initialize;
+ (void)PBArrayAdd_caches;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *caches; // @synthesize caches=_caches;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

