//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIFont;

@interface TextReaderMessageViewModel
{
    struct CGSize _mainTitleSize;
    NSMutableArray *_mainTitleStyles;
    long long _mainTitleLineCount;
    struct CGSize _partTitleSize;
    NSMutableArray *_partTitleStyles;
    _Bool _isPartTitleTruncated;
    long long _partTitleLineCount;
    double _viewHeight;
    double m_textViewMaxheight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)bottomStr;
- (unsigned int)maxContentLineNum;
- (long long)lineCount;
@property(readonly, nonatomic) NSMutableArray *mainTitleStyles;
@property(readonly, nonatomic) NSString *mainTitleText;
- (_Bool)hasMainTitle;
- (id)titleStyles;
- (double)titleMaxWidth;
- (void)calTitleSizeAndTitleStyles;
@property(readonly, nonatomic) double textLineSpacing;
@property(readonly, nonatomic) UIFont *mainTitleFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) _Bool isLongText;
- (struct CGSize)titleSize;
- (struct CGSize)mainTitleSize;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

