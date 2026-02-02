//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, UIImageView, UILabel, UIView, WCCardData;

@interface WCCardInvoiceCellView
{
    NSString *_backImageURL;
    NSString *_topText;
    NSString *_bottomText;
    NSString *_moneyText;
    NSString *_timeText;
    WCCardData *_cardData;
    UIImageView *_backDefaulImageView;
    UIImage *_defaulDefaulImage;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    UILabel *_moneyLabel;
    UILabel *_timeLabel;
    UIView *_lineView;
}

+ (double)CardItemViewTopHeight;
+ (double)itemViewHieght;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImage *defaulDefaulImage; // @synthesize defaulDefaulImage=_defaulDefaulImage;
@property(retain, nonatomic) UIImageView *backDefaulImageView; // @synthesize backDefaulImageView=_backDefaulImageView;
@property(retain, nonatomic) WCCardData *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(retain, nonatomic) NSString *moneyText; // @synthesize moneyText=_moneyText;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *topText; // @synthesize topText=_topText;
@property(retain, nonatomic) NSString *backImageURL; // @synthesize backImageURL=_backImageURL;
- (id)scaleToBottom:(id)arg1 scale:(double)arg2;
- (id)scaleToTop:(id)arg1 scale:(double)arg2;
- (id)getBrandColor;
- (void)confiUI;
- (void)layoutSubviews;
- (id)initWithCardData:(id)arg1;

@end

