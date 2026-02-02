//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WSNumberRedPointList : NSObject
{
    unsigned long long _clearedNumSeq;
    NSMutableArray *_redPointArr;
}

+ (void)initialize;
+ (void)PBArrayAdd_clearedNumSeq;
+ (void)PBArrayAdd_redPointArr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *redPointArr; // @synthesize redPointArr=_redPointArr;
@property(nonatomic) unsigned long long clearedNumSeq; // @synthesize clearedNumSeq=_clearedNumSeq;
- (id)dictInfo;
- (_Bool)insertRedPointInfo:(id)arg1;
- (void)safeAddObject:(id)arg1;
- (id)firstObject;
- (unsigned long long)count;
- (void)clear:(unsigned long long)arg1;
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

