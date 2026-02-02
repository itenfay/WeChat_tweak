//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAudioFileManager, NSMutableArray, NSString, UBDictionarySignal;

@interface MJVocalEnhancementAsyncTask : NSObject
{
    _Bool _isCanceled;
    NSString *_audioID;
    NSString *_roleID;
    MJAudioFileManager *_audioFileManager;
    unsigned long long _status;
    UBDictionarySignal *_statusDidUpdateSignal;
    NSMutableArray *_completions;
    NSString *_processedFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *processedFilePath; // @synthesize processedFilePath=_processedFilePath;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal; // @synthesize statusDidUpdateSignal=_statusDidUpdateSignal;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
- (id)description;
- (id)statusDidUpdateParams;
- (void)markStatusPending;
- (_Bool)appendCompletionIfRunning:(id)arg1;
- (void)handleTaskFailWithError:(id)arg1;
- (void)handleTaskSuccessWithProcessedFilePath:(id)arg1;
- (void)handleTaskStart;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 audioFileManager:(id)arg3 statusDidUpdateSignal:(id)arg4;

@end

