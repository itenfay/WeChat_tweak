//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMedia, FinderMediaCodecInfo, NSString, WCFinderFullScreenEditRectModel;

@interface WCFinderUploadMediaTask : NSObject
{
    _Bool _startCdnUpload;
    _Bool _uploadCDNSuccessful;
    _Bool _isH265;
    _Bool _useLargeFileAPI;
    _Bool _isLongVideo;
    int _coverShowStyle;
    int _videoType;
    int _dynamicRangeType;
    float _halfWidth;
    float _halfHeight;
    int _halfBitrate;
    int _ratio;
    FinderMedia *_serverMedia;
    NSString *_mediaUrl;
    NSString *_md5;
    NSString *_mediaMd5;
    NSString *_thumbUrl;
    NSString *_thumbMd5;
    NSString *_clientID;
    NSString *_coverUrl;
    NSString *_coverMd5;
    NSString *_fullCoverUrl;
    NSString *_fullCoverMd5;
    NSString *_shareCoverUrl;
    NSString *_shareCoverMd5;
    NSString *_patMusicUrl;
    double _duration;
    long long _totalsize;
    double _mediaWidth;
    double _mediaHeight;
    NSString *_fullScreenThumbUrl;
    NSString *_fullScreenThumbMd5;
    NSString *_videoTitle;
    NSString *_halfScreenMediaUrl;
    NSString *_halfScreenMediaMd5;
    long long _halfFileSize;
    NSString *_uploadHalfMediaURL;
    NSString *_uploadFullThumbURL;
    NSString *_uploadMediaURL;
    NSString *_uploadThumbURL;
    NSString *_uploadCoverURL;
    NSString *_uploadFullCoverURL;
    NSString *_uploadShareCoverURL;
    NSString *_requestHeader;
    unsigned long long _mediaType;
    unsigned long long _fileSize;
    unsigned long long _bitRate;
    unsigned long long _startUploadcdnTimestampMs;
    unsigned long long _endUploadcdnTimestampMs;
    FinderMediaCodecInfo *_mediaCodecInfo;
    unsigned long long _uploadCDNType;
    WCFinderFullScreenEditRectModel *_editRectModel;
}

+ (void)initialize;
+ (void)PBArrayAdd_shareCoverMd5;
+ (void)PBArrayAdd_shareCoverUrl;
+ (void)PBArrayAdd_uploadShareCoverURL;
+ (void)PBArrayAdd_videoTitle;
+ (void)PBArrayAdd_mediaCodecInfo;
+ (void)PBArrayAdd_fullCoverMd5;
+ (void)PBArrayAdd_fullCoverUrl;
+ (void)PBArrayAdd_uploadFullCoverURL;
+ (void)PBArrayAdd_isLongVideo;
+ (void)PBArrayAdd_useLargeFileAPI;
+ (void)PBArrayAdd_isH265;
+ (void)PBArrayAdd_bitRate;
+ (void)PBArrayAdd_uploadCoverURL;
+ (void)PBArrayAdd_coverMd5;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_uploadThumbURL;
+ (void)PBArrayAdd_uploadMediaURL;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_uploadCDNSuccessful;
+ (void)PBArrayAdd_clientID;
+ (void)PBArrayAdd_startCdnUpload;
+ (void)PBArrayAdd_thumbMd5;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_mediaMd5;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_mediaUrl;
- (void).cxx_destruct;
@property(nonatomic) int ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) WCFinderFullScreenEditRectModel *editRectModel; // @synthesize editRectModel=_editRectModel;
@property(nonatomic) unsigned long long uploadCDNType; // @synthesize uploadCDNType=_uploadCDNType;
@property(nonatomic) _Bool isLongVideo; // @synthesize isLongVideo=_isLongVideo;
@property(retain, nonatomic) FinderMediaCodecInfo *mediaCodecInfo; // @synthesize mediaCodecInfo=_mediaCodecInfo;
@property(nonatomic) unsigned long long endUploadcdnTimestampMs; // @synthesize endUploadcdnTimestampMs=_endUploadcdnTimestampMs;
@property(nonatomic) unsigned long long startUploadcdnTimestampMs; // @synthesize startUploadcdnTimestampMs=_startUploadcdnTimestampMs;
@property(nonatomic) _Bool useLargeFileAPI; // @synthesize useLargeFileAPI=_useLargeFileAPI;
@property(nonatomic) _Bool isH265; // @synthesize isH265=_isH265;
@property(nonatomic) unsigned long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(copy, nonatomic) NSString *uploadShareCoverURL; // @synthesize uploadShareCoverURL=_uploadShareCoverURL;
@property(copy, nonatomic) NSString *uploadFullCoverURL; // @synthesize uploadFullCoverURL=_uploadFullCoverURL;
@property(copy, nonatomic) NSString *uploadCoverURL; // @synthesize uploadCoverURL=_uploadCoverURL;
@property(copy, nonatomic) NSString *uploadThumbURL; // @synthesize uploadThumbURL=_uploadThumbURL;
@property(copy, nonatomic) NSString *uploadMediaURL; // @synthesize uploadMediaURL=_uploadMediaURL;
@property(copy, nonatomic) NSString *uploadFullThumbURL; // @synthesize uploadFullThumbURL=_uploadFullThumbURL;
@property(copy, nonatomic) NSString *uploadHalfMediaURL; // @synthesize uploadHalfMediaURL=_uploadHalfMediaURL;
@property(nonatomic) int halfBitrate; // @synthesize halfBitrate=_halfBitrate;
@property(nonatomic) long long halfFileSize; // @synthesize halfFileSize=_halfFileSize;
@property(nonatomic) float halfHeight; // @synthesize halfHeight=_halfHeight;
@property(nonatomic) float halfWidth; // @synthesize halfWidth=_halfWidth;
@property(retain, nonatomic) NSString *halfScreenMediaMd5; // @synthesize halfScreenMediaMd5=_halfScreenMediaMd5;
@property(retain, nonatomic) NSString *halfScreenMediaUrl; // @synthesize halfScreenMediaUrl=_halfScreenMediaUrl;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) NSString *fullScreenThumbMd5; // @synthesize fullScreenThumbMd5=_fullScreenThumbMd5;
@property(retain, nonatomic) NSString *fullScreenThumbUrl; // @synthesize fullScreenThumbUrl=_fullScreenThumbUrl;
@property(nonatomic) double mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(nonatomic) long long totalsize; // @synthesize totalsize=_totalsize;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *patMusicUrl; // @synthesize patMusicUrl=_patMusicUrl;
@property(copy, nonatomic) NSString *shareCoverMd5; // @synthesize shareCoverMd5=_shareCoverMd5;
@property(copy, nonatomic) NSString *shareCoverUrl; // @synthesize shareCoverUrl=_shareCoverUrl;
@property(copy, nonatomic) NSString *fullCoverMd5; // @synthesize fullCoverMd5=_fullCoverMd5;
@property(copy, nonatomic) NSString *fullCoverUrl; // @synthesize fullCoverUrl=_fullCoverUrl;
@property(copy, nonatomic) NSString *coverMd5; // @synthesize coverMd5=_coverMd5;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) _Bool uploadCDNSuccessful; // @synthesize uploadCDNSuccessful=_uploadCDNSuccessful;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) _Bool startCdnUpload; // @synthesize startCdnUpload=_startCdnUpload;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *mediaMd5; // @synthesize mediaMd5=_mediaMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) int dynamicRangeType; // @synthesize dynamicRangeType=_dynamicRangeType;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(nonatomic) int coverShowStyle; // @synthesize coverShowStyle=_coverShowStyle;
@property(retain, nonatomic) FinderMedia *serverMedia; // @synthesize serverMedia=_serverMedia;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

