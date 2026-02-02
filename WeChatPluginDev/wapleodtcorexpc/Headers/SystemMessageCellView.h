//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, SystemMessageViewModel, UIImageView;

@interface SystemMessageCellView
{
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
    _Bool hasReportTransferAlertTips;
}

- (void).cxx_destruct;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityActivate;
- (_Bool)isAccessibilityElement;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getRichTextView;
- (_Bool)canCellShowOperationMenu;
- (void)layoutContentView;
- (void)updateStatus;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SystemMessageViewModel *viewModel; // @dynamic viewModel;

@end

