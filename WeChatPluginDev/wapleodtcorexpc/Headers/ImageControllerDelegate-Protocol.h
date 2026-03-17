//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CaptureVideoInfo, EditImageAttr, EditVideoAttr, ImageInfo, MMAsset, MMAssetPickerController, MMAssetPickerControllerState, MMAssetPickerInterceptor, NSArray, NSData, NSString, SightDraft, UIImage, UIViewController;

@protocol ImageControllerDelegate <NSObject>
- (_Bool)CanDragSelect;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendOriginalVideo;
- (UIViewController *)getViewController;

@optional
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willFinishPickingAssets:(NSArray *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (NSString *)getCurrentChatName;
- (_Bool)isMassSend;
- (_Bool)isChatroom;
- (unsigned int)getInputLimitEmotionBufSize;
- (void)processInsertedGifData:(NSData *)arg1;
- (_Bool)CanSendEmoticonMessage;
- (void)processImageControllerDidCancel:(unsigned long long)arg1;
- (void)CameraControllerDidTakeSightImage:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void)CameraControllerDidTakeSightImage:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3;
- (void (^)(void (^)(void)))CameraControllerWillTakeImage;
- (void)CameraControllerDidTakeVideo:(CaptureVideoInfo *)arg1;
- (void)CameraControllerDidTakeSight:(SightDraft *)arg1 editVideoAttr:(EditVideoAttr *)arg2;
- (void)CameraControllerDidTakeSight:(SightDraft *)arg1;
- (void (^)(void (^)(void)))CameraControllerWillTakeVideo;
- (NSString *)chatUserNameForSightStatistics;
- (void)processImageDidFinish;
- (void)processImageDidCancel;
- (void)processInsertedImage:(UIImage *)arg1 withData:(NSData *)arg2 ImageInfo:(ImageInfo *)arg3;
- (void)processInsertedAsset:(MMAsset *)arg1;
- (void (^)(void (^)(void)))willFinishPickingAsset;
@end

