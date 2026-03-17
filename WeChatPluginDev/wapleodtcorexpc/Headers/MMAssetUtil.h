//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAssetUtil : NSObject
{
}

+ (id)generateMergedImageFromImageList:(id)arg1 forSize:(struct CGSize)arg2 rounded:(_Bool)arg3;
+ (id)getPrimaryColorForPickerScene:(int)arg1;
+ (id)getPrimaryColorForPreviewEditScene:(int)arg1;
+ (id)compressSquareImage:(id)arg1;
+ (struct CGSize)getNormalImageSizeWithOriginImageSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (_Bool)isLongImage:(struct CGSize)arg1;
+ (double)getAssetViewPaddingMarginNew:(_Bool)arg1;
+ (double)getFileBrowserAssetViewLenWithWidth:(double)arg1;
+ (double)getAssetViewLenWithWidth:(double)arg1;
+ (long long)getAssetColumnCurOriNew:(_Bool)arg1;
+ (long long)getAssetColumnCurOri;
+ (double)getAssetViewMarginCurOriNew:(_Bool)arg1;
+ (double)getAssetViewMarginCurOri;

@end

