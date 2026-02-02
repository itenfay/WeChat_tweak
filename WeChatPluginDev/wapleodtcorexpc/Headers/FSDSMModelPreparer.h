//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface FSDSMModelPreparer : NSObject
{
    _Bool _isPreparing;
    _Bool _isPrepared;
    int _keywordCount;
    NSString *_searchModelVersion;
    NSMutableSet *_whiteSet;
    NSMutableSet *_whiteInfoSet;
    NSMutableSet *_blackSet;
    NSObject<OS_dispatch_queue> *_buildingQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *buildingQueue; // @synthesize buildingQueue=_buildingQueue;
@property(retain, nonatomic) NSMutableSet *blackSet; // @synthesize blackSet=_blackSet;
@property(retain, nonatomic) NSMutableSet *whiteInfoSet; // @synthesize whiteInfoSet=_whiteInfoSet;
@property(retain, nonatomic) NSMutableSet *whiteSet; // @synthesize whiteSet=_whiteSet;
@property(retain, nonatomic) NSString *searchModelVersion; // @synthesize searchModelVersion=_searchModelVersion;
@property(nonatomic) int keywordCount; // @synthesize keywordCount=_keywordCount;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
- (void)enumerateItemUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)startBuilding;
- (void)tryBuildSearchModel:(unsigned int)arg1;
- (void)startBuildSearchModel;
- (unsigned int)loadRealtimeData;
- (id)getKeywordContentVersion;
- (void)cleanSearchModel;
- (void)cleanCacheSet;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

