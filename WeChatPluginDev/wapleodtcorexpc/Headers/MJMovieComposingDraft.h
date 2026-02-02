//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAssetAnalysisReportInfo, MJAssetAnalysisReportInfoModel, MJVocalAdjustmentCache, NSArray, NSData, NSDictionary, NSString, OMCProject, OMJAspectRatio, OMJAssetInfo;

@interface MJMovieComposingDraft : NSObject
{
    _Bool _isFromAlbum;
    OMCProject *_project;
    unsigned long long _maasSDKVersion;
    long long _entryScene;
    NSString *_publisherSessionID;
    unsigned long long _narrationType;
    OMJAssetInfo *_originAssetInfo;
    NSArray *_originAssetInfos;
    NSArray *_originAssets;
    OMJAspectRatio *_originAspectRatio;
    NSData *_assetClassifyResult;
    MJVocalAdjustmentCache *_vocalAdjustmentCache;
    MJAssetAnalysisReportInfo *_realShotReportInfo;
    NSData *_projectData;
    NSArray *_assetDraftModels;
    NSData *_aspectRatioData;
    NSDictionary *_vocalAdjustmentParamsModels;
    MJAssetAnalysisReportInfoModel *_realShotReportInfoModel;
}

+ (void)initialize;
+ (void)PBArrayAdd_realShotReportInfoModel;
+ (void)PBArrayAdd_narrationType;
+ (void)PBArrayAdd_vocalAdjustmentParamsModels;
+ (void)PBArrayAdd_entryScene;
+ (void)PBArrayAdd_aspectRatioData;
+ (void)PBArrayAdd_publisherSessionID;
+ (void)PBArrayAdd_assetDraftModels;
+ (void)PBArrayAdd_projectData;
+ (void)PBArrayAdd_assetClassifyResult;
+ (void)PBArrayAdd_maasSDKVersion;
+ (void)PBArrayAdd_isFromAlbum;
- (void).cxx_destruct;
@property(retain, nonatomic) MJAssetAnalysisReportInfoModel *realShotReportInfoModel; // @synthesize realShotReportInfoModel=_realShotReportInfoModel;
@property(retain, nonatomic) NSDictionary *vocalAdjustmentParamsModels; // @synthesize vocalAdjustmentParamsModels=_vocalAdjustmentParamsModels;
@property(retain, nonatomic) NSData *aspectRatioData; // @synthesize aspectRatioData=_aspectRatioData;
@property(retain, nonatomic) NSArray *assetDraftModels; // @synthesize assetDraftModels=_assetDraftModels;
@property(retain, nonatomic) NSData *projectData; // @synthesize projectData=_projectData;
@property(retain, nonatomic) MJAssetAnalysisReportInfo *realShotReportInfo; // @synthesize realShotReportInfo=_realShotReportInfo;
@property(retain, nonatomic) MJVocalAdjustmentCache *vocalAdjustmentCache; // @synthesize vocalAdjustmentCache=_vocalAdjustmentCache;
@property(retain, nonatomic) NSData *assetClassifyResult; // @synthesize assetClassifyResult=_assetClassifyResult;
@property(retain, nonatomic) OMJAspectRatio *originAspectRatio; // @synthesize originAspectRatio=_originAspectRatio;
@property(retain, nonatomic) NSArray *originAssets; // @synthesize originAssets=_originAssets;
@property(retain, nonatomic) NSArray *originAssetInfos; // @synthesize originAssetInfos=_originAssetInfos;
@property(retain, nonatomic) OMJAssetInfo *originAssetInfo; // @synthesize originAssetInfo=_originAssetInfo;
@property(nonatomic) unsigned long long narrationType; // @synthesize narrationType=_narrationType;
@property(retain, nonatomic) NSString *publisherSessionID; // @synthesize publisherSessionID=_publisherSessionID;
@property(nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) _Bool isFromAlbum; // @synthesize isFromAlbum=_isFromAlbum;
@property(nonatomic) unsigned long long maasSDKVersion; // @synthesize maasSDKVersion=_maasSDKVersion;
@property(retain, nonatomic) OMCProject *project; // @synthesize project=_project;
@property(readonly, copy) NSString *description;
- (void)loadVocalAdjustmentCache;
- (void)saveVocalAdjustmentCache;
- (void)fetchOriginAssets;
- (_Bool)restoreAfterPBCoding;
- (_Bool)isMaasSDKVersionCompatible;
- (_Bool)prepareBeforePBCoding;
@property(readonly, nonatomic) NSString *identifier;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

