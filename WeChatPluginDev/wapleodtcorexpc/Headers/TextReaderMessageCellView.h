//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, RichTextView, TextReaderMessageViewModel, UIImageView, WAAppIdToUsernameTransfer;

@interface TextReaderMessageCellView
{
    UIImageView *m_bgImageView;
    RichTextView *m_mainTitleView;
    RichTextView *m_titleView;
    MMUIButton *m_detailButton;
    WAAppIdToUsernameTransfer *m_appIdTransfer;
    NSMutableArray *_voiceOverElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)updateVoiceOverElements;
- (void)initVoiceOverElements;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)initDetailButton;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TextReaderMessageViewModel *viewModel;

@end

