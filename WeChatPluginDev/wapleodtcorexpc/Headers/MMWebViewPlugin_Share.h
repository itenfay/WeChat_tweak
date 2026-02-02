//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollActionSheet, NSMutableDictionary, NSString;

@interface MMWebViewPlugin_Share
{
    NSMutableDictionary *_dictShareDataForSendAppMessage;
    NSMutableDictionary *_dictShareDataForShareTimeline;
    MMScrollActionSheet *_pluginShareActionSheet;
}

+ (_Bool)needForceToPortraitWithShareType:(id)arg1;
+ (id)shareDataFromShareDataParams:(id)arg1;
+ (id)shareDataParamsFromShareData:(id)arg1;
+ (_Bool)canShareAppMessageWithUpdateShareData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollActionSheet *pluginShareActionSheet; // @synthesize pluginShareActionSheet=_pluginShareActionSheet;
@property(retain, nonatomic) NSMutableDictionary *dictShareDataForShareTimeline; // @synthesize dictShareDataForShareTimeline=_dictShareDataForShareTimeline;
@property(retain, nonatomic) NSMutableDictionary *dictShareDataForSendAppMessage; // @synthesize dictShareDataForSendAppMessage=_dictShareDataForSendAppMessage;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)reportGameCenterData:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 andCustomOpButtonData:(id)arg4 errorMsg:(id *)arg5;
- (_Bool)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 errorMsg:(id *)arg4;
- (id)timelineShareDataParamsFromCurrentUrl:(id)arg1;
- (id)appMessageShareDataParamsFromCurrentUrl:(id)arg1;
- (id)getWebViewControllerShareData:(id)arg1;
- (void)doUpdateShareData:(id)arg1 forCurrentUrl:(id)arg2 inDictionary:(id)arg3;
- (void)updateTimelineShareData:(id)arg1 forCurrentUrl:(id)arg2;
- (void)updateSendAppMessageShareData:(id)arg1 forCurrentUrl:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

