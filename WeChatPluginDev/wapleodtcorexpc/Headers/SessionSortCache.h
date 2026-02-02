//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SessionSortCache : NSObject
{
    _Bool _hasMergeTopFlag;
    NSMutableDictionary *_dicUsrNameUntopTime;
    NSMutableDictionary *_dicUsrNameTopTime;
    NSMutableDictionary *_dicUsrNameSortTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicUsrNameSortTime;
+ (void)PBArrayAdd_hasMergeTopFlag;
+ (void)PBArrayAdd_dicUsrNameUntopTime;
+ (void)PBArrayAdd_dicUsrNameTopTime;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMergeTopFlag; // @synthesize hasMergeTopFlag=_hasMergeTopFlag;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameSortTime; // @synthesize dicUsrNameSortTime=_dicUsrNameSortTime;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameTopTime; // @synthesize dicUsrNameTopTime=_dicUsrNameTopTime;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameUntopTime; // @synthesize dicUsrNameUntopTime=_dicUsrNameUntopTime;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

