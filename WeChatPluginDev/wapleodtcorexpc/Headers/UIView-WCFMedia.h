//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (WCFMedia)
- (void)wcfPreloadImageWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)wcfLoadImageForPhotoS4:(id)arg1 setting:(long long)arg2 called:(_Bool)arg3 scaleToSize:(struct CGSize)arg4 options:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)wcfLoadImageForPhotoS3:(id)arg1 retryForThumb:(_Bool)arg2 setting:(long long)arg3 called:(_Bool)arg4 scaleToSize:(struct CGSize)arg5 options:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)wcfLoadImageForPhotoS2:(id)arg1 setting:(long long)arg2 called:(_Bool)arg3 scaleToSize:(struct CGSize)arg4 options:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)wcfLoadImageForPhotoMedia:(id)arg1 setting:(long long)arg2 scaleToSize:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)wcfLoadImageForVideoMedia:(id)arg1 scaleToSize:(struct CGSize)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)wcfLoadImageWithMedia:(id)arg1 setting:(long long)arg2 scaleToSize:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)wcfLoadImageWithMedia:(id)arg1 fullScreenThumbFirst:(_Bool)arg2 scaleToSize:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)wcfLoadImageWithMedia:(id)arg1 scaleToSize:(struct CGSize)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)wcfLoadImageFromCacheWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)wcfSetImageWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)wcfSetImageWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)wcfSetMediaTid:(id)arg1;
- (id)wcfMediaTid;
@end

