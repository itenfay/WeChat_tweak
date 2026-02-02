//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveSEIKTVNote, LiveSEIKTVProgress, MMFinderLiveKTVReporter, NSString;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSingingData : NSObject
{
    _Bool _isDataUpdated;
    id <MMLiveUniqueTaskId> _taskId;
    NSString *_uniqueId;
    LiveSEIKTVNote *_currNoteRecord;
    LiveSEIKTVProgress *_currProgress;
    MMFinderLiveKTVReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain) MMFinderLiveKTVReporter *reporter; // @synthesize reporter=_reporter;
@property _Bool isDataUpdated; // @synthesize isDataUpdated=_isDataUpdated;
@property(retain) LiveSEIKTVProgress *currProgress; // @synthesize currProgress=_currProgress;
@property(retain) LiveSEIKTVNote *currNoteRecord; // @synthesize currNoteRecord=_currNoteRecord;
@property(retain) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
- (id)ktvReporter;
- (void)onRequestRecentKTVSEISyncSendInfo:(id)arg1;
- (_Bool)onCollectKTVSEISyncSendInfo:(id)arg1;
- (void)onKSKitKalaVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 isHit:(_Bool)arg3 timeOffset:(int)arg4 duration:(int)arg5 uniqueId:(id)arg6 taskId:(id)arg7;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(id)arg2 taskId:(id)arg3;
- (void)clearDatas;
- (void)updateUniqueId:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

