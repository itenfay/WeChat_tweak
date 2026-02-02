//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface WXGRoamRecoverInfo : NSObject
{
    NSMutableDictionary *_recoverMap;
    NSRecursiveLock *_markLock;
}

+ (_Bool)saveRecoverInfo:(id)arg1;
+ (id)loadRecoverInfoFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_recoverMap;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *markLock; // @synthesize markLock=_markLock;
@property(retain, nonatomic) NSMutableDictionary *recoverMap; // @synthesize recoverMap=_recoverMap;
- (void)saveRecoverTime:(unsigned long long)arg1 withKey:(id)arg2;
- (unsigned long long)getRecoverTimeForKey:(id)arg1;
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

