//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJMovieTemplateInfo, MMImageExifLogInfo, NSArray, NSData, NSError, NSMutableArray, NSMutableDictionary, NSString, VideoUploadStatInfo, WCEditVideoPostReportInfo, WCFinderVideoQualityScoreModel, WCMomentsTemplateInfo, WCSightVideoCompositeTask;

@interface SightDraft
{
    _Bool _isUseFFmpegHevcEncoding;
    int _draftID;
    int _date;
    int _sourceForSNSUploadStat;
    NSMutableArray *_itemAry;
    WCEditVideoPostReportInfo *_reportInfo;
    VideoUploadStatInfo *_uploadStatInfo;
    MMImageExifLogInfo *_exifLogInfo;
    WCFinderVideoQualityScoreModel *_videoScoreModel;
    NSMutableDictionary *_userInfo;
    NSError *_error;
    NSString *_draftItemVideoPath;
    NSMutableDictionary *_serializableExtMap;
    NSString *_RISKY_savedSightCompositeTaskId;
    WCSightVideoCompositeTask *_cachedSightCompositeTask;
}

+ (id)draftWithVideoURL:(id)arg1 thumbImage:(id)arg2;
+ (id)draftWithVideoURL:(id)arg1 andPathPrefix:(id)arg2;
+ (id)draftWithVideoURL:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_RISKY_savedSightCompositeTaskId;
+ (void)PBArrayAdd_serializableExtMapData;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_itemAry;
+ (void)PBArrayAdd_draftID;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSightVideoCompositeTask *cachedSightCompositeTask; // @synthesize cachedSightCompositeTask=_cachedSightCompositeTask;
@property(retain, nonatomic) NSString *RISKY_savedSightCompositeTaskId; // @synthesize RISKY_savedSightCompositeTaskId=_RISKY_savedSightCompositeTaskId;
@property(retain, nonatomic) NSMutableDictionary *serializableExtMap; // @synthesize serializableExtMap=_serializableExtMap;
@property(nonatomic) _Bool isUseFFmpegHevcEncoding; // @synthesize isUseFFmpegHevcEncoding=_isUseFFmpegHevcEncoding;
@property(copy, nonatomic) NSString *draftItemVideoPath; // @synthesize draftItemVideoPath=_draftItemVideoPath;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCFinderVideoQualityScoreModel *videoScoreModel; // @synthesize videoScoreModel=_videoScoreModel;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(retain, nonatomic) VideoUploadStatInfo *uploadStatInfo; // @synthesize uploadStatInfo=_uploadStatInfo;
@property(retain, nonatomic) WCEditVideoPostReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(nonatomic) int date; // @synthesize date=_date;
@property(retain, nonatomic) NSMutableArray *itemAry; // @synthesize itemAry=_itemAry;
@property(nonatomic) int draftID; // @synthesize draftID=_draftID;
- (void)removeCachedSightCompositeTaskAtIndex:(long long)arg1;
- (id)getCachedSightCompositeTaskAtIndex:(long long)arg1;
- (void)setCachedSightCompositeTask:(id)arg1 atIndex:(long long)arg2;
- (id)serializableExtForKey:(id)arg1;
- (void)removeSerializableExtForKey:(id)arg1;
- (void)setSerializableExt:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSData *serializableExtMapData;
- (_Bool)isSightResourceValid;
- (id)getItem:(unsigned long long)arg1;
- (void)addItem:(id)arg1 pathPrefix:(id)arg2;
- (void)addItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;
@property(retain, nonatomic) NSString *mj_originVideoFilePath;
@property(retain, nonatomic) MJMovieTemplateInfo *mj_movieTemplateInfo;
@property(retain, nonatomic) WCMomentsTemplateInfo *moments_templateInfo;
@property(copy, nonatomic) NSArray *MomentsTemplate_originalAssetsIDs;
- (void)saveToPhotoLibraryWithTips:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveToPhotoLibraryWithTips:(_Bool)arg1;
- (void)saveToPhotoLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

