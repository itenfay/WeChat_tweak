//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIFont;

@interface BrandProfileItemTextViewModel
{
    struct CGSize _mainTitleSize;
    NSMutableArray *_mainTitleStyles;
    long long _mainTitleLineCount;
    struct CGSize _partTitleSize;
    NSMutableArray *_partTitleStyles;
    _Bool _isPartTitleTruncated;
    long long _partTitleLineCount;
    NSMutableArray *_textLabelStyles;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *textLabelStyles; // @synthesize textLabelStyles=_textLabelStyles;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(readonly, nonatomic) NSString *bottomStr;
@property(readonly, nonatomic) _Bool isLongText;
- (long long)lineCount;
- (void)calTitleSizeAndTitleStyles;
- (_Bool)hasMainTitle;
- (struct CGSize)mainTitleSize;
@property(readonly, nonatomic) UIFont *mainTitleFont;
@property(readonly, nonatomic) NSMutableArray *mainTitleStyles;
- (double)textMaxWidth;
@property(readonly, nonatomic) NSString *mainTitleText;
- (id)text;
- (_Bool)isShowLargeCover;
- (void)clearLayoutCache;
- (double)calCellHeight;
- (id)tableViewCellClassName;

@end

