//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditImageAttr, MMImageExifLogInfo, NSData, NSString, UIImage;

@interface ImageInfo : NSObject
{
    unsigned int m_uiImageSource;
    UIImage *_image;
    NSData *_imageData;
    NSString *_assetId;
    MMImageExifLogInfo *_exifLogInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(retain, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int m_uiImageSource; // @synthesize m_uiImageSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

@end

