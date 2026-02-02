//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLivePaymentInfo, UIImageView;
@protocol MMFinderLivePaymentRecordCellDelegate;

@interface MMFinderLivePaymentRecordCell
{
    _Bool _forceDarkMode;
    id <MMFinderLivePaymentRecordCellDelegate> _cellDelegate;
    MMCPLabel *_displayNameLabel;
    MMFinderLivePaymentInfo *_paymentInfo;
    UIImageView *_iconView;
    MMCPLabel *_paymentValueLabel;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) MMCPLabel *paymentValueLabel; // @synthesize paymentValueLabel=_paymentValueLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMFinderLivePaymentInfo *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(nonatomic) __weak id <MMFinderLivePaymentRecordCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithPaymentInfo:(id)arg1 forceDarkMode:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

