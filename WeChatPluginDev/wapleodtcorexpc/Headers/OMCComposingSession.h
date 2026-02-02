//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCProject, OMCTimeline;

@interface OMCComposingSession : NSObject
{
    struct SharedPtr<XMSComposingSession> _backingComposingSession;
    OMCTimeline *_timeline;
    OMCProject *_project;
}

+ (id)sessionWithProject:(id)arg1 imageOriginDuration:(CDStruct_1b6d18a9)arg2 minSegmentPreservedDuration:(CDStruct_1b6d18a9)arg3 calcDurationWithAllSegments:(_Bool)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) OMCProject *project; // @synthesize project=_project;
- (void)exportClipbundleWithCoverImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isClipSegmentMutated:(id)arg1 originAssetID:(id)arg2;
- (void)updateProject;
- (long long)maxComposingStepIndex;
- (long long)currentComposingStepIndex;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)takeSnapshotWithOpDesc:(id)arg1;
- (void)redoWithCompletion:(CDUnknownBlockType)arg1;
- (void)undoWithCompletion:(CDUnknownBlockType)arg1;
- (id)redo;
- (id)undo;
@property(readonly, nonatomic) OMCTimeline *timeline;
- (id)initWithBackingComposingSession:(const void *)arg1 project:(id)arg2 timeline:(id)arg3;
- (id)initWithBackingComposingSession:(const void *)arg1 imageOriginDuration:(CDStruct_1b6d18a9)arg2 minSegmentPreservedDuration:(CDStruct_1b6d18a9)arg3;

@end

