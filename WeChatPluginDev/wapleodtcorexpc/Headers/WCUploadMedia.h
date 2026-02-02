//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditImageAttr, EditVideoAttr, MMImageExifLogInfo, NSArray, NSData, NSMutableArray, NSString, VideoUploadStatInfo, WCMomentsBizInfo, WCUrl;

@interface WCUploadMedia : NSObject
{
    int type;
    int subType;
    NSData *buffer;
    NSString *clientID;
    int failCount;
    _Bool isFinished;
    WCUrl *bufferUrl;
    WCUrl *lowBandUrl;
    WCUrl *bufferDataUrl;
    WCUrl *lowBandDataUrl;
    WCUrl *songAlbumUrl;
    NSString *songLyric;
    NSMutableArray *thumbUrlsList;
    NSString *serverID;
    int outType;
    int imageFilterID;
    struct CGSize imgSize;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *title;
    NSString *desc;
    _Bool isThumbForPrevMeida;
    int imageFrom;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    NSString *userData;
    _Bool isSingleMedia;
    NSString *md5;
    NSString *videoMD5;
    _Bool _skipCompress;
    _Bool _isStory;
    _Bool _isWxamBuffer;
    _Bool _shouldUseDefaultMediaType;
    int _sourceForSNSUploadStat;
    unsigned int _duration;
    unsigned int _sessionStartTime;
    VideoUploadStatInfo *videoUploadStatInfo;
    NSString *_localMid;
    NSString *_singerName;
    NSString *_albumName;
    NSString *_musicGenre;
    NSString *_identification;
    NSString *_hdAlbumThumbUrl;
    unsigned long long _issueDate;
    MMImageExifLogInfo *_exifLogInfo;
    NSArray *_emoticonItemList;
    WCMomentsBizInfo *_bizInfo;
    long long _subMediaType;
    NSString *_livePhotoUUID;
    NSString *_gameSnsVideoDataUrl;
    NSString *_gameSnsVideoThumbUrl;
    NSString *_sessionID;
    NSString *_sightCompositeTaskLocalToken;
    long long _livePhotoStillImageTimeMs;
    NSData *_jpgBuffer;
    NSData *_hdAlbumImgData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseDefaultMediaType; // @synthesize shouldUseDefaultMediaType=_shouldUseDefaultMediaType;
@property(retain, nonatomic) NSData *hdAlbumImgData; // @synthesize hdAlbumImgData=_hdAlbumImgData;
@property(retain, nonatomic) NSData *jpgBuffer; // @synthesize jpgBuffer=_jpgBuffer;
@property(nonatomic) _Bool isWxamBuffer; // @synthesize isWxamBuffer=_isWxamBuffer;
@property(nonatomic) long long livePhotoStillImageTimeMs; // @synthesize livePhotoStillImageTimeMs=_livePhotoStillImageTimeMs;
@property(nonatomic) _Bool isStory; // @synthesize isStory=_isStory;
@property(retain, nonatomic) NSString *sightCompositeTaskLocalToken; // @synthesize sightCompositeTaskLocalToken=_sightCompositeTaskLocalToken;
@property(nonatomic) unsigned int sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool skipCompress; // @synthesize skipCompress=_skipCompress;
@property(retain, nonatomic) NSString *gameSnsVideoThumbUrl; // @synthesize gameSnsVideoThumbUrl=_gameSnsVideoThumbUrl;
@property(retain, nonatomic) NSString *gameSnsVideoDataUrl; // @synthesize gameSnsVideoDataUrl=_gameSnsVideoDataUrl;
@property(copy, nonatomic) NSString *livePhotoUUID; // @synthesize livePhotoUUID=_livePhotoUUID;
@property(nonatomic) long long subMediaType; // @synthesize subMediaType=_subMediaType;
@property(retain, nonatomic) WCMomentsBizInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) NSArray *emoticonItemList; // @synthesize emoticonItemList=_emoticonItemList;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(nonatomic) unsigned long long issueDate; // @synthesize issueDate=_issueDate;
@property(retain, nonatomic) NSString *hdAlbumThumbUrl; // @synthesize hdAlbumThumbUrl=_hdAlbumThumbUrl;
@property(retain, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(retain, nonatomic) NSString *musicGenre; // @synthesize musicGenre=_musicGenre;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) NSString *localMid; // @synthesize localMid=_localMid;
@property(retain, nonatomic) VideoUploadStatInfo *videoUploadStatInfo; // @synthesize videoUploadStatInfo;
@property(retain, nonatomic) NSString *videoMD5; // @synthesize videoMD5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) _Bool isSingleMedia; // @synthesize isSingleMedia;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(nonatomic) int imageFrom; // @synthesize imageFrom;
@property(nonatomic) _Bool isThumbForPrevMeida; // @synthesize isThumbForPrevMeida;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
@property(nonatomic) int imageFilterID; // @synthesize imageFilterID;
@property(nonatomic) int outType; // @synthesize outType;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
@property(retain, nonatomic) NSMutableArray *thumbUrlsList; // @synthesize thumbUrlsList;
@property(retain, nonatomic) NSString *songLyric; // @synthesize songLyric;
@property(retain, nonatomic) WCUrl *songAlbumUrl; // @synthesize songAlbumUrl;
@property(retain, nonatomic) WCUrl *lowBandDataUrl; // @synthesize lowBandDataUrl;
@property(retain, nonatomic) WCUrl *bufferDataUrl; // @synthesize bufferDataUrl;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) WCUrl *bufferUrl; // @synthesize bufferUrl;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isSubMedia;
@property(readonly, nonatomic) _Bool isMainMedia;
- (id)pathForMedia;
- (void)removeMediaBuffer;
- (void)saveMediaBuffer;
- (void)clearMediaBuffer;
- (id)mediaBuffer;
- (id)getTypeName;
- (id)init;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

@end

