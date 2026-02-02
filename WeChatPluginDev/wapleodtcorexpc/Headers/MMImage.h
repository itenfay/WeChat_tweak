//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImage.h>

@class EditImageAttr, MMAsset, MMImageExifLogInfo, MMImageLocation, NSData, NSMutableDictionary, NSString;

@interface MMImage : UIImage
{
    _Bool _isLivePhoto;
    int _m_processState;
    int _sourceForSNSUploadStat;
    NSMutableDictionary *_tempExtraInfo;
    long long _mattID;
    long long _imageFrom;
    NSString *_dataPath;
    MMAsset *_m_asset;
    NSString *_m_assetID;
    UIImage *_m_imageFromAsset;
    NSData *_m_imageData;
    NSString *_livePhotoVideoPath;
    MMImageLocation *_m_location;
    MMImageExifLogInfo *_exifLogInfo;
    NSString *_draftPath;
    NSString *_referenceUrlStr;
    NSString *_m_assetClassNameStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_livePhotoVideoPath;
+ (void)PBArrayAdd_isLivePhoto;
+ (void)PBArrayAdd_draftPath;
+ (void)PBArrayAdd_exifLogInfo;
+ (void)PBArrayAdd_sourceForSNSUploadStat;
+ (void)PBArrayAdd_m_location;
+ (void)PBArrayAdd_m_assetClassNameStr;
+ (void)PBArrayAdd_referenceUrlStr;
+ (void)PBArrayAdd_m_processState;
+ (void)PBArrayAdd_imageFrom;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_mattID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_assetClassNameStr; // @synthesize m_assetClassNameStr=_m_assetClassNameStr;
@property(copy, nonatomic) NSString *referenceUrlStr; // @synthesize referenceUrlStr=_referenceUrlStr;
@property(copy, nonatomic) NSString *draftPath; // @synthesize draftPath=_draftPath;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(retain, nonatomic) MMImageLocation *m_location; // @synthesize m_location=_m_location;
@property(retain, nonatomic) NSString *livePhotoVideoPath; // @synthesize livePhotoVideoPath=_livePhotoVideoPath;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(retain, nonatomic) NSData *m_imageData; // @synthesize m_imageData=_m_imageData;
@property(retain, nonatomic) UIImage *m_imageFromAsset; // @synthesize m_imageFromAsset=_m_imageFromAsset;
@property(retain, nonatomic) NSString *m_assetID; // @synthesize m_assetID=_m_assetID;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset=_m_asset;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(nonatomic) int m_processState; // @synthesize m_processState=_m_processState;
@property(nonatomic) long long imageFrom; // @synthesize imageFrom=_imageFrom;
@property(nonatomic) long long mattID; // @synthesize mattID=_mattID;
@property(readonly, nonatomic) NSMutableDictionary *tempExtraInfo; // @synthesize tempExtraInfo=_tempExtraInfo;
- (Class)m_assetClass;
- (void)setReferenceURL:(id)arg1;
- (id)referenceURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)commonInit;
- (id)getPBPropertyTable;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

