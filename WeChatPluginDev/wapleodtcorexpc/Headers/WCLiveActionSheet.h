//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView;

@interface WCLiveActionSheet
{
    NSString *_richTitle;
    id _extraInfo;
    RichTextView *_richTitleLabel;
}

+ (long long)getActionSheetWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTitleLabel; // @synthesize richTitleLabel=_richTitleLabel;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *richTitle; // @synthesize richTitle=_richTitle;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onDismissCompletelyWithClickedButtonIndex:(long long)arg1;
- (void)showInView:(id)arg1;
- (id)getCustomHeadView;
- (id)cancelButtonTitleColor;
- (id)defaultButtonTitleColor;
- (id)buttonHighlightedBackgroundColor;
- (id)buttonBackgroundColor;
- (id)titleLabelTextColor;
- (id)seperateLineBackgroundColor;
- (id)sepBarBackgroundColor;
- (id)titleViewBackgroundColor;
- (id)containerViewBackgroundColor;
- (double)containerViewOriginXInIphone;
- (long long)actionSheetWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

