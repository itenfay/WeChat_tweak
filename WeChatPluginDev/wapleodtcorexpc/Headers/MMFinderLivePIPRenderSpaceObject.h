//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePIPCustomHandleLogic, NSMutableArray, NSString;

@interface MMFinderLivePIPRenderSpaceObject : NSObject
{
    long long _space;
    NSMutableArray *_renderList;
    NSString *_staticFirstRenderId;
    NSString *_staticLastRenderId;
    MMFinderLivePIPCustomHandleLogic *_rootHandleLogic;
}

+ (id)createRenderSpaceObject:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLivePIPCustomHandleLogic *rootHandleLogic; // @synthesize rootHandleLogic=_rootHandleLogic;
@property(retain, nonatomic) NSString *staticLastRenderId; // @synthesize staticLastRenderId=_staticLastRenderId;
@property(retain, nonatomic) NSString *staticFirstRenderId; // @synthesize staticFirstRenderId=_staticFirstRenderId;
@property(retain, nonatomic) NSMutableArray *renderList; // @synthesize renderList=_renderList;
@property(nonatomic) long long space; // @synthesize space=_space;
- (id)getLastRenderIdWithLiveViewName:(id)arg1;
- (void)checkStaticRenderIdAffectedByNewRenderId:(id)arg1;
- (_Bool)checkIndexOverLimit:(long long)arg1;
- (void)removeAllRenderId;
- (void)safeAddRenderId:(id)arg1;
- (void)safeRemoveRenderId:(id)arg1;
- (void)safeInsertRenderId:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isContainerRenderId:(id)arg1;
- (_Bool)innerClearUnValidRenderIdList;
- (id)innerGetRenderIdListDescription;
- (_Bool)innerClearAllRenderIds;
- (_Bool)innerRemoveRenderId:(id)arg1;
- (_Bool)innerAddRenderId:(id)arg1;
- (_Bool)innerInsertRenderId:(id)arg1;
- (_Bool)innerAddStaticLastRenderId:(id)arg1;
- (_Bool)innerInsertStaticFirstRenderId:(id)arg1;
- (_Bool)innerInsertRenderId:(id)arg1 aboveRenderObjWithBusinessIds:(id)arg2;
- (_Bool)innerInsertRenderId:(id)arg1 belowRenderObjWithBusinessIds:(id)arg2;
- (_Bool)innerInsertRenderId:(id)arg1 aboveAnyRenderObjWithBusinessNames:(id)arg2;
- (_Bool)innerInsertRenderId:(id)arg1 belowAnyRenderObjWithBusinessNames:(id)arg2;

@end

