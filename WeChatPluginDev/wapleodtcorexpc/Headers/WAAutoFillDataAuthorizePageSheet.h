//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, _WAAutoFillDataTextView;
@protocol WAAutoFillDataAuthorizePageSheetDelegate;

@interface WAAutoFillDataAuthorizePageSheet
{
    id <WAAutoFillDataAuthorizePageSheetDelegate> _afda_delegate;
    NSString *_contentString;
    UILabel *_titleLabel;
    _WAAutoFillDataTextView *_textView;
    UIButton *_rejectButton;
    UIButton *_acceptButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(retain, nonatomic) _WAAutoFillDataTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) __weak id <WAAutoFillDataAuthorizePageSheetDelegate> afda_delegate; // @synthesize afda_delegate=_afda_delegate;
- (void)onAcceptBtnClick:(id)arg1;
- (void)onRejectBtnClick:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)layoutSubViews;
- (double)calculateHeightForTextView;
- (void)addAllSubviews;
- (double)contentHeight;
- (id)initWithContentString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

