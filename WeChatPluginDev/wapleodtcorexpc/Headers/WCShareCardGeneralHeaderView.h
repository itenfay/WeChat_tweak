//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCShareCardGeneralCardHeaderDelegate;

@interface WCShareCardGeneralHeaderView
{
    _Bool _bIsShowUseCodeBtn;
    _Bool _bIsIphone5ShareCardMode;
}

@property(nonatomic) _Bool bIsIphone5ShareCardMode; // @synthesize bIsIphone5ShareCardMode=_bIsIphone5ShareCardMode;
@property(nonatomic) _Bool bIsShowUseCodeBtn; // @synthesize bIsShowUseCodeBtn=_bIsShowUseCodeBtn;
- (struct CGRect)getApplyBtnFrame;
- (double)getRealHeight;
- (void)onClickOperationBtn:(id)arg1;
- (void)onClickApplyBtn:(id)arg1;
- (_Bool)hasLimitField;
- (_Bool)hasOperateField;
- (id)getLogoName;
- (double)logoLen;
- (double)initSubViewWhenHasNoOperateFieldWithTitleBottom:(double)arg1;
- (double)initSubViewWhenHasOperateFieldWithTitleBottom:(double)arg1;
- (double)initSubViewWhenHasLimitFieldWithTitleBottom:(double)arg1;
- (void)initGeneralCardContentViewWithStartY:(double)arg1;
- (void)initView;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isShareCard:(_Bool)arg3 isGiftFromUserHeaderView:(_Bool)arg4 isShowUseCodeBtn:(_Bool)arg5 isIphone5ShareCardMode:(_Bool)arg6 cardStatus:(int)arg7 isNeedHideAccecptBtn:(_Bool)arg8 delegate:(id)arg9;

// Remaining properties
@property(nonatomic) __weak id <WCShareCardGeneralCardHeaderDelegate> delegate;

@end

