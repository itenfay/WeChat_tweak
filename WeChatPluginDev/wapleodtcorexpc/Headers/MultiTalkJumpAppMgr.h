//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiTalkJumpAppWordingInfo, NSString;

@interface MultiTalkJumpAppMgr
{
    int _type;
    NSString *_schemePrefix;
    NSString *_h5UrlPrefix;
    NSString *_iconUrlString;
    MultiTalkJumpAppWordingInfo *_zhCNWordingInfo;
    MultiTalkJumpAppWordingInfo *_zhHKWordingInfo;
    MultiTalkJumpAppWordingInfo *_enWordingInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *enWordingInfo; // @synthesize enWordingInfo=_enWordingInfo;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *zhHKWordingInfo; // @synthesize zhHKWordingInfo=_zhHKWordingInfo;
@property(retain, nonatomic) MultiTalkJumpAppWordingInfo *zhCNWordingInfo; // @synthesize zhCNWordingInfo=_zhCNWordingInfo;
@property(retain, nonatomic) NSString *iconUrlString; // @synthesize iconUrlString=_iconUrlString;
@property(retain, nonatomic) NSString *h5UrlPrefix; // @synthesize h5UrlPrefix=_h5UrlPrefix;
@property(retain, nonatomic) NSString *schemePrefix; // @synthesize schemePrefix=_schemePrefix;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)onExptItemListChange;
- (void)reportJumpAppWithType:(int)arg1 andPositionType:(int)arg2;
- (void)reportOpenHtmlWithType:(int)arg1 htmlUrlString:(id)arg2 andPositionType:(int)arg3;
- (void)reportConfirmJumpDialogWithType:(int)arg1;
- (void)reportCancelJumpDialogWithType:(int)arg1;
- (void)reportShowJumpDialogWithType:(int)arg1;
- (void)reportBannerViewClickedWithType:(int)arg1;
- (void)reportBannerViewExposureWithType:(int)arg1;
- (void)openHtmlUrl:(id)arg1 inViewController:(id)arg2;
- (void)jumpToAppWithSchemeUrlString:(id)arg1 andHtmlUrlString:(id)arg2 inViewController:(id)arg3 type:(int)arg4 positionType:(int)arg5;
- (void)jumpToAppFromBannerWithInfo:(id)arg1 inViewController:(id)arg2;
- (void)showJumpAppTipsWithInfo:(id)arg1 inViewController:(id)arg2;
- (id)getCurrentAppInfo;
- (id)currentWordingInfoFromExpt;
- (id)currentDefaultIconName;
- (id)htmlUrlStringWithPositionType:(int)arg1;
- (id)schemeUrlStringWithPositionType:(int)arg1;
- (id)getWordingInfo;
- (void)updateWordingInfoFromJsonString:(id)arg1;
- (void)checkAndUpdateData;
- (void)clearData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

