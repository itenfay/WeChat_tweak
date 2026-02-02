//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileItemTextViewModel, MMUIButton, MMURLHandler, NSString, RichTextView, WAAppIdToUsernameTransfer;

@interface BrandProfileItemTextCell
{
    RichTextView *_textView;
    MMUIButton *_bottomButton;
    WAAppIdToUsernameTransfer *_appIdTransfer;
    MMURLHandler *_urlHandler;
    RichTextView *_mainTitleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *mainTitleView; // @synthesize mainTitleView=_mainTitleView;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
@property(retain, nonatomic) WAAppIdToUsernameTransfer *appIdTransfer; // @synthesize appIdTransfer=_appIdTransfer;
@property(retain, nonatomic) MMUIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
- (id)accessibilityLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) BrandProfileItemTextViewModel *viewModel; // @dynamic viewModel;

@end

