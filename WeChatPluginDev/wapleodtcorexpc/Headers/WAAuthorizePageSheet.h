//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, WAAuthPageSheetViewModel, WAAuthorizeResultInfo, WAAuthorizeSheetInfo, ZZFLEXAngel;
@protocol WAAuthorizePageSheetDelegate;

@interface WAAuthorizePageSheet
{
    id <WAAuthorizePageSheetDelegate> _authDelegate;
    WAAuthorizeSheetInfo *_info;
    WAAuthorizeResultInfo *_resultInfo;
    CDUnknownBlockType _acceptAction;
    CDUnknownBlockType _rejectAction;
    CDUnknownBlockType _showPrivacyInfoAction;
    UICollectionView *_collectionView;
    ZZFLEXAngel *_angel;
    WAAuthPageSheetViewModel *_psViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthPageSheetViewModel *psViewModel; // @synthesize psViewModel=_psViewModel;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType showPrivacyInfoAction; // @synthesize showPrivacyInfoAction=_showPrivacyInfoAction;
@property(copy, nonatomic) CDUnknownBlockType rejectAction; // @synthesize rejectAction=_rejectAction;
@property(copy, nonatomic) CDUnknownBlockType acceptAction; // @synthesize acceptAction=_acceptAction;
@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) WAAuthorizeSheetInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <WAAuthorizePageSheetDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void)pushVC:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (void)onInfoButtonClick;
- (void)pageSheetWillAppear:(id)arg1;
- (id)subViewModel;
- (id)customSubviewClassList;
- (id)subviewClassList;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubViews;
- (void)reloadData;
- (void)setupUI;
- (double)contentHeight;
- (id)init;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

