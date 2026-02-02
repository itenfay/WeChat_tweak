//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel;

@interface CLMDeleteOKHalfScreenView
{
    unsigned long long _dataSize;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UIImageView *_finishIconView;
    NSString *_finishTitle;
    NSString *_finishTip;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finishTip; // @synthesize finishTip=_finishTip;
@property(copy, nonatomic) NSString *finishTitle; // @synthesize finishTitle=_finishTitle;
@property(retain, nonatomic) UIImageView *finishIconView; // @synthesize finishIconView=_finishIconView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)setupDetailView;
- (void)updateView;
- (id)initWithDataSize:(unsigned long long)arg1 finishTitle:(id)arg2 finishTip:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

