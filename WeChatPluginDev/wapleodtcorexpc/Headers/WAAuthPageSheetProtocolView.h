//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton;
@protocol IWARichTextViewHelper;

@interface WAAuthPageSheetProtocolView
{
    UIButton *_checkButton;
    id <IWARichTextViewHelper> _richTextHelper;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IWARichTextViewHelper> richTextHelper; // @synthesize richTextHelper=_richTextHelper;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)showNeedAcceptProtocolAnimation;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

