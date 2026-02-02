//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPayOfflinePayEnablePageData;
@protocol WCPayOfflineEnablePageTipsViewDelegate;

@interface WCPayOfflineEnablePageTipsView
{
    id <WCPayOfflineEnablePageTipsViewDelegate> _delegate;
    WCPayOfflinePayEnablePageData *_viewData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOfflinePayEnablePageData *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) __weak id <WCPayOfflineEnablePageTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)verifyBtnClick;
- (void)setupContentView;
- (id)initTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;

@end

