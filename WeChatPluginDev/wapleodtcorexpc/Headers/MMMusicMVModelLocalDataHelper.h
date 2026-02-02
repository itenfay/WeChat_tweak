//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMusicMVModelLocalDataHelper : NSObject
{
}

+ (void)deleteAllLocalTrimmedVideo:(id)arg1;
+ (void)deleteLocalTrimmedVideo:(id)arg1;
+ (void)trimAndSaveLocalVideo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteLocalCoverImageWithFilename:(id)arg1;
+ (id)copyCoverImageToLocalWithPath:(id)arg1;
+ (id)mvImageResize:(id)arg1 andResizeConstraint:(struct CGSize)arg2;
+ (id)reuseFinderCompressImageDataLogic:(id)arg1;
+ (id)compressedImageData:(id)arg1;
+ (id)saveCoverImageToLocal:(id)arg1;
+ (id)pathToLocalCoverImageWithFilename:(id)arg1;
+ (id)pathToCompressedLocalVideo:(id)arg1;
+ (id)pathToTrimmedLocalVideo:(id)arg1;
+ (id)videoPathWithLocalVideo:(id)arg1 fileName:(id)arg2;
+ (id)genPathToLocalCoverImage;
+ (id)genDataItemForPreviewingWithLocalPics:(id)arg1;
+ (id)genDataItemForPreviewingWithLocalVideo:(id)arg1;
+ (id)getDraftMMKV;
+ (id)getPostMMKV;
+ (void)syncLocalDraft:(id)arg1;
+ (void)syncLocalPendingModels:(id)arg1;
+ (id)loadLocalDraftMVModels;
+ (id)loadLocalPendingMVModels;
+ (void)setupInitialFieldsForLocalMVModel:(id)arg1;
+ (void)fillSelfPublishDefaultValue:(id)arg1;

@end

