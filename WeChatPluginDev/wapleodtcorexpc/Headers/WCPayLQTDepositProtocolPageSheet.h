//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSString, UIView;
@protocol WCPayLQTDepositProtocolPageSheetDelegate;

@interface WCPayLQTDepositProtocolPageSheet : NSObject
{
    id <WCPayLQTDepositProtocolPageSheetDelegate> _delegate;
    NSString *_protocolContent;
    NSString *_protocolUrl;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(retain, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(retain, nonatomic) NSString *protocolContent; // @synthesize protocolContent=_protocolContent;
@property(nonatomic) __weak id <WCPayLQTDepositProtocolPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)dismissPageSheet:(_Bool)arg1;
- (void)showPageSheet;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithDelegate:(id)arg1 protocolContent:(id)arg2 protocolUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

