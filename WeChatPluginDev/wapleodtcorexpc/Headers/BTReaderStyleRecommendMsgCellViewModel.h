//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIColor, UIFont;

@interface BTReaderStyleRecommendMsgCellViewModel
{
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
    struct CGSize _titleSize;
    struct CGSize _digestSize;
}

+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
- (double)separateLineWidth;
- (double)normalCoverBottomMargin;
- (double)normalCoverTopMargin;
- (unsigned long long)positionType;
- (struct CGSize)coverImageViewSize;
- (id)recReasonColor;
- (id)recReasonStr;
- (_Bool)shouldShowRecReasonInDigestLabel;
@property(readonly, nonatomic) _Bool isShowRecReasonLabel;
- (unsigned long long)digestLineNumber;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles; // @synthesize digestLabelStyles=_digestLabelStyles;
- (double)digestMaxWidth;
- (id)digestFont;
@property(readonly, nonatomic) struct CGSize digestSize; // @synthesize digestSize=_digestSize;
- (id)digest;
- (void)clearTitleLabelCache;
- (_Bool)isTitleSingleLine;
@property(readonly, nonatomic) unsigned long long titleLineNumber;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles; // @synthesize titleLabelStyles=_titleLabelStyles;
@property(readonly, nonatomic) double titleMaxWidth;
@property(readonly, nonatomic) UIColor *titleLabelColor;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
- (_Bool)isShowLargeCover;
- (double)viewHeight;
- (id)itemViewClassName;
- (void)clearCacheOnDataChanged;

@end

