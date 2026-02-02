//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, VideoRingNetProvider;

@interface VideoRingAudioFileProducer
{
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_transferTasks;
    NSMutableDictionary *_videoDownloadTasks;
    VideoRingNetProvider *_provider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableDictionary *videoDownloadTasks; // @synthesize videoDownloadTasks=_videoDownloadTasks;
@property(retain, nonatomic) NSMutableDictionary *transferTasks; // @synthesize transferTasks=_transferTasks;
@property(retain, nonatomic) NSMutableDictionary *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
- (void)checkNotificationRingFileForRingDetail:(id)arg1;
- (void)onExclusiveRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)storageVibrateFileForLongTerm:(id)arg1;
- (void)produceAudioFileWithRingBack:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

