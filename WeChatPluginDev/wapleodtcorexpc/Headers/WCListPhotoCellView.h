//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface WCListPhotoCellView
{
    UIView *m_imageGridView;
}

+ (double)contentLabelWidthWithCellViewWidth:(double)arg1;
+ (id)defaultRichTextView;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
- (id)accessibilityLabelForDataItem:(id)arg1;
- (id)customAccessibilityComponents;
- (void)updateAccessibility;
- (void)onClickWCPuzzleImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)handleClickImageContentView:(id)arg1;
- (id)findActiveView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)safeChangeImageViewDelegate:(id)arg1;
- (void)initView;
- (void)initImageGridView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

