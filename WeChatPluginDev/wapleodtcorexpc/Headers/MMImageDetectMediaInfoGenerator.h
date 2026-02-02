//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMImageDetectMediaInfoGenerator : NSObject
{
}

+ (unsigned int)ocrImageRatioLimit;
+ (unsigned int)searchImageRatioLimit;
+ (float)allImageCompressionQuality;
+ (unsigned int)allImagePreferSize;
+ (_Bool)isImageAreaOKWithFilePath:(id)arg1 businessType:(unsigned int)arg2;
+ (_Bool)isImageLengthOKWithFilePath:(id)arg1;
+ (unsigned int)ratioLimitWithBusinessType:(unsigned int)arg1;
+ (id)generateResizeConfig:(unsigned int)arg1;
+ (_Bool)hasSufficientMemoryWithImageWidth:(double)arg1 imageHeight:(double)arg2;
+ (id)generateTempCompressImagePath:(id)arg1;
+ (id)generateTempResizedImagePath:(id)arg1;
+ (id)generatClientMsgID;
+ (void)fillDetectMediaInfo:(id)arg1 imageFilePath:(id)arg2 businessType:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)asyncGenerateDetectMediaInfoWithImageFilePath:(id)arg1 businessType:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)asyncGenerateDetectMediaInfoWithChatMsgWrap:(id)arg1 businessType:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)syncGenerateDetectMediaInfoWithSnsMediaItem:(id)arg1 businessType:(unsigned int)arg2;

@end

