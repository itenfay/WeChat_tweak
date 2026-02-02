//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAudioFileManager, NSArray, NSMutableArray, NSMutableDictionary, NSString, UBDictionarySignal;

@interface MJTTSAsyncTaskGroup : NSObject
{
    _Bool _isCloneTimbre;
    NSString *_audioID;
    NSString *_roleID;
    MJAudioFileManager *_audioFileManager;
    unsigned long long _status;
    UBDictionarySignal *_statusDidUpdateSignal;
    NSArray *_captionItems;
    long long _audioSampleRate;
    NSMutableDictionary *_tasksByText;
    NSMutableArray *_completions;
    CDStruct_1b6d18a9 _totalDuration;
}

+ (id)regulateCaptionItems:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableDictionary *tasksByText; // @synthesize tasksByText=_tasksByText;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(readonly, nonatomic) _Bool isCloneTimbre; // @synthesize isCloneTimbre=_isCloneTimbre;
@property(nonatomic) CDStruct_1b6d18a9 totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSArray *captionItems; // @synthesize captionItems=_captionItems;
@property(readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal; // @synthesize statusDidUpdateSignal=_statusDidUpdateSignal;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
- (id)description;
- (_Bool)containsInvalidTaskID;
- (id)statusDidUpdateParams;
- (void)handleTaskFailWithError:(id)arg1;
- (void)handleTaskSuccessWithSpeechFilePath:(id)arg1;
- (void)handleTaskStart;
- (long long)runningTaskCount;
- (void)markStatusPending;
- (_Bool)appendCompletionIfRunning:(id)arg1;
- (void)cancel;
- (void)handleResponseDatas:(id)arg1;
- (void)startWithCaptionItems:(id)arg1 totalDuration:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAudioSampleRateIfNeeded:(long long)arg1;
- (void)dealloc;
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 audioFileManager:(id)arg4 statusDidUpdateSignal:(id)arg5;

@end

