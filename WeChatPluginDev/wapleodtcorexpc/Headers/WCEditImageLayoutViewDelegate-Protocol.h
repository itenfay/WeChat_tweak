//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoBGMSelectedMusicInfo, UIViewController;

@protocol WCEditImageLayoutViewDelegate <NSObject>
- (_Bool)shouldSaveUnCropImages;
- (void)onEditImageChooseVideoBGMDone:(EditVideoBGMSelectedMusicInfo *)arg1;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (UIViewController *)currentViewController;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)getOriginalImage:(void (^)(UIImage *, NSData *))arg1;
- (void)getDisplayImage:(void (^)(UIImage *, NSMutableArray *, _Bool))arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;

@optional
- (void)onClickCropImageSizeButton;
@end

