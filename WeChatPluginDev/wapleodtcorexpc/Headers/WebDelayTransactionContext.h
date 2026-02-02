//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, MMWebViewKeepHolderMgr;

@interface WebDelayTransactionContext
{
    MMWebViewController *_webViewVC;
    MMWebViewKeepHolderMgr *_webKeeper;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMWebViewKeepHolderMgr *webKeeper; // @synthesize webKeeper=_webKeeper;
@property(retain, nonatomic) MMWebViewController *webViewVC; // @synthesize webViewVC=_webViewVC;

@end

