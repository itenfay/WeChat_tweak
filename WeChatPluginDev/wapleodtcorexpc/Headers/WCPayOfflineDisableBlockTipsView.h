//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPayOfflinePayDisableBlockLayer, WCPayOfflinePayDisableBlockLayerTextInfo;
@protocol WCPayOfflineDisableBlockTipsViewDelegate;

@interface WCPayOfflineDisableBlockTipsView
{
    id <WCPayOfflineDisableBlockTipsViewDelegate> _delegate;
    WCPayOfflinePayDisableBlockLayer *_viewData;
    WCPayOfflinePayDisableBlockLayerTextInfo *_curTextInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOfflinePayDisableBlockLayerTextInfo *curTextInfo; // @synthesize curTextInfo=_curTextInfo;
@property(retain, nonatomic) WCPayOfflinePayDisableBlockLayer *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) __weak id <WCPayOfflineDisableBlockTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)confirmBtnClick;
- (id)getCurLanguageBtnText;
- (id)getCurLanguageRemainderContent;
- (id)getCurLanguageMainWording;
- (void)genCurLanguageTextInfo;
- (void)setupContentView;
- (id)initTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;

@end

