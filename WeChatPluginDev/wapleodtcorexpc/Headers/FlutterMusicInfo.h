//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLMusicIntType, NSNumber, NSString;

@interface FlutterMusicInfo : NSObject
{
    NSString *_musicId;
    NSString *_songName;
    NSString *_singer;
    NSString *_dataUrl;
    NSString *_appid;
    NSString *_webUrl;
    NSString *_coverUrl;
    FLMusicIntType *_duration;
    NSString *_mid;
    NSString *_lyric;
    NSString *_sourceType;
    NSString *_voiceId;
    NSString *_bizUsername;
    NSString *_tid;
    NSString *_nonceId;
    NSNumber *_voiceType;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMusicId:(id)arg1 songName:(id)arg2 singer:(id)arg3 dataUrl:(id)arg4 appid:(id)arg5 webUrl:(id)arg6 coverUrl:(id)arg7 duration:(id)arg8 mid:(id)arg9 lyric:(id)arg10 sourceType:(id)arg11 voiceId:(id)arg12 bizUsername:(id)arg13 tid:(id)arg14 nonceId:(id)arg15 voiceType:(id)arg16;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *voiceType; // @synthesize voiceType=_voiceType;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) FLMusicIntType *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
- (id)toList;

@end

