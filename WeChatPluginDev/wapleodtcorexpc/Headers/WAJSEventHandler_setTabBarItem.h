//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface WAJSEventHandler_setTabBarItem
{
    _Bool _download;
    long long _iconIndex;
    NSString *_failMsg;
    NSString *_text;
    NSString *_iconPath;
    UIImage *_iconImage;
    NSString *_selectIconPath;
    UIImage *_selectIconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *selectIconImage; // @synthesize selectIconImage=_selectIconImage;
@property(retain, nonatomic) NSString *selectIconPath; // @synthesize selectIconPath=_selectIconPath;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *failMsg; // @synthesize failMsg=_failMsg;
@property(nonatomic) _Bool download; // @synthesize download=_download;
@property(nonatomic) long long iconIndex; // @synthesize iconIndex=_iconIndex;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setItem:(id)arg1 webview:(id)arg2;
- (void)stopDownloadImage:(id)arg1;
- (id)retreiveImage:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

