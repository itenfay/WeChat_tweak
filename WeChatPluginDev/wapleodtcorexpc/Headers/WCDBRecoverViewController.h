//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMTableViewInfo, NSArray, WCDBRouterInfo;

@interface WCDBRecoverViewController
{
    MMLoadingView *m_loadingView;
    _Bool m_isRecovering;
    NSArray *_infos;
    WCDBRouterInfo *_selected;
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)doAsyncRecover;
- (_Bool)shouldInteractivePop;
- (void)didRecover:(_Bool)arg1;
- (_Bool)doRecover;
- (void)updateProgress:(double)arg1;
- (void)askForConfirm;
- (void)selectCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)adjustTableViewRect;
- (void)popBack;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)markAsUnselected;
- (void)markAsSelected:(id)arg1;
- (void)onEnterBackground;
- (void)dealloc;
- (id)init;
- (_Bool)handleMessageCustomizeRecover;
- (void)doFixMessageTimeError;
- (void)selectFixMessageTimeErrorCell:(id)arg1;
- (void)addCustomizationMessageTimeErrorCellInSection:(id)arg1;
- (void)askForConfirmWithContent:(id)arg1 selector:(SEL)arg2;
- (void)doAsyncCustomizationRecoverWithHandler:(CDUnknownBlockType)arg1;
- (void)makeCustomizationCell:(id)arg1 cellInfo:(id)arg2;
- (void)addCustomizationCellInSection:(id)arg1;

@end

