//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSString, RichTextView, UIView, WCPayMainViewTipsPageSheetConfig;
@protocol WCPayMainViewTipsPageSheetDelegate;

@interface WCPayMainViewTipsPageSheet : NSObject
{
    id <WCPayMainViewTipsPageSheetDelegate> _delegate;
    WCPayMainViewTipsPageSheetConfig *_config;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    RichTextView *_richTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(retain, nonatomic) WCPayMainViewTipsPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCPayMainViewTipsPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)dismissPageSheet:(_Bool)arg1;
- (void)showPageSheet;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

