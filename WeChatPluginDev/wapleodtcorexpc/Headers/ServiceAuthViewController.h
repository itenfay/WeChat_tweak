//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, ServiceAuthConfig, ServiceAuthExtBlockWrapper;
@protocol ServiceAuthDelegate, ServiceAuthExt;

@interface ServiceAuthViewController
{
    NSMutableDictionary *m_dictToLink;
    id <ServiceAuthDelegate> _delegate;
    id <ServiceAuthExt> _notifyDelegate;
    ServiceAuthExtBlockWrapper *_notifyBlockWrapper;
    ServiceAuthConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ServiceAuthConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) ServiceAuthExtBlockWrapper *notifyBlockWrapper; // @synthesize notifyBlockWrapper=_notifyBlockWrapper;
@property(nonatomic) __weak id <ServiceAuthExt> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <ServiceAuthDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)numberOfLinesForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (void)viewDidLoad;
- (void)initDetailView;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

