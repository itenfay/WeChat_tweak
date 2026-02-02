//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, MMPageSheetAdapter, NSString, UIView, WCPayGPLaunchChatroomProfilePageSheet;
@protocol WCPayGPLaunchConfirmPageSheetDelegate;

@interface WCPayGPLaunchConfirmPageSheet : NSObject
{
    _Bool _bIsShowing;
    id <WCPayGPLaunchConfirmPageSheetDelegate> _delegate;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    CContact *_contact;
    NSString *_theme;
    NSString *_displayNameContent;
    WCPayGPLaunchChatroomProfilePageSheet *_profilePageSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayGPLaunchChatroomProfilePageSheet *profilePageSheet; // @synthesize profilePageSheet=_profilePageSheet;
@property(retain, nonatomic) NSString *displayNameContent; // @synthesize displayNameContent=_displayNameContent;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool bIsShowing; // @synthesize bIsShowing=_bIsShowing;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) __weak id <WCPayGPLaunchConfirmPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (_Bool)isPageSheetShowing;
- (void)onChatroomProfilePageSheetDidClose;
- (void)viewChatroomProfile;
- (void)dismissPageSheet:(_Bool)arg1;
- (void)showPageSheet;
- (double)setupThemeContentWithContentHeight:(double)arg1;
- (double)setupContactCellContent;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithDelagte:(id)arg1 contact:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

