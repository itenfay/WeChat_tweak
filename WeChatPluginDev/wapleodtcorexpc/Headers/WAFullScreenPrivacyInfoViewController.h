//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;
@protocol IWARichTextViewHelper;

@interface WAFullScreenPrivacyInfoViewController
{
    NSString *_wording;
    UILabel *_titleLabel;
    id <IWARichTextViewHelper> _richTextHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWARichTextViewHelper> richTextHelper; // @synthesize richTextHelper=_richTextHelper;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (void)onReturn;
- (void)updateNavigationItems;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithWording:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

