//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCMegaVideoMedia : NSObject
{
    NSString *_videoUrl;
    NSString *_thumbUrl;
    unsigned long long _mediaType;
    unsigned long long _videoPlayLen;
    double _width;
    double _height;
    NSString *_md5Sum;
    unsigned long long _fileSize;
    long long _bitrate;
    NSString *_decodeKey;
    NSString *_coverUrl;
    unsigned long long _videoPlayLenMs;
    NSMutableArray *_specsArray;
    NSMutableArray *_hlsSpecsArray;
    NSMutableArray *_hdrSpecsArray;
    NSString *_urlToken;
    NSString *_thumbUrlToken;
    NSString *_coverUrlToken;
}

+ (struct CGRect)rectInRatio_16:(struct CGRect)arg1;
+ (struct CGRect)fullClipRectForMediaSize:(struct CGSize)arg1;
+ (double)fullMinSizeRatio;
+ (double)summarySizeRatioForMediaSize:(struct CGSize)arg1;
+ (struct CGRect)summaryClipRectForMediaSize:(struct CGSize)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_hdrSpecsArray;
+ (void)PBArrayAdd_hlsSpecsArray;
+ (void)PBArrayAdd_specsArray;
+ (void)PBArrayAdd_specsData;
+ (void)PBArrayAdd_coverUrlToken;
+ (void)PBArrayAdd_thumbUrlToken;
+ (void)PBArrayAdd_urlToken;
+ (void)PBArrayAdd_videoPlayLenMs;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_decodeKey;
+ (void)PBArrayAdd_bitrate;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_md5Sum;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_videoPlayLen;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_videoUrl;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coverUrlToken; // @synthesize coverUrlToken=_coverUrlToken;
@property(copy, nonatomic) NSString *thumbUrlToken; // @synthesize thumbUrlToken=_thumbUrlToken;
@property(copy, nonatomic) NSString *urlToken; // @synthesize urlToken=_urlToken;
@property(retain, nonatomic) NSMutableArray *hdrSpecsArray; // @synthesize hdrSpecsArray=_hdrSpecsArray;
@property(retain, nonatomic) NSMutableArray *hlsSpecsArray; // @synthesize hlsSpecsArray=_hlsSpecsArray;
@property(retain, nonatomic) NSMutableArray *specsArray; // @synthesize specsArray=_specsArray;
@property(nonatomic) unsigned long long videoPlayLenMs; // @synthesize videoPlayLenMs=_videoPlayLenMs;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey=_decodeKey;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *md5Sum; // @synthesize md5Sum=_md5Sum;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) unsigned long long videoPlayLen; // @synthesize videoPlayLen=_videoPlayLen;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (id)genFinderMedia;
- (id)appendToken:(id)arg1 toUrl:(id)arg2;
- (id)genFinderMediaWithToken;
@property(readonly, copy) NSString *description;
- (id)convertToPureMediaInfoWithMediaInfo:(id)arg1;
- (id)convertToMediaInfoWithVideoId:(id)arg1 tid:(id)arg2;
- (id)mediaFilePath;
- (id)getLocalThumbPermanentPath;
- (id)getNetThumbTempCachePath;
- (id)thumbPath;
- (id)getLocalMediaPermanentPath;
- (id)getNetMediaTempCachePath;
- (id)mediaPath;
- (id)lengthLabel;
@property(readonly, nonatomic) NSString *coverUrlWithToken;
@property(readonly, nonatomic) NSString *thumbUrlWithToken;
@property(readonly, nonatomic) NSString *videoUrlWithToken;
- (struct CGSize)mediaSize;
- (id)genMegaVideoMedia;
- (id)initWithMegaVideoMedia:(id)arg1;
- (id)specsData;
- (void)setSpecsData:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

