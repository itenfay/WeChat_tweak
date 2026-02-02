//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageAttr, EditImageLogicController, NSURL, UIImage;

@interface MMAssetForFakeFastSend
{
    _Bool _isNeedOriginImage;
    UIImage *_oImage;
    EditImageAttr *_editImageAttr;
    EditImageLogicController *_editImageLogicController;
    NSURL *_screenShotUrl;
}

+ (_Bool)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *screenShotUrl; // @synthesize screenShotUrl=_screenShotUrl;
@property(nonatomic) __weak EditImageLogicController *editImageLogicController; // @synthesize editImageLogicController=_editImageLogicController;
@property(retain, nonatomic) EditImageAttr *editImageAttr; // @synthesize editImageAttr=_editImageAttr;
@property(retain, nonatomic) UIImage *oImage; // @synthesize oImage=_oImage;
@property(nonatomic) _Bool isNeedOriginImage; // @synthesize isNeedOriginImage=_isNeedOriginImage;
- (_Bool)tryUpdateAsset;
- (id)m_editImageAttr;
- (id)getEditImageAttr;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(_Bool)arg3;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)asyncGetOriginImageDataSizeWithBlock:(CDUnknownBlockType)arg1;
- (id)getOriginImageDataSize;
- (_Bool)isPicture;
- (id)alAssetReferenceUrl;
- (id)assetId;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (struct CGSize)retriveOriginImageSize;
- (id)initWithUrl:(id)arg1 withImg:(id)arg2 IsNeedOrigin:(_Bool)arg3;

@end

