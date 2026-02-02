//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveStickerEditingViewController, MMFinderLiveStickerItemBase;
@protocol UICoordinateSpace;

@protocol MMFinderLiveStickerEditingViewControllerDelegate <NSObject>
- (struct CGRect)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 requestingCanvasFrameInCoordinateSpace:(id <UICoordinateSpace>)arg2;

@optional
- (void)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 cancelingWithOriginalSticker:(MMFinderLiveStickerItemBase *)arg2;
- (void)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 removingSticker:(MMFinderLiveStickerItemBase *)arg2;
- (void)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 addingOrChangingSticker:(MMFinderLiveStickerItemBase *)arg2;
@end

