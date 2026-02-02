//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiveKTVSEIData, LiveSEIKTVProgress, LiveSEIKTVState, MMFinderLiveKTVSEIRecvSession, NSArray;
@protocol MMLiveUniqueTaskId;

@protocol MMFinderLiveKTVSEISyncRecvExt <NSObject>

@optional
- (void)onLiveSEIKTVRecvTimeIntervalUpdate:(double)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onLiveSEIKTVNoteListExpiredInSession:(MMFinderLiveKTVSEIRecvSession *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onLiveSEIKTVNoteListSyncRecv:(NSArray *)arg1 session:(MMFinderLiveKTVSEIRecvSession *)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
- (void)onLiveSEIKTVProgressSyncRecv:(LiveSEIKTVProgress *)arg1 continuous:(_Bool)arg2 stick:(_Bool)arg3 ktvSeiData:(LiveKTVSEIData *)arg4 taskId:(id <MMLiveUniqueTaskId>)arg5;
- (void)onLiveSEIKTVStateSyncRecv:(LiveSEIKTVState *)arg1 ktvSeiData:(LiveKTVSEIData *)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
@end

