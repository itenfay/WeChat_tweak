//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveStickerTextTemplateItem, MMFinderLiveStickerTextTemplatesPageSheet;

@protocol MMFinderLiveStickerTextTemplatesPageSheetDelegate <NSObject>

@optional
- (void)onStickerTextTemplatesPageSheetFrameDidChange:(MMFinderLiveStickerTextTemplatesPageSheet *)arg1;
- (void)onStickerTextTemplatesPageSheet:(MMFinderLiveStickerTextTemplatesPageSheet *)arg1 selectionChanged:(MMFinderLiveStickerTextTemplateItem *)arg2;
- (void)onStickerTextTemplatesPageSheet:(MMFinderLiveStickerTextTemplatesPageSheet *)arg1 closedWithConfirmation:(_Bool)arg2;
@end

