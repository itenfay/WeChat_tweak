//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, RichTextView, UIImageView, UISwitch, UIView;

@interface MMFinderLiveMoreFunctionSwitchCell
{
    _Bool _showSepLine;
    UIView *_functionContentView;
    MMUILabel *_tipLabel;
    MMUILabel *_titleLabel;
    RichTextView *_detailLabel;
    MMUILabel *_moneyLabel;
    UISwitch *_functionSwitch;
    UIImageView *_arrowImgView;
    UIView *_sepelateLine;
    UIView *_redDotView;
    MMWebImageView *_rightImageView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UISwitch *functionSwitch; // @synthesize functionSwitch=_functionSwitch;
@property(retain, nonatomic) MMUILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) RichTextView *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *functionContentView; // @synthesize functionContentView=_functionContentView;
@property(nonatomic) _Bool showSepLine; // @synthesize showSepLine=_showSepLine;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)cleanLayer;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (_Bool)canShowSepelateLine;
- (void)switchDidChanged:(id)arg1;
- (void)updateDetailLabelfWidth:(double)arg1;
- (void)layoutRedDotIfNeeded;
- (void)layoutWithUnknownType;
- (void)layoutWithDetailType;
- (void)layoutWithDefaultType;
- (void)layoutWithImageType;
- (void)layoutWithCommentType;
- (void)layoutWithAmountReminderType;
- (void)layoutWithDetailReminderType;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateCellWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

