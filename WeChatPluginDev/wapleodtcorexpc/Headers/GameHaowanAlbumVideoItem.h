//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface GameHaowanAlbumVideoItem
{
    _Bool _isLocalCache;
    unsigned int _durationSec;
    unsigned int _previewJumpType;
    NSString *_videoId;
    NSString *_appId;
    NSString *_title;
    NSString *_subtitle;
    NSString *_playUrl;
    NSString *_thumbUrl;
    unsigned long long _createTimeSec;
    NSString *_gameName;
    NSArray *_tags;
    NSString *_transInfo;
    NSString *_previewJumpUrl;
    NSString *_previewPreloadId;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLocalCache; // @synthesize isLocalCache=_isLocalCache;
@property(nonatomic) unsigned int previewJumpType; // @synthesize previewJumpType=_previewJumpType;
@property(retain, nonatomic) NSString *previewPreloadId; // @synthesize previewPreloadId=_previewPreloadId;
@property(retain, nonatomic) NSString *previewJumpUrl; // @synthesize previewJumpUrl=_previewJumpUrl;
@property(retain, nonatomic) NSString *transInfo; // @synthesize transInfo=_transInfo;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
@property(nonatomic) unsigned int durationSec; // @synthesize durationSec=_durationSec;
@property(nonatomic) unsigned long long createTimeSec; // @synthesize createTimeSec=_createTimeSec;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;

@end

