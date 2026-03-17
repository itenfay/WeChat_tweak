//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EditImageReport : NSObject
{
}

+ (void)EditImageReportCannotFindColorInColorBar;
+ (void)EditImageReportDonotHaveDelegateSelector;
+ (void)EditImageReportCannotReadColorPointMap;
+ (void)EditImageReportExceedWaitTimeInRenderingImage;
+ (void)EditImageReportNilImageInLoadOriginalImage;
+ (void)EditImageReportVeryLongImageEdit;
+ (void)EditImageReportLongPressSendNotEdit;
+ (void)EditImageReportEmotionUsed:(id)arg1;
+ (void)EditImageReportOverallSendingEditedImage:(unsigned int)arg1 withAllImage:(unsigned int)arg2 fromScene:(unsigned int)arg3 toScene:(unsigned int)arg4;
+ (void)EditImageReportSingleSendBehavior:(id)arg1 isOriginal:(unsigned int)arg2 fromScene:(unsigned int)arg3;
+ (void)EditImageReportClickBehavior:(unsigned int)arg1 fromScene:(unsigned int)arg2;

@end

