//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveShopShelfAddPreviousLiveGoodsWarningPageSheet
{
    _Bool _hasClickedConfirm;
    CDUnknownBlockType _completion;
}

+ (void)showWithPageInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasClickedConfirm; // @synthesize hasClickedConfirm=_hasClickedConfirm;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)initWithPageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

