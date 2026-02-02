//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCMomentsAssetCompositePool : NSObject
{
    unsigned long long _entrance;
    NSMutableArray *_srcAssetList;
    NSMutableArray *_completedAssetList;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _sightDraftTaskResultBlock;
}

+ (id)_getUserWCExportCacheDir;
+ (id)_getUserWCRootDir;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sightDraftTaskResultBlock; // @synthesize sightDraftTaskResultBlock=_sightDraftTaskResultBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableArray *completedAssetList; // @synthesize completedAssetList=_completedAssetList;
@property(retain, nonatomic) NSMutableArray *srcAssetList; // @synthesize srcAssetList=_srcAssetList;
@property(nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(_Bool)arg2 withSightDraft:(id)arg3;
- (void)startSightDraftTask:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (id)_copyOutputVideoToTempDirFromPath:(id)arg1 withAssetInfo:(id)arg2;
- (void)_startCompositionWithAssetInfo:(id)arg1 editAttr:(id)arg2;
- (void)_onTaskFailedWithAssetInfo:(id)arg1 error:(id)arg2;
- (void)_onTaskFinishedWithAssetInfo:(id)arg1 isComplete:(_Bool)arg2;
- (void)_startNextCompositeTask;
- (void)startWithResultBlock:(CDUnknownBlockType)arg1;
- (void)addSrcAssetList:(id)arg1;
- (void)dealloc;
- (id)initWithEntrance:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

