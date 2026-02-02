//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetBaseView, MMUILabel, NSString, UIImageView, WCAdURLImageView;

@interface WCAdHalfScreenAddBrandView
{
    MMPageSheetBaseView *_sheetView;
    UIImageView *_tipImageView;
    WCAdURLImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCAdURLImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) MMPageSheetBaseView *sheetView; // @synthesize sheetView=_sheetView;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)initSubviews;
- (void)setupSheetView;
- (id)initWithContainerInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

