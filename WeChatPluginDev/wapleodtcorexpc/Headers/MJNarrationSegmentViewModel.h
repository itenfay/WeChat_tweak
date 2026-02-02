//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, OMCNarrationSegment;
@protocol MJMovieComposingContext;

@interface MJNarrationSegmentViewModel
{
    id <MJMovieComposingContext> _composingContext;
    NSString *_audioFileID;
    NSMutableArray *_captionItems;
    CDUnknownBlockType _mockUpdateVoiceLabelHandler;
    unsigned long long _voiceChangeLoadingStatus;
    NSString *_roleID;
    NSString *_roleName;
    unsigned long long _sttLoadingStatus;
    OMCNarrationSegment *_narrationSegment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMCNarrationSegment *narrationSegment; // @synthesize narrationSegment=_narrationSegment;
@property(nonatomic) unsigned long long sttLoadingStatus; // @synthesize sttLoadingStatus=_sttLoadingStatus;
@property(readonly, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(nonatomic) unsigned long long voiceChangeLoadingStatus; // @synthesize voiceChangeLoadingStatus=_voiceChangeLoadingStatus;
@property(copy, nonatomic) CDUnknownBlockType mockUpdateVoiceLabelHandler; // @synthesize mockUpdateVoiceLabelHandler=_mockUpdateVoiceLabelHandler;
@property(retain, nonatomic) NSMutableArray *captionItems; // @synthesize captionItems=_captionItems;
@property(readonly, nonatomic) NSString *audioFileID; // @synthesize audioFileID=_audioFileID;
@property(readonly, nonatomic) __weak id <MJMovieComposingContext> composingContext; // @synthesize composingContext=_composingContext;
- (id)description;
- (_Bool)isSpeechRecognitionAvailable;
- (_Bool)isTextEditableAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)syncWithMutationEntry:(id)arg1;
- (void)requestSTTWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadSTTLoadingStatusWithSegment:(id)arg1;
- (void)_updateRequestStatus;
- (void)_updateSTSRequestStatus;
- (void)_sttRequestStatusDidUpdateWithAudioID:(id)arg1 status:(unsigned long long)arg2;
- (void)_ttsRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)_stsRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)_vocalEnhancementRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)bindSignals;
- (_Bool)_tryCachedSpeechFileWithRoleID:(id)arg1 roleName:(id)arg2 takeSnapshot:(_Bool)arg3 autoPlay:(_Bool)arg4;
- (void)_updateSpeechFileIfNeeded;
- (void)_updateRoleID:(id)arg1 roleName:(id)arg2;
- (void)cancelSTTRequestIfNeeded;
- (void)cancelCurrentVoiceChangeRequestIfNeeded;
- (void)_asyncRequestVocalEnhancementWithAudioID:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 takeSnapshot:(_Bool)arg4 autoPlay:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_asyncRequestTTSWithAudioID:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 captionItems:(id)arg4 totalDuration:(CDStruct_1b6d18a9)arg5 takeSnapshot:(_Bool)arg6 autoPlay:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)requestVoiceChangeWithTakeSnapshot:(_Bool)arg1 autoPlay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestVoiceChangeWithRoleID:(id)arg1 roleName:(id)arg2 takeSnapshot:(_Bool)arg3 autoPlay:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_replaceVoiceWithRoleID:(id)arg1 roleName:(id)arg2 audioFilePath:(id)arg3 takeSnapshot:(_Bool)arg4 autoPlay:(_Bool)arg5;
- (_Bool)_resetVoiceToOriginInNarrationTextInputWithTakeSnapshot:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (_Bool)_resetVoiceToOriginInNarrationSpeakWithTakeSnapshot:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (_Bool)resetVoiceToOriginWithTakeSnapshot:(_Bool)arg1 autoPlay:(_Bool)arg2;
@property(nonatomic) float volume;
- (void)updateSTTLoadingStatus:(unsigned long long)arg1;
- (void)setCaptionText:(id)arg1 atTimeInTimeline:(CDStruct_1b6d18a9)arg2;
- (id)captionTextAtTimeInTimeline:(CDStruct_1b6d18a9)arg1;
- (void)updateCaptionItems:(id)arg1;
@property(readonly, nonatomic) _Bool isUsingOriginSpeech;
- (void)dealloc;
- (void)syncWithNarrationSegmentImpl;
- (_Bool)syncWithSegment:(id)arg1;
- (id)initWithNarrationSegment:(id)arg1 composingContext:(id)arg2;

@end

