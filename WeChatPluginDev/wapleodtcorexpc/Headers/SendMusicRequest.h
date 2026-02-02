//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SendMusicRequest : NSObject
{
    NSString *_musicId;
    NSString *_songName;
    NSString *_singer;
    NSString *_dataUrl;
    NSString *_appid;
    NSString *_webUrl;
    NSString *_coverUrl;
    NSString *_mid;
    NSString *_lyric;
    NSNumber *_requestCode;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMusicId:(id)arg1 songName:(id)arg2 singer:(id)arg3 dataUrl:(id)arg4 appid:(id)arg5 webUrl:(id)arg6 coverUrl:(id)arg7 mid:(id)arg8 lyric:(id)arg9 requestCode:(id)arg10;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *requestCode; // @synthesize requestCode=_requestCode;
@property(copy, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
- (id)toList;

@end

