//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView;

@interface FavTextDetailViewController
{
    RichTextView *m_textLabel;
    NSString *m_nsText;
    NSString *m_copyedText;
    double m_cacheTextHeight;
    double m_cacheWidth;
}

- (void).cxx_destruct;
- (id)getFavForawrdViewController;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopy:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppMPShortLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (id)getCurrentViewController;
- (void)onAction:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)viewDidLayoutSubviews;
- (void)initTextLabel;
- (unsigned long long)getParserType;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

