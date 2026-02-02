//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, MMLocatingCoordinateLogic, NSString, WAAppAuthorizationDetailViewModel;
@protocol WAAppAuthorizationDetailViewControllerDelegate;

@interface WAAppAuthorizationLocationDetailViewController
{
    id <WAAppAuthorizationDetailViewControllerDelegate> _delegate;
    WAAppAuthorizationDetailViewModel *_viewModel;
    unsigned long long _authType;
    unsigned long long _userChooseState;
    LocationRetriever *_locationRetriever;
    MMLocatingCoordinateLogic *_locatingLogic;
    NSString *_locationAddressText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *locationAddressText; // @synthesize locationAddressText=_locationAddressText;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(nonatomic) unsigned long long userChooseState; // @synthesize userChooseState=_userChooseState;
@property(nonatomic) unsigned long long authType; // @synthesize authType=_authType;
@property(retain, nonatomic) WAAppAuthorizationDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WAAppAuthorizationDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestAddressByLocation:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)requestLocationAddress;
- (_Bool)shouldShowLocationAddress;
- (void)reloadListUI;
- (void)fillWithViewModel:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAuthType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

