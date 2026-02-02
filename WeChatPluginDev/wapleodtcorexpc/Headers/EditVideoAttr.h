//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageAttr, EditVideoBGMSelectedMusicInfo, NSMutableArray, NSMutableDictionary, NSString, RecommendedMusicInfo;

@interface EditVideoAttr
{
    _Bool _isSelectFromAlbum;
    _Bool _isOriginSoundOff;
    _Bool _isCropped;
    _Bool _isSizeCropped;
    _Bool _useAssetDurationForCompose;
    _Bool _needComposeWithFullVideoTimeCrop;
    _Bool _isSilenceVideo;
    NSMutableDictionary *_extraInfo;
    unsigned long long _editEntrance;
    NSMutableArray *_videoSingleAttrs;
    RecommendedMusicInfo *_mjPublisherPatMusicInfo;
    EditVideoBGMSelectedMusicInfo *_musicInfo;
    EditImageAttr *_editImageAttr;
    NSString *_assetUrlForMultiComposeVideo;
    struct CGRect _cropFrame;
    CDStruct_e83c9415 _totalEditedTimeRange;
}

+ (_Bool)isEditedTimeRange:(CDStruct_e83c9415)arg1 equalToTimeDuration:(CDStruct_1b6d18a9)arg2;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 totalEditedTimeRange; // @synthesize totalEditedTimeRange=_totalEditedTimeRange;
@property(copy, nonatomic) NSString *assetUrlForMultiComposeVideo; // @synthesize assetUrlForMultiComposeVideo=_assetUrlForMultiComposeVideo;
@property(nonatomic) _Bool isSilenceVideo; // @synthesize isSilenceVideo=_isSilenceVideo;
@property(nonatomic) _Bool needComposeWithFullVideoTimeCrop; // @synthesize needComposeWithFullVideoTimeCrop=_needComposeWithFullVideoTimeCrop;
@property(retain, nonatomic) EditImageAttr *editImageAttr; // @synthesize editImageAttr=_editImageAttr;
@property(nonatomic) _Bool useAssetDurationForCompose; // @synthesize useAssetDurationForCompose=_useAssetDurationForCompose;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) _Bool isSizeCropped; // @synthesize isSizeCropped=_isSizeCropped;
@property(nonatomic) _Bool isCropped; // @synthesize isCropped=_isCropped;
@property(nonatomic) _Bool isOriginSoundOff; // @synthesize isOriginSoundOff=_isOriginSoundOff;
@property(retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) RecommendedMusicInfo *mjPublisherPatMusicInfo; // @synthesize mjPublisherPatMusicInfo=_mjPublisherPatMusicInfo;
@property(nonatomic) _Bool isSelectFromAlbum; // @synthesize isSelectFromAlbum=_isSelectFromAlbum;
@property(retain, nonatomic) NSMutableArray *videoSingleAttrs; // @synthesize videoSingleAttrs=_videoSingleAttrs;
@property(nonatomic) unsigned long long editEntrance; // @synthesize editEntrance=_editEntrance;
@property(readonly, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (id)musicFilePath;
- (void)setEditedTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)editedTimeRange;
- (void)setOriginDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)originDuration;
- (void)addMultiVideoAttrWithAssetURL:(id)arg1 assetDuration:(CDStruct_1b6d18a9)arg2 editTimeRange:(CDStruct_e83c9415)arg3;
- (void)setAssetURL:(id)arg1;
- (id)assetURL;
- (double)editTimeEndForVideoAtIndex:(unsigned long long)arg1;
- (double)editTimeStartForVideoAtIndex:(unsigned long long)arg1;
- (CDStruct_e83c9415)fixedEditTimeRangeOfVideoAtIndex:(unsigned long long)arg1;
- (CDStruct_e83c9415)editTimeRangeOfVideoAtIndex:(unsigned long long)arg1;
- (CDStruct_1b6d18a9)cropTotalDurationOfEachSingleVideoTimeRange;
- (_Bool)isSingleComposeVideo;
- (_Bool)isMultiComposeVideo;
- (_Bool)isEdited;
- (_Bool)isCroppedTimeRangeOnly;
- (id)getVideoFileSize;
- (id)getImageBySize:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

