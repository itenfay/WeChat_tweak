//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKSMusicTask : NSObject
{
    _Bool _isLocalFile;
    _Bool _isQQMusic;
    _Bool _isHLS;
    NSString *_url;
    NSString *_cacheId;
    NSString *_cacheUrl;
    NSString *_musicId;
    double _startTime;
    double _playbackRate;
    NSString *_referrer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) _Bool isQQMusic; // @synthesize isQQMusic=_isQQMusic;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) NSString *cacheUrl; // @synthesize cacheUrl=_cacheUrl;
@property(copy, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;
- (id)init;

@end

