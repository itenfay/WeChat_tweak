//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMImageExifLogInfo : NSObject
{
    _Bool _isLivePhoto;
    _Bool _hasLivePhotoInfo;
    int _orientation;
    NSString *_localID;
    unsigned long long _mediaType;
    unsigned long long _originWidth;
    unsigned long long _originHeight;
    unsigned long long _compressedWidth;
    unsigned long long _compressedHeight;
    unsigned long long _originSize;
    unsigned long long _compressedSize;
    NSString *_fNumber;
    NSString *_exposureTime;
    unsigned long long _iso;
    unsigned long long _flash;
    NSString *_lensModel;
    NSString *_creatTime;
    NSString *_GPSInfoFromMetaData;
    unsigned long long _isFromWeChat;
    unsigned long long _scene;
    unsigned long long _sceneType;
    unsigned long long _fileSource;
    NSString *_make;
    NSString *_software;
    NSString *_fileExt;
    NSString *_YCbCrSubSampling;
    double _livePhotoStillImageTime;
    unsigned long long _faceCount;
    NSString *_rawExifDicInfoJSON;
    NSString *_rawTiffDicInfoJSON;
    NSString *_rawGPSDicInfoJSON;
    NSString *_md5;
    unsigned long long _uploadMediaType;
    NSDictionary *_rawImageMetadata;
}

+ (void)initialize;
+ (void)PBArrayAdd_livePhotoStillImageTime;
+ (void)PBArrayAdd_hasLivePhotoInfo;
+ (void)PBArrayAdd_isLivePhoto;
+ (void)PBArrayAdd_orientation;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_rawGPSDicInfoJSON;
+ (void)PBArrayAdd_rawTiffDicInfoJSON;
+ (void)PBArrayAdd_rawExifDicInfoJSON;
+ (void)PBArrayAdd_faceCount;
+ (void)PBArrayAdd_YCbCrSubSampling;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_software;
+ (void)PBArrayAdd_make;
+ (void)PBArrayAdd_fileSource;
+ (void)PBArrayAdd_sceneType;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_isFromWeChat;
+ (void)PBArrayAdd_creatTime;
+ (void)PBArrayAdd_lensModel;
+ (void)PBArrayAdd_flash;
+ (void)PBArrayAdd_iso;
+ (void)PBArrayAdd_exposureTime;
+ (void)PBArrayAdd_fNumber;
+ (void)PBArrayAdd_compressedSize;
+ (void)PBArrayAdd_originSize;
+ (void)PBArrayAdd_compressedHeight;
+ (void)PBArrayAdd_compressedWidth;
+ (void)PBArrayAdd_originHeight;
+ (void)PBArrayAdd_originWidth;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_localID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *rawImageMetadata; // @synthesize rawImageMetadata=_rawImageMetadata;
@property(nonatomic) unsigned long long uploadMediaType; // @synthesize uploadMediaType=_uploadMediaType;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *rawGPSDicInfoJSON; // @synthesize rawGPSDicInfoJSON=_rawGPSDicInfoJSON;
@property(copy, nonatomic) NSString *rawTiffDicInfoJSON; // @synthesize rawTiffDicInfoJSON=_rawTiffDicInfoJSON;
@property(copy, nonatomic) NSString *rawExifDicInfoJSON; // @synthesize rawExifDicInfoJSON=_rawExifDicInfoJSON;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(nonatomic) double livePhotoStillImageTime; // @synthesize livePhotoStillImageTime=_livePhotoStillImageTime;
@property(nonatomic) _Bool hasLivePhotoInfo; // @synthesize hasLivePhotoInfo=_hasLivePhotoInfo;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(copy, nonatomic) NSString *YCbCrSubSampling; // @synthesize YCbCrSubSampling=_YCbCrSubSampling;
@property(copy, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(copy, nonatomic) NSString *software; // @synthesize software=_software;
@property(copy, nonatomic) NSString *make; // @synthesize make=_make;
@property(nonatomic) unsigned long long fileSource; // @synthesize fileSource=_fileSource;
@property(nonatomic) unsigned long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long isFromWeChat; // @synthesize isFromWeChat=_isFromWeChat;
@property(copy, nonatomic) NSString *GPSInfoFromMetaData; // @synthesize GPSInfoFromMetaData=_GPSInfoFromMetaData;
@property(copy, nonatomic) NSString *creatTime; // @synthesize creatTime=_creatTime;
@property(copy, nonatomic) NSString *lensModel; // @synthesize lensModel=_lensModel;
@property(nonatomic) unsigned long long flash; // @synthesize flash=_flash;
@property(nonatomic) unsigned long long iso; // @synthesize iso=_iso;
@property(copy, nonatomic) NSString *exposureTime; // @synthesize exposureTime=_exposureTime;
@property(copy, nonatomic) NSString *fNumber; // @synthesize fNumber=_fNumber;
@property(nonatomic) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property(nonatomic) unsigned long long originSize; // @synthesize originSize=_originSize;
@property(nonatomic) unsigned long long compressedHeight; // @synthesize compressedHeight=_compressedHeight;
@property(nonatomic) unsigned long long compressedWidth; // @synthesize compressedWidth=_compressedWidth;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned long long originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) unsigned long long originWidth; // @synthesize originWidth=_originWidth;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)updateSubSamplingForJPEGImage:(id)arg1;
- (_Bool)isYUV422Image;
- (void)updateForWechatSight;
- (id)getReportStr;
- (void)reportWithPublishId:(id)arg1;
- (void)report;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

