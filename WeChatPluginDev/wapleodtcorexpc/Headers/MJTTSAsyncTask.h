//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJAudioFileManager, NSString;

@interface MJTTSAsyncTask
{
    _Bool _isCloneTimbre;
    NSString *_text;
    NSString *_roleID;
    MJAudioFileManager *_audioFileManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCloneTimbre; // @synthesize isCloneTimbre=_isCloneTimbre;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (id)statusDidUpdateParams;
- (void)handleTaskSuccessImplWithResult:(id)arg1 completionHandlers:(id)arg2;
- (void)handleTaskFailImplWithError:(id)arg1 completionHandlers:(id)arg2;
- (void)processWithResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)queryAsyncRequestImplWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)submitAsyncRequestImplWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)taskTimeoutMillis;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 audioFileManager:(id)arg4 statusDidUpdateSignal:(id)arg5;

@end

