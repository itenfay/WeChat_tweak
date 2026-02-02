//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCRedEnvelopesConfirmShowResourcesCgi, WCRedEnvelopesControlData, WCRedEnvelopesDeleteResourceCgi, WCRedEnvelopesExpiredSkinViewController, WCRedEnvelopesGetShowResourcesCgi, WCRedEnvelopesSelectSkinViewController;

@interface WebviewJSEventHandler_getRedPacketDone
{
    _Bool _bIsFromLoadingMoreInvalidData;
    WCRedEnvelopesGetShowResourcesCgi *_getShowResourcesCgi;
    WCRedEnvelopesSelectSkinViewController *_selectSkinViewController;
    WCRedEnvelopesExpiredSkinViewController *_expiredSkinViewController;
    WCRedEnvelopesControlData *_m_data;
    JSEvent *_m_event;
    WCRedEnvelopesConfirmShowResourcesCgi *_confirmShowResourcesCgi;
    NSString *_selectedPacketId;
    WCRedEnvelopesDeleteResourceCgi *_deleteShowResourceCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsFromLoadingMoreInvalidData; // @synthesize bIsFromLoadingMoreInvalidData=_bIsFromLoadingMoreInvalidData;
@property(retain, nonatomic) WCRedEnvelopesDeleteResourceCgi *deleteShowResourceCgi; // @synthesize deleteShowResourceCgi=_deleteShowResourceCgi;
@property(retain, nonatomic) NSString *selectedPacketId; // @synthesize selectedPacketId=_selectedPacketId;
@property(retain, nonatomic) WCRedEnvelopesConfirmShowResourcesCgi *confirmShowResourcesCgi; // @synthesize confirmShowResourcesCgi=_confirmShowResourcesCgi;
@property(retain, nonatomic) JSEvent *m_event; // @synthesize m_event=_m_event;
@property(retain, nonatomic) WCRedEnvelopesControlData *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) WCRedEnvelopesExpiredSkinViewController *expiredSkinViewController; // @synthesize expiredSkinViewController=_expiredSkinViewController;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinViewController *selectSkinViewController; // @synthesize selectSkinViewController=_selectSkinViewController;
@property(retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi; // @synthesize getShowResourcesCgi=_getShowResourcesCgi;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerDelete:(id)arg1;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerBack;
- (void)OnWCRedEnvelopesExpireSkinGetNextPage:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)onWCRedEnvelopesDeleteResourceCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (_Bool)isHbEnvelopSourceValid:(id)arg1;
- (void)onWCRedEnvelopesDeleteResourceCgiResponseOK:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)appendShowSourceResp:(id)arg1;
- (void)pushWCRedEnvelopesExpiredSkinViewController;
- (void)handleSourceListTypeInvalidResponse:(id)arg1;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startGetDefualtRedPacketSkinCgi;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

