//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSpeechAudioData, NSArray, NSString;

@interface MJAsyncRequestQueueItem : NSObject
{
    _Bool _isCloneTimbre;
    unsigned long long _type;
    NSString *_roleID;
    NSString *_audioID;
    MJSpeechAudioData *_audioData;
    NSString *_text;
    NSArray *_captionItems;
    CDUnknownBlockType _stsCompletionHandler;
    CDUnknownBlockType _ttsCompletionHandler;
    CDUnknownBlockType _ttsGroupCompletionHandler;
    CDUnknownBlockType _sttGroupCompletionHandler;
    CDUnknownBlockType _speechCloneGroupCompletionHandler;
    CDStruct_1b6d18a9 _audioDuration;
}

+ (id)speechCloneGroupItemWithAudioID:(id)arg1 audioData:(id)arg2 text:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)sttGroupItemWithAudioID:(id)arg1 audioData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)ttsGroupItemWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 captionItems:(id)arg4 audioDuration:(CDStruct_1b6d18a9)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)ttsItemWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)stsItemWithAudioID:(id)arg1 roleID:(id)arg2 audioData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType speechCloneGroupCompletionHandler; // @synthesize speechCloneGroupCompletionHandler=_speechCloneGroupCompletionHandler;
@property(readonly, nonatomic) CDUnknownBlockType sttGroupCompletionHandler; // @synthesize sttGroupCompletionHandler=_sttGroupCompletionHandler;
@property(readonly, nonatomic) CDUnknownBlockType ttsGroupCompletionHandler; // @synthesize ttsGroupCompletionHandler=_ttsGroupCompletionHandler;
@property(readonly, nonatomic) CDUnknownBlockType ttsCompletionHandler; // @synthesize ttsCompletionHandler=_ttsCompletionHandler;
@property(readonly, nonatomic) CDUnknownBlockType stsCompletionHandler; // @synthesize stsCompletionHandler=_stsCompletionHandler;
@property(readonly, nonatomic) _Bool isCloneTimbre; // @synthesize isCloneTimbre=_isCloneTimbre;
@property(readonly, nonatomic) CDStruct_1b6d18a9 audioDuration; // @synthesize audioDuration=_audioDuration;
@property(readonly, nonatomic) NSArray *captionItems; // @synthesize captionItems=_captionItems;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) MJSpeechAudioData *audioData; // @synthesize audioData=_audioData;
@property(readonly, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 roleID:(id)arg2 audioID:(id)arg3 audioData:(id)arg4 text:(id)arg5 captionItems:(id)arg6 audioDuration:(CDStruct_1b6d18a9)arg7 isCloneTimbre:(_Bool)arg8 stsCompletionHandler:(CDUnknownBlockType)arg9 ttsCompletionHandler:(CDUnknownBlockType)arg10 ttsGroupCompletionHandler:(CDUnknownBlockType)arg11 sttGroupCompletionHandler:(CDUnknownBlockType)arg12 speechCloneGroupCompletionHandler:(CDUnknownBlockType)arg13;

@end

