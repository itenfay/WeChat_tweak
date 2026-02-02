//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface MMAssetForFLTSelectPhotoInfo
{
    NSString *_assetId;
    NSString *_assetPath;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(retain, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbnail;
- (id)getThumbImage;

@end

