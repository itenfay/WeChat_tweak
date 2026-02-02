//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderHalfScreedTipsViewController
{
    NSString *_titleTips;
    NSString *_detail;
    NSString *_cancelTips;
    NSString *_confirmTips;
    CDUnknownBlockType _clickConfirmBtnBlock;
    CDUnknownBlockType _clickCancelBtnBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickCancelBtnBlock; // @synthesize clickCancelBtnBlock=_clickCancelBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType clickConfirmBtnBlock; // @synthesize clickConfirmBtnBlock=_clickConfirmBtnBlock;
@property(copy, nonatomic) NSString *confirmTips; // @synthesize confirmTips=_confirmTips;
@property(copy, nonatomic) NSString *cancelTips; // @synthesize cancelTips=_cancelTips;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *titleTips; // @synthesize titleTips=_titleTips;
- (void)onCancelBtn;
- (void)onClickDoneBtn;
- (void)setupSubView;
- (void)setupPageSheetConfig;
- (void)viewDidLoad;
- (double)pageSheetContentHeight;
- (id)initWithTipsTitle:(id)arg1 tipsDetail:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;

@end

