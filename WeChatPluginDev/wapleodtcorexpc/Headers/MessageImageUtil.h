//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MessageImageUtil : NSObject
{
}

+ (_Bool)isHDImageDownloaded:(id)arg1;
+ (_Bool)isMiddleImgDownload:(id)arg1;
+ (_Bool)isProgressiveImageData:(id)arg1;
+ (_Bool)isProgressiveImage:(id)arg1;
+ (id)genThumbnailImage:(id)arg1 maxSize:(struct CGSize)arg2;
+ (id)genThumbnailImage:(id)arg1;

@end

