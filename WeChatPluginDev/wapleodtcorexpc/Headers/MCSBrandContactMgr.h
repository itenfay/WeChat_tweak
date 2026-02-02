//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MCSBrandContactMgr : NSObject
{
    NSMutableArray *_arrMCSItems;
    unsigned int _lastUpdateTime;
    _Bool _bNeedSave;
}

- (void).cxx_destruct;
- (void)onMMDynamicConfigUpdated;
- (void)onAppTerminate;
- (void)onClearData;
- (void)onEnterBackGround;
- (void)trySaveData;
- (void)loadLocalData;
- (id)pathForMCSFile;
- (void)addScore:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)getMCSArray;
- (void)cleanData;
- (void)tryUpdateData;
- (void)setDeclineFactor;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

