//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTTextItemCellViewModel
{
    _Bool _isFullText;
    _Bool _digestShowTailFold;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(readonly, nonatomic) _Bool digestShowTailFold; // @synthesize digestShowTailFold=_digestShowTailFold;
@property(nonatomic) _Bool isFullText; // @synthesize isFullText=_isFullText;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)titleMaxWidth;
- (id)coverImgURL;
- (id)titleLabelStyles;
@property(readonly, nonatomic) unsigned long long parserTypes;
@property(readonly, nonatomic) _Bool canFullText;
- (unsigned long long)titleLineNumber;
- (struct CGSize)titleSize;
- (double)titleLineSpace;
- (id)titleFont;
@property(readonly, nonatomic) double currTitleAreaHeight;
- (double)textAreaMarginBottom;
- (double)viewHeight;
- (void)switchFullText;
- (id)itemViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

