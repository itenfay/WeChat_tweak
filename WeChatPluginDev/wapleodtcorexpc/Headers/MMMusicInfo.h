//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AudioFileBehaviorReporter, MMMusicShareItem, MusicLiveGetSongStatusResp_MusicianInfo, NSString, UIImage, UIViewController;

@interface MMMusicInfo : NSObject
{
    NSString *m_nsMusicID;
    NSString *m_nsTitle;
    NSString *m_nsSinger;
    NSString *m_nsEPName;
    NSString *m_nsCoverImg;
    NSString *m_nsCoverImgHD;
    NSString *m_nsLyrics;
    NSString *m_nsWebUrl;
    NSString *m_nsDataUrl;
    NSString *m_nsLowBandUrl;
    NSString *m_nsAppId;
    NSString *m_nsJSAPIWebUrl;
    NSString *m_webViewId;
    NSString *m_nsWAUsername;
    NSString *m_nsWAAppId;
    NSString *m_nsLiteAppId;
    double m_nsStartTime;
    NSString *m_nsWebViewSrcId;
    NSString *m_nsMusicBarUrl;
    _Bool m_isLocalFile;
    _Bool m_disableBanner;
    _Bool m_isSpam;
    _Bool m_isHLS;
    _Bool m_isBannerDirectToWebView;
    NSString *m_nsBizUserName;
    NSString *m_favId;
    int m_originSourceType;
    MusicLiveGetSongStatusResp_MusicianInfo *m_nsMusician;
    _Bool _ignoreCache;
    unsigned int _playActionSourceType;
    double m_playbackRate;
    unsigned long long uiStyle;
    NSString *m_spamAlertWording;
    NSString *m_genre;
    double m_publicTime;
    MMMusicShareItem *m_musicShareItem;
    NSString *mpAudioId;
    NSString *_referrer;
    UIImage *_minimizeMVThumbImage;
    NSString *_minimizeMVThumbUrl;
    UIImage *_m_localCoverImage;
    id _m_userData;
    UIViewController *_m_mvViewController;
    AudioFileBehaviorReporter *_behaviorReporter;
}

+ (id)genMusicInfoFromMsg:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_mpAudioId;
+ (void)PBArrayAdd_m_nsLiteAppId;
+ (void)PBArrayAdd_m_nsMusician;
+ (void)PBArrayAdd_m_musicShareItem;
+ (void)PBArrayAdd_m_publicTime;
+ (void)PBArrayAdd_m_genre;
+ (void)PBArrayAdd_m_spamAlertWording;
+ (void)PBArrayAdd_uiStyle;
+ (void)PBArrayAdd_m_playbackRate;
+ (void)PBArrayAdd_m_favId;
+ (void)PBArrayAdd_m_isBannerDirectToWebView;
+ (void)PBArrayAdd_m_isHLS;
+ (void)PBArrayAdd_m_isSpam;
+ (void)PBArrayAdd_m_disableBanner;
+ (void)PBArrayAdd_m_isLocalFile;
+ (void)PBArrayAdd_m_nsMusicBarUrl;
+ (void)PBArrayAdd_m_nsWebViewSrcId;
+ (void)PBArrayAdd_m_nsStartTime;
+ (void)PBArrayAdd_m_nsWAAppId;
+ (void)PBArrayAdd_m_nsWAUsername;
+ (void)PBArrayAdd_m_webViewId;
+ (void)PBArrayAdd_m_nsJSAPIWebUrl;
+ (void)PBArrayAdd_m_nsAppId;
+ (void)PBArrayAdd_m_nsLowBandUrl;
+ (void)PBArrayAdd_m_nsDataUrl;
+ (void)PBArrayAdd_m_nsWebUrl;
+ (void)PBArrayAdd_m_nsLyrics;
+ (void)PBArrayAdd_m_nsCoverImgHD;
+ (void)PBArrayAdd_m_nsCoverImg;
+ (void)PBArrayAdd_m_nsEPName;
+ (void)PBArrayAdd_m_nsSinger;
+ (void)PBArrayAdd_m_nsTitle;
+ (void)PBArrayAdd_m_nsMusicID;
+ (id)singerNameFromArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AudioFileBehaviorReporter *behaviorReporter; // @synthesize behaviorReporter=_behaviorReporter;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) __weak UIViewController *m_mvViewController; // @synthesize m_mvViewController=_m_mvViewController;
@property(nonatomic) unsigned int playActionSourceType; // @synthesize playActionSourceType=_playActionSourceType;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData=_m_userData;
@property(retain, nonatomic) UIImage *m_localCoverImage; // @synthesize m_localCoverImage=_m_localCoverImage;
@property(retain, nonatomic) NSString *minimizeMVThumbUrl; // @synthesize minimizeMVThumbUrl=_minimizeMVThumbUrl;
@property(retain, nonatomic) UIImage *minimizeMVThumbImage; // @synthesize minimizeMVThumbImage=_minimizeMVThumbImage;
@property(copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(retain, nonatomic) NSString *m_nsBizUserName; // @synthesize m_nsBizUserName;
@property(nonatomic) int m_originSourceType; // @synthesize m_originSourceType;
@property(copy, nonatomic) NSString *mpAudioId; // @synthesize mpAudioId;
@property(retain, nonatomic) NSString *m_nsLiteAppId; // @synthesize m_nsLiteAppId;
@property(retain, nonatomic) MusicLiveGetSongStatusResp_MusicianInfo *m_nsMusician; // @synthesize m_nsMusician;
@property(retain, nonatomic) MMMusicShareItem *m_musicShareItem; // @synthesize m_musicShareItem;
@property(nonatomic) double m_publicTime; // @synthesize m_publicTime;
@property(retain, nonatomic) NSString *m_genre; // @synthesize m_genre;
@property(copy, nonatomic) NSString *m_spamAlertWording; // @synthesize m_spamAlertWording;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle;
@property(nonatomic) double m_playbackRate; // @synthesize m_playbackRate;
@property(retain, nonatomic) NSString *m_favId; // @synthesize m_favId;
@property(nonatomic) _Bool m_isBannerDirectToWebView; // @synthesize m_isBannerDirectToWebView;
@property(nonatomic) _Bool m_isHLS; // @synthesize m_isHLS;
@property(nonatomic) _Bool m_isSpam; // @synthesize m_isSpam;
@property(nonatomic) _Bool m_disableBanner; // @synthesize m_disableBanner;
@property(nonatomic) _Bool m_isLocalFile; // @synthesize m_isLocalFile;
@property(retain, nonatomic) NSString *m_nsMusicBarUrl; // @synthesize m_nsMusicBarUrl;
@property(retain, nonatomic) NSString *m_nsWebViewSrcId; // @synthesize m_nsWebViewSrcId;
@property(nonatomic) double m_nsStartTime; // @synthesize m_nsStartTime;
@property(retain, nonatomic) NSString *m_nsWAAppId; // @synthesize m_nsWAAppId;
@property(retain, nonatomic) NSString *m_nsWAUsername; // @synthesize m_nsWAUsername;
@property(retain, nonatomic) NSString *m_webViewId; // @synthesize m_webViewId;
@property(retain, nonatomic) NSString *m_nsJSAPIWebUrl; // @synthesize m_nsJSAPIWebUrl;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId;
@property(retain, nonatomic) NSString *m_nsLowBandUrl; // @synthesize m_nsLowBandUrl;
@property(retain, nonatomic) NSString *m_nsDataUrl; // @synthesize m_nsDataUrl;
@property(retain, nonatomic) NSString *m_nsWebUrl; // @synthesize m_nsWebUrl;
@property(retain, nonatomic) NSString *m_nsLyrics; // @synthesize m_nsLyrics;
@property(retain, nonatomic) NSString *m_nsCoverImgHD; // @synthesize m_nsCoverImgHD;
@property(retain, nonatomic) NSString *m_nsCoverImg; // @synthesize m_nsCoverImg;
@property(retain, nonatomic) NSString *m_nsEPName; // @synthesize m_nsEPName;
@property(retain, nonatomic) NSString *m_nsSinger; // @synthesize m_nsSinger;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsMusicID; // @synthesize m_nsMusicID;
- (_Bool)isLyricsEmpty;
- (_Bool)isMusicUrlEmpty;
- (_Bool)isShakeOversea;
- (_Bool)isQQMusicAppId;
- (_Bool)isQQMusic;
- (_Bool)isChannelMusic;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)getPBPropertyTable;
- (id)initWithSendMusicRequest:(id)arg1;
- (id)toFlutterMusicInfo;
- (id)initWithFlutterMusicInfo:(id)arg1 uiStyle:(unsigned long long)arg2;
- (id)stringWithouHighlightedMark:(id)arg1;
- (id)initWithLiveMusicInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

