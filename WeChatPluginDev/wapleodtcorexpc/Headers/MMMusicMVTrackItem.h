//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMVInfo_ClientDraftInfo, MMMusicMVTrackItemLocalPic, MMMusicMVTrackItemLocalVideo, NSMutableArray, NSString, WCFinderDataItem;

@interface MMMusicMVTrackItem : NSObject
{
    _Bool _bFlexibleClipGapItem;
    unsigned int _timeLengthInMvMs;
    unsigned int _isFirstUpload;
    unsigned int _videoDuration;
    unsigned int _imageAnimationType;
    int _materialPosForReport;
    unsigned int _materialType;
    unsigned long long _timeOffsetInMvMs;
    unsigned long long _refObjectId;
    NSString *_refNonceId;
    unsigned long long _timeOffsetInClipMs;
    NSString *_localObjectId;
    unsigned long long _uploadState;
    MMMusicMVTrackItemLocalVideo *_localVideo;
    MMMusicMVTrackItemLocalPic *_localPic;
    unsigned long long _postingRefObjectId;
    NSString *_postingRefNonceId;
    unsigned long long _postingClipOffsetMs;
    unsigned long long _postingVideoSource;
    WCFinderDataItem *_dataItemForPreviewing;
    unsigned long long _previewingClipOffsetMs;
    NSMutableArray *_featureList;
    NSString *_transitionId;
    unsigned long long _mediaType;
    NSString *_materialIdForReport;
    NSString *_authorIdForReport;
    unsigned long long _materialFromForReport;
    NSString *_reqIdForReport;
    NSString *_uuid;
    NSString *_localMaterialId;
    unsigned long long _localMaterialTimeOffsetInClipMs;
    FinderMVInfo_ClientDraftInfo *_clientDraftInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_localPic;
+ (void)PBArrayAdd_localMaterialTimeOffsetInClipMs;
+ (void)PBArrayAdd_localMaterialId;
+ (void)PBArrayAdd_materialType;
+ (void)PBArrayAdd_transitionId;
+ (void)PBArrayAdd_imageAnimationType;
+ (void)PBArrayAdd_reqIdForReport;
+ (void)PBArrayAdd_materialFromForReport;
+ (void)PBArrayAdd_materialPosForReport;
+ (void)PBArrayAdd_authorIdForReport;
+ (void)PBArrayAdd_materialIdForReport;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_featureList;
+ (void)PBArrayAdd_isFirstUpload;
+ (void)PBArrayAdd_postingVideoSource;
+ (void)PBArrayAdd_postingClipOffsetMs;
+ (void)PBArrayAdd_postingRefNonceId;
+ (void)PBArrayAdd_postingRefObjectId;
+ (void)PBArrayAdd_localVideo;
+ (void)PBArrayAdd_localObjectId;
+ (void)PBArrayAdd_timeOffsetInClipMs;
+ (void)PBArrayAdd_refNonceId;
+ (void)PBArrayAdd_refObjectId;
+ (void)PBArrayAdd_timeLengthInMvMs;
+ (void)PBArrayAdd_timeOffsetInMvMs;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderMVInfo_ClientDraftInfo *clientDraftInfo; // @synthesize clientDraftInfo=_clientDraftInfo;
@property(nonatomic) unsigned long long localMaterialTimeOffsetInClipMs; // @synthesize localMaterialTimeOffsetInClipMs=_localMaterialTimeOffsetInClipMs;
@property(retain, nonatomic) NSString *localMaterialId; // @synthesize localMaterialId=_localMaterialId;
@property(nonatomic) unsigned int materialType; // @synthesize materialType=_materialType;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *reqIdForReport; // @synthesize reqIdForReport=_reqIdForReport;
@property(nonatomic) unsigned long long materialFromForReport; // @synthesize materialFromForReport=_materialFromForReport;
@property(nonatomic) int materialPosForReport; // @synthesize materialPosForReport=_materialPosForReport;
@property(retain, nonatomic) NSString *authorIdForReport; // @synthesize authorIdForReport=_authorIdForReport;
@property(retain, nonatomic) NSString *materialIdForReport; // @synthesize materialIdForReport=_materialIdForReport;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *transitionId; // @synthesize transitionId=_transitionId;
@property(retain, nonatomic) NSMutableArray *featureList; // @synthesize featureList=_featureList;
@property(nonatomic) unsigned int imageAnimationType; // @synthesize imageAnimationType=_imageAnimationType;
@property(nonatomic) unsigned int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool bFlexibleClipGapItem; // @synthesize bFlexibleClipGapItem=_bFlexibleClipGapItem;
@property(nonatomic) unsigned long long previewingClipOffsetMs; // @synthesize previewingClipOffsetMs=_previewingClipOffsetMs;
@property(retain, nonatomic) WCFinderDataItem *dataItemForPreviewing; // @synthesize dataItemForPreviewing=_dataItemForPreviewing;
@property(nonatomic) unsigned long long postingVideoSource; // @synthesize postingVideoSource=_postingVideoSource;
@property(nonatomic) unsigned long long postingClipOffsetMs; // @synthesize postingClipOffsetMs=_postingClipOffsetMs;
@property(retain, nonatomic) NSString *postingRefNonceId; // @synthesize postingRefNonceId=_postingRefNonceId;
@property(nonatomic) unsigned long long postingRefObjectId; // @synthesize postingRefObjectId=_postingRefObjectId;
@property(retain, nonatomic) MMMusicMVTrackItemLocalPic *localPic; // @synthesize localPic=_localPic;
@property(retain, nonatomic) MMMusicMVTrackItemLocalVideo *localVideo; // @synthesize localVideo=_localVideo;
@property(nonatomic) unsigned long long uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) NSString *localObjectId; // @synthesize localObjectId=_localObjectId;
@property(nonatomic) unsigned int isFirstUpload; // @synthesize isFirstUpload=_isFirstUpload;
@property(nonatomic) unsigned long long timeOffsetInClipMs; // @synthesize timeOffsetInClipMs=_timeOffsetInClipMs;
@property(retain, nonatomic) NSString *refNonceId; // @synthesize refNonceId=_refNonceId;
@property(nonatomic) unsigned long long refObjectId; // @synthesize refObjectId=_refObjectId;
@property(nonatomic) unsigned int timeLengthInMvMs; // @synthesize timeLengthInMvMs=_timeLengthInMvMs;
@property(nonatomic) unsigned long long timeOffsetInMvMs; // @synthesize timeOffsetInMvMs=_timeOffsetInMvMs;
@property(readonly, copy) NSString *description;
- (_Bool)imageAnimationTypeIsValidValue:(int)arg1;
- (unsigned long long)slowVideoLackTimeMs;
- (_Bool)isSlowVideo;
- (unsigned long long)currentClipOffsetMs;
- (id)currentRefNonceId;
- (unsigned long long)currentRefObjectId;
- (_Bool)isSvrMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

