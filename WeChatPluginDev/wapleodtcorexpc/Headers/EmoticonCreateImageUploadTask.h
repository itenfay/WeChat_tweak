//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, UIImage;

@interface EmoticonCreateImageUploadTask
{
    _Bool _isMultiImage;
    CDUnknownBlockType _prepareFailBlock;
    UIImage *_editedImg;
    NSData *_gifData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *gifData; // @synthesize gifData=_gifData;
@property(retain, nonatomic) UIImage *editedImg; // @synthesize editedImg=_editedImg;
@property(copy, nonatomic) CDUnknownBlockType prepareFailBlock; // @synthesize prepareFailBlock=_prepareFailBlock;
@property(nonatomic) _Bool isMultiImage; // @synthesize isMultiImage=_isMultiImage;
- (void)handleStaticImg:(id)arg1 withAddingItem:(id)arg2;
- (void)startGifImageUpload;
- (void)startStaticImageUpload;
@property(readonly, nonatomic) _Bool isGif;
- (void)startUpload;
- (id)initWithGifData:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;

@end

