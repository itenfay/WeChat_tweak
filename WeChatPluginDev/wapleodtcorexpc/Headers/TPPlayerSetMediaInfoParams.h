//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerSetMediaInfoParams : NSObject
{
    _Bool _isLocal;
    long long _playerId;
    NSString *_mediaId;
    NSString *_path;
    NSString *_url;
    NSString *_urlToken;
    NSString *_decodeKey;
    long long _videoWidth;
    long long _videoHeight;
    long long _videoDuration;
    NSString *_fileFormat;
    NSString *_thumbPath;
    NSString *_thumbUrl;
    NSString *_thumbUrlToken;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPlayerId:(long long)arg1 mediaId:(id)arg2 path:(id)arg3 url:(id)arg4 urlToken:(id)arg5 decodeKey:(id)arg6 videoWidth:(long long)arg7 videoHeight:(long long)arg8 videoDuration:(long long)arg9 fileFormat:(id)arg10 thumbPath:(id)arg11 thumbUrl:(id)arg12 thumbUrlToken:(id)arg13 isLocal:(_Bool)arg14;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(copy, nonatomic) NSString *thumbUrlToken; // @synthesize thumbUrlToken=_thumbUrlToken;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey=_decodeKey;
@property(copy, nonatomic) NSString *urlToken; // @synthesize urlToken=_urlToken;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)toList;

@end

