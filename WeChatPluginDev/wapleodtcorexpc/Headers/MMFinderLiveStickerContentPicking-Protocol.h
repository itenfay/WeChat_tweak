//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveStickerItemBase, UIViewController;
@protocol MMFinderLiveStickerContentPickerDelegate;

@protocol MMFinderLiveStickerContentPicking <NSObject>
@property(nonatomic) __weak id <MMFinderLiveStickerContentPickerDelegate> delegate;
- (void)showWithStickerItem:(MMFinderLiveStickerItemBase *)arg1 inViewController:(UIViewController *)arg2;
@end

