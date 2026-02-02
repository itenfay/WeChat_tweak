//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, NSString, SimpleImgInfo, UIImage, UIView;

@protocol FavFullScreenImageViewControllerDelegate <NSObject>

@optional
- (_Bool)needAsyncDoAnimationHideDidStopHandle;
- (void)onFullScreenHideAnimationEndWithSimpleImgInfo:(SimpleImgInfo *)arg1 complete:(void (^)(void))arg2;
- (void)onFullScreenHideAnimationBeginWithSimpleImgInfo:(SimpleImgInfo *)arg1;
- (struct CGRect)getOriginImageViewRectWithSimpleImgInfo:(SimpleImgInfo *)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(SimpleImgInfo *)arg1;
- (UIView *)getOriginImageViewWithSimpleImgInfo:(SimpleImgInfo *)arg1;
- (_Bool)isVideoNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownloadVideoWith:(SimpleImgInfo *)arg1;
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(NSString *)arg6;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(UIImage *)arg2;
@end

