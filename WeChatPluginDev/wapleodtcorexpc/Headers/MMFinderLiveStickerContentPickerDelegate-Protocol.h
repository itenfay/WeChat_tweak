//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveStickerItemBase;

@protocol MMFinderLiveStickerContentPickerDelegate <NSObject>

@optional
- (void)onStickerContentPickingCanceled;
- (void)onStickerContentConfirmed:(MMFinderLiveStickerItemBase *)arg1;
@end

