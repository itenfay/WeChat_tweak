//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, MMUILabel, NSString, PopUpWithHalfDialog, RichTextView, UIView, WCPayWebImageView;
@protocol WCPayLQTPageSheetDelegate;

@interface WCPayLQTPageSheet : NSObject
{
    int _clickBtnType;
    id <WCPayLQTPageSheetDelegate> _delegate;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    WCPayWebImageView *_mainIconImgView;
    MMUILabel *_largeContentLabel;
    MMUILabel *_contentLabel;
    RichTextView *_textView;
    PopUpWithHalfDialog *_pageData;
    NSString *_mainContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mainContent; // @synthesize mainContent=_mainContent;
@property(retain, nonatomic) PopUpWithHalfDialog *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *largeContentLabel; // @synthesize largeContentLabel=_largeContentLabel;
@property(retain, nonatomic) WCPayWebImageView *mainIconImgView; // @synthesize mainIconImgView=_mainIconImgView;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) __weak id <WCPayLQTPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int clickBtnType; // @synthesize clickBtnType=_clickBtnType;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)getPageViewId;
- (id)getAdapter;
- (void)popPageSheet;
- (void)pushPageSheet:(id)arg1;
- (void)dismissPageSheet;
- (void)showPageSheet;
- (void)setupDetailView;
- (_Bool)shouldSetupDetailViewContent;
- (void)setupAdapter;
- (void)updateDetailViewWithPopUpDialogData:(id)arg1 popUpMainContent:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

