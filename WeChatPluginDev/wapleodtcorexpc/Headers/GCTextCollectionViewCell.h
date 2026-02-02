//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, RichTextView, UILabel;

@interface GCTextCollectionViewCell
{
    NSMutableDictionary *_linkJumpInfoDict;
    RichTextView *_richTextView;
    UILabel *_sysTitleLabel;
}

+ (id)getRichTextViewConfig:(id)arg1;
+ (unsigned long long)parseTypeForContentModel:(id)arg1;
+ (struct CGSize)sizeForTextModel:(id)arg1 font:(id)arg2 outArrStyles:(id *)arg3;
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (id)centerTipTextLayoutWithMarginInsets:(struct UIEdgeInsets)arg1;
+ (id)textLayoutInfoForTextCellModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sysTitleLabel; // @synthesize sysTitleLabel=_sysTitleLabel;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) NSMutableDictionary *linkJumpInfoDict; // @synthesize linkJumpInfoDict=_linkJumpInfoDict;
- (_Bool)handleLongPressAt:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)linkBlockForUrl:(id)arg1;
- (void)initRichTextView;
- (void)configureWithCellModel:(id)arg1;
- (id)textCellModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

