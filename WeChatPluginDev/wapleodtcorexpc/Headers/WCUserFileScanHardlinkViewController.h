//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UITextView;

@interface WCUserFileScanHardlinkViewController
{
    UITextView *_infoTextView;
    NSString *_infoString;
    UIButton *_scanWithCacheButton;
    UIButton *_scanNoCacheButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *scanNoCacheButton; // @synthesize scanNoCacheButton=_scanNoCacheButton;
@property(retain, nonatomic) UIButton *scanWithCacheButton; // @synthesize scanWithCacheButton=_scanWithCacheButton;
@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(retain, nonatomic) UITextView *infoTextView; // @synthesize infoTextView=_infoTextView;
- (void)onUserFileScanServiceEnd;
- (void)sendDataToFileHelper;
- (void)startHardlinkServiceNoCache;
- (void)startHardlinkService;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

