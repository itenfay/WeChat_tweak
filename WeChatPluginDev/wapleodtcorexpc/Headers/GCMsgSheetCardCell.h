//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSMutableArray, UILabel;

@interface GCMsgSheetCardCell
{
    MMWebImageView *_cardBgView;
    MMWebImageView *_rightImgView;
    UILabel *_headLabel;
    NSMutableArray *_labelViewArray;
}

+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *labelViewArray; // @synthesize labelViewArray=_labelViewArray;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) MMWebImageView *rightImgView; // @synthesize rightImgView=_rightImgView;
@property(retain, nonatomic) MMWebImageView *cardBgView; // @synthesize cardBgView=_cardBgView;
- (id)bindMsgSheetCardCellModel;
- (void)configureWithCellModel:(id)arg1;
- (void)layoutSubviews;
- (_Bool)shouldBubbleViewClipsToBounds;
- (id)initWithFrame:(struct CGRect)arg1;

@end

