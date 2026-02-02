//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveImageStickerItem, NSString, UIViewController;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerImagePicker : NSObject
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate;
    MMFinderLiveImageStickerItem *_stickerItem;
    UIViewController *_hostingVc;
    double _targetDimension;
}

- (void).cxx_destruct;
@property(nonatomic) double targetDimension; // @synthesize targetDimension=_targetDimension;
@property(nonatomic) __weak UIViewController *hostingVc; // @synthesize hostingVc=_hostingVc;
@property(retain, nonatomic) MMFinderLiveImageStickerItem *stickerItem; // @synthesize stickerItem=_stickerItem;
@property(nonatomic) __weak id <MMFinderLiveStickerContentPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)imageResizedToTargetDimension:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (id)initWithTargetDimension:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

