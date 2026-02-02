//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderBaseMediaInfo, FinderCoverScalingInfo, FinderHalfRect, FinderHdrMediaSpecList, FinderHlsMediaSpecList, FinderLiveMediaSpec, FinderLivePhotoMediaInfo, FinderMediaCdnInfo, FinderMediaCodecInfo, FinderMediaDebug, FinderObjectScalingInfo, NSMutableArray, NSString;

@interface FinderMedia : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioSpec; // @dynamic audioSpec;
@property(nonatomic) int bitrate; // @dynamic bitrate;
@property(nonatomic) unsigned int cardShowStyle; // @dynamic cardShowStyle;
@property(retain, nonatomic) FinderMediaCodecInfo *codecInfo; // @dynamic codecInfo;
@property(retain, nonatomic) FinderCoverScalingInfo *coverScalingInfo; // @dynamic coverScalingInfo;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *coverUrlToken; // @dynamic coverUrlToken;
@property(retain, nonatomic) FinderMediaDebug *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSString *decodeKey; // @dynamic decodeKey;
@property(nonatomic) unsigned long long duplicateFileSize; // @dynamic duplicateFileSize;
@property(nonatomic) unsigned int dynamicRangeType; // @dynamic dynamicRangeType;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(nonatomic) int fullBitrate; // @dynamic fullBitrate;
@property(retain, nonatomic) NSString *fullCoverUrl; // @dynamic fullCoverUrl;
@property(retain, nonatomic) NSString *fullCoverUrlToken; // @dynamic fullCoverUrlToken;
@property(nonatomic) unsigned int fullFileSize; // @dynamic fullFileSize;
@property(nonatomic) float fullHeight; // @dynamic fullHeight;
@property(retain, nonatomic) NSString *fullMd5Sum; // @dynamic fullMd5Sum;
@property(retain, nonatomic) NSString *fullThumbUrl; // @dynamic fullThumbUrl;
@property(retain, nonatomic) NSString *fullThumbUrlToken; // @dynamic fullThumbUrlToken;
@property(retain, nonatomic) NSString *fullUrl; // @dynamic fullUrl;
@property(retain, nonatomic) NSString *fullUrlToken; // @dynamic fullUrlToken;
@property(nonatomic) float fullWidth; // @dynamic fullWidth;
@property(retain, nonatomic) FinderHalfRect *halfRect; // @dynamic halfRect;
@property(retain, nonatomic) FinderHdrMediaSpecList *hdrSpec; // @dynamic hdrSpec;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) FinderHlsMediaSpecList *hlsSpec; // @dynamic hlsSpec;
@property(nonatomic) unsigned int hotFlag; // @dynamic hotFlag;
@property(retain, nonatomic) NSMutableArray *liveCoverImgs; // @dynamic liveCoverImgs;
@property(retain, nonatomic) FinderLiveMediaSpec *liveSpec; // @dynamic liveSpec;
@property(retain, nonatomic) FinderLivePhotoMediaInfo *livephoto; // @dynamic livephoto;
@property(retain, nonatomic) NSString *livephotoUrl; // @dynamic livephotoUrl;
@property(retain, nonatomic) NSString *md5Sum; // @dynamic md5Sum;
@property(retain, nonatomic) FinderMediaCdnInfo *mediaCdnInfo; // @dynamic mediaCdnInfo;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *nonWatermarkUrl; // @dynamic nonWatermarkUrl;
@property(retain, nonatomic) NSString *rawCoverUrl; // @dynamic rawCoverUrl;
@property(retain, nonatomic) FinderObjectScalingInfo *scalingInfo; // @dynamic scalingInfo;
@property(nonatomic) unsigned int shareCoverShowStyle; // @dynamic shareCoverShowStyle;
@property(retain, nonatomic) NSString *shareCoverUrl; // @dynamic shareCoverUrl;
@property(retain, nonatomic) NSString *shareCoverUrlToken; // @dynamic shareCoverUrlToken;
@property(retain, nonatomic) NSMutableArray *spec; // @dynamic spec;
@property(nonatomic) unsigned long long specVersion; // @dynamic specVersion;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *thumbUrlToken; // @dynamic thumbUrlToken;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *urlCalculateCheckSum; // @dynamic urlCalculateCheckSum;
@property(retain, nonatomic) NSString *urlOriginalCheckSum; // @dynamic urlOriginalCheckSum;
@property(retain, nonatomic) NSString *urlToken; // @dynamic urlToken;
@property(nonatomic) unsigned int videoPlayLen; // @dynamic videoPlayLen;
@property(retain, nonatomic) NSString *videoTitle; // @dynamic videoTitle;
@property(nonatomic) unsigned int videoType; // @dynamic videoType;
@property(nonatomic) float width; // @dynamic width;
@property(retain, nonatomic) FinderBaseMediaInfo *wxam3; // @dynamic wxam3;

@end

