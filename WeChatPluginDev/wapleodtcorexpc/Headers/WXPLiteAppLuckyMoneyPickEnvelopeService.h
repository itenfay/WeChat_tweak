//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HbEnvelopSource, MMUIViewController, NSString, WCRedEnvelopesConfirmShowResourcesCgi, WCRedEnvelopesDeleteResourceCgi, WCRedEnvelopesGetShowResourcesCgi, WCRedEnvelopesSelectSkinViewController;

@interface WXPLiteAppLuckyMoneyPickEnvelopeService : NSObject
{
    CDUnknownBlockType _luckyMoneyPickEnvelopeCallback;
    WCRedEnvelopesGetShowResourcesCgi *_getShowResourcesCgi;
    WCRedEnvelopesSelectSkinViewController *_selectSkinViewController;
    WCRedEnvelopesConfirmShowResourcesCgi *_confirmShowResourcesCgi;
    NSString *_sessionId;
    WCRedEnvelopesDeleteResourceCgi *_deleteShowResourceCgi;
    HbEnvelopSource *_currHbEnvelopSource;
    MMUIViewController *_currVc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *currVc; // @synthesize currVc=_currVc;
@property(retain, nonatomic) HbEnvelopSource *currHbEnvelopSource; // @synthesize currHbEnvelopSource=_currHbEnvelopSource;
@property(retain, nonatomic) WCRedEnvelopesDeleteResourceCgi *deleteShowResourceCgi; // @synthesize deleteShowResourceCgi=_deleteShowResourceCgi;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WCRedEnvelopesConfirmShowResourcesCgi *confirmShowResourcesCgi; // @synthesize confirmShowResourcesCgi=_confirmShowResourcesCgi;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinViewController *selectSkinViewController; // @synthesize selectSkinViewController=_selectSkinViewController;
@property(retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi; // @synthesize getShowResourcesCgi=_getShowResourcesCgi;
@property(copy, nonatomic) CDUnknownBlockType luckyMoneyPickEnvelopeCallback; // @synthesize luckyMoneyPickEnvelopeCallback=_luckyMoneyPickEnvelopeCallback;
- (id)dictionaryFromObject:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerNeedRefresh;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesSelectSkinViewControllerCheckAndUseDone;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)pickEnvelope:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

