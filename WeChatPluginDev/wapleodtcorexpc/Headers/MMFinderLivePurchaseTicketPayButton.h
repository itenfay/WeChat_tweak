//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, NSString, UIColor;

@interface MMFinderLivePurchaseTicketPayButton
{
    NSString *_rightText;
    UIColor *_labelColor;
    MMUILabel *_leftLabel;
    MMUIImageView *_coinImageView;
    MMUILabel *_rightLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) MMUIImageView *coinImageView; // @synthesize coinImageView=_coinImageView;
@property(retain, nonatomic) MMUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
- (void)creatUI;
- (void)layoutUI;
- (void)updateRightText:(id)arg1 labelColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

