//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWACameraScanViewControllerHelper, IWAWAGetA8KeyLogicHelper;

@interface WAJSEventHandler_scanCode
{
    id <IWACameraScanViewControllerHelper> _viewControllerHelper;
    id <IWAWAGetA8KeyLogicHelper> _getA8KeyHelper;
    NSString *_charSet;
    NSString *_type;
    NSString *_scanResult;
    NSString *_rawDataInBase64;
    long long _codeVersion;
    NSString *_pagePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) long long codeVersion; // @synthesize codeVersion=_codeVersion;
@property(retain, nonatomic) NSString *rawDataInBase64; // @synthesize rawDataInBase64=_rawDataInBase64;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(retain, nonatomic) id <IWAWAGetA8KeyLogicHelper> getA8KeyHelper; // @synthesize getA8KeyHelper=_getA8KeyHelper;
@property(retain, nonatomic) id <IWACameraScanViewControllerHelper> viewControllerHelper; // @synthesize viewControllerHelper=_viewControllerHelper;
- (void)onCameraScanViewControllerDidBePoped;
- (id)resultParamsWithDic:(id)arg1;
- (void)onWeappGetA8Key:(id)arg1;
- (void)onScanCodeResult:(id)arg1;
- (void)showScanCodeVC:(long long)arg1 params:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

