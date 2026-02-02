//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class PageSheetBottomDelegate;

@interface EditVideoJumpMorePageSheet
{
    PageSheetBottomDelegate *_sheetBottomDelegate;
}

@property(retain, nonatomic) PageSheetBottomDelegate *sheetBottomDelegate; // @synthesize sheetBottomDelegate=_sheetBottomDelegate;
- (void)setBottomOnConfirm:(CDUnknownBlockType)arg1;
- (void)_initDetailView;
- (void)_initSheetConfig;
- (id)init;

@end
