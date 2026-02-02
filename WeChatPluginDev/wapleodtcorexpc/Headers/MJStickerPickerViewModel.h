//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSegmentViewModel, NSArray, NSIndexPath, NSMutableDictionary, NSString, OMJMaterialManager;

@interface MJStickerPickerViewModel : NSObject
{
    MJSegmentViewModel *_entranceSegmentVM;
    NSIndexPath *_entranceIndexPath;
    OMJMaterialManager *_manager;
    unsigned long long _scene;
    NSArray *_materialItems;
    NSMutableDictionary *_downloadStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(copy, nonatomic) NSArray *materialItems; // @synthesize materialItems=_materialItems;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) OMJMaterialManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSIndexPath *entranceIndexPath; // @synthesize entranceIndexPath=_entranceIndexPath;
@property(retain, nonatomic) MJSegmentViewModel *entranceSegmentVM; // @synthesize entranceSegmentVM=_entranceSegmentVM;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(CDUnknownBlockType)arg2;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (float)mj_loadingProgressWithID:(id)arg1;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (void)loadMaterail:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValidMaterial:(id)arg1;
- (_Bool)needFilterMaterial;
- (_Bool)isReplaceMode;
- (id)itemAtIndex:(unsigned long long)arg1;
- (long long)numberOfItems;
- (void)fetchDatas:(CDUnknownBlockType)arg1;
- (id)entranceMaterialId;
- (id)initWithMaterailManager:(id)arg1 scene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

