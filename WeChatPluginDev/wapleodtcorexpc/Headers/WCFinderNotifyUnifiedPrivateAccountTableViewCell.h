//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCFinderCustomImageRichTextView;

@interface WCFinderNotifyUnifiedPrivateAccountTableViewCell
{
    WCFinderCustomImageRichTextView *_contentTextView;
    UIButton *_confirmButton;
}

+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak WCFinderCustomImageRichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void)onPrivateAccountFollowStateChanged;
- (void)updateConfirmButton;
- (void)confirmButtonDidClick:(id)arg1;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)prepareForReuse;
- (void)setUpViewLayout;
- (void)setUpUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

