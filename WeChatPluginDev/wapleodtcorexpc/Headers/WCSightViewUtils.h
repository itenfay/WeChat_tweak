//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSightViewUtils : NSObject
{
}

+ (int)fetchVerticalDisplayTypeWithTid:(id)arg1;
+ (double)getSightMaxLength;
+ (struct CGSize)getImageSize:(struct CGSize)arg1 mediaType:(long long)arg2;
+ (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1 isAd:(_Bool)arg2 mediaType:(long long)arg3 isFullPlay:(_Bool)arg4 mediaTid:(id)arg5;
+ (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1 isAd:(_Bool)arg2 mediaType:(long long)arg3;
+ (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
+ (struct CGSize)sightViewSizeWithMediaItem:(id)arg1 isFullPlay:(_Bool)arg2;
+ (struct CGSize)sightViewSizeWithMediaItem:(id)arg1 isAd:(_Bool)arg2;
+ (struct CGSize)sightViewSizeWithMediaItem:(id)arg1;

@end

