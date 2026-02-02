//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AAListRecord, MMHeadImageView, MMUILabel, UIView;

@interface WCPayGPOrderHistoryTableCell
{
    AAListRecord *_recordData;
    MMHeadImageView *_headImgView;
    MMUILabel *_tipsLabel;
    MMUILabel *_subLabel;
    MMUILabel *_launchDateLabel;
    MMUILabel *_moneyLabel;
    MMUILabel *_moneyUnitLabel;
    MMUILabel *_statusLabel;
    UIView *_sepLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) MMUILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) MMUILabel *moneyUnitLabel; // @synthesize moneyUnitLabel=_moneyUnitLabel;
@property(retain, nonatomic) MMUILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) MMUILabel *launchDateLabel; // @synthesize launchDateLabel=_launchDateLabel;
@property(retain, nonatomic) MMUILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) AAListRecord *recordData; // @synthesize recordData=_recordData;
- (void)updateContentWithRecordData:(id)arg1 recordScene:(unsigned long long)arg2;
- (void)setupContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

