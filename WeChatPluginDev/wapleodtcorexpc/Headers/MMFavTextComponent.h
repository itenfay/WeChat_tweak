//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAttributeCPLabel, RichTextView;

@interface MMFavTextComponent
{
    RichTextView *m_titleLabel;
    FavAttributeCPLabel *m_titleSearchLabel;
    FavAttributeCPLabel *m_desLabel;
}

+ (double)getCurDesLineNum:(id)arg1;
+ (double)getCurTitleLineNum:(id)arg1;
+ (id)getCurDescFont:(id)arg1;
+ (id)getCurTitleFont:(id)arg1;
+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)configContentLayout;
- (void)changeWidth:(double)arg1;
- (void)configLabel;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (_Bool)isEmpty;

@end

