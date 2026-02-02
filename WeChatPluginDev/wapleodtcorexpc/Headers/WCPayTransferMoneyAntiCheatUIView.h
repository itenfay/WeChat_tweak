//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, WCPayTransferMoneyAntiCheatViewData, WCPayWebImageView;
@protocol WCPayTransferMoneyAntiCheatButtonDelegate;

@interface WCPayTransferMoneyAntiCheatUIView : UIView
{
    int _buttonCornerRadius;
    int _lefticonMarginLeft;
    int _wordingLabelMarginLeft;
    int _righticonMarginLeft;
    int _righticonMarginRight;
    int _lefticonWidth;
    int _lefticonHeight;
    int _wordingLabelTestSize;
    int _righticonWidth;
    int _righticonHeight;
    int _wordingLabelMarginVertical;
    int _antiCheatViewMarginHorizontal;
    WCPayTransferMoneyAntiCheatViewData *_data;
    id <WCPayTransferMoneyAntiCheatButtonDelegate> _delegate;
    UIButton *_contentButton;
    MMUILabel *_wordingLabel;
    WCPayWebImageView *_lefticonWebImageView;
    WCPayWebImageView *_righticonWebImageView;
}

- (void).cxx_destruct;
@property(nonatomic) int antiCheatViewMarginHorizontal; // @synthesize antiCheatViewMarginHorizontal=_antiCheatViewMarginHorizontal;
@property(nonatomic) int wordingLabelMarginVertical; // @synthesize wordingLabelMarginVertical=_wordingLabelMarginVertical;
@property(nonatomic) int righticonHeight; // @synthesize righticonHeight=_righticonHeight;
@property(nonatomic) int righticonWidth; // @synthesize righticonWidth=_righticonWidth;
@property(nonatomic) int wordingLabelTestSize; // @synthesize wordingLabelTestSize=_wordingLabelTestSize;
@property(nonatomic) int lefticonHeight; // @synthesize lefticonHeight=_lefticonHeight;
@property(nonatomic) int lefticonWidth; // @synthesize lefticonWidth=_lefticonWidth;
@property(nonatomic) int righticonMarginRight; // @synthesize righticonMarginRight=_righticonMarginRight;
@property(nonatomic) int righticonMarginLeft; // @synthesize righticonMarginLeft=_righticonMarginLeft;
@property(nonatomic) int wordingLabelMarginLeft; // @synthesize wordingLabelMarginLeft=_wordingLabelMarginLeft;
@property(nonatomic) int lefticonMarginLeft; // @synthesize lefticonMarginLeft=_lefticonMarginLeft;
@property(nonatomic) int buttonCornerRadius; // @synthesize buttonCornerRadius=_buttonCornerRadius;
@property(retain, nonatomic) WCPayWebImageView *righticonWebImageView; // @synthesize righticonWebImageView=_righticonWebImageView;
@property(retain, nonatomic) WCPayWebImageView *lefticonWebImageView; // @synthesize lefticonWebImageView=_lefticonWebImageView;
@property(retain, nonatomic) MMUILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) UIButton *contentButton; // @synthesize contentButton=_contentButton;
@property(nonatomic) __weak id <WCPayTransferMoneyAntiCheatButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayTransferMoneyAntiCheatViewData *data; // @synthesize data=_data;
- (void)adjustView;
- (void)updateRighticon;
- (void)updateWordingLabel;
- (void)updateLefticon;
- (void)onContentButtonClick:(id)arg1;
- (void)updateContentButton;
- (void)allocContentButton;
- (void)updateAntiCheatView;
- (void)updateView;
- (id)initWithViewData:(id)arg1 delegate:(id)arg2;
- (void)setLayoutParams;
- (id)initWithNoticeF2FTransferMoney:(id)arg1 delegate:(id)arg2;
- (id)initWithNoticeUnionTransferMoney:(id)arg1 delegate:(id)arg2;
- (id)initWithNoticeTransferMoney:(id)arg1 delegate:(id)arg2;

@end

