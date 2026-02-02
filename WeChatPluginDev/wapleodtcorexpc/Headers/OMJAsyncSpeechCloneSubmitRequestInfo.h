//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface OMJAsyncSpeechCloneSubmitRequestInfo : NSObject
{
    NSString *_voiceID;
    NSData *_audio;
    NSString *_text;
    long long _offset;
    long long _totalLength;
    NSDictionary *_extraParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(readonly, nonatomic) long long totalLength; // @synthesize totalLength=_totalLength;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSData *audio; // @synthesize audio=_audio;
@property(readonly, nonatomic) NSString *voiceID; // @synthesize voiceID=_voiceID;
- (id)initWithVoiceID:(id)arg1 audio:(id)arg2 text:(id)arg3 offset:(long long)arg4 totalLength:(long long)arg5 extraParams:(id)arg6;

@end

