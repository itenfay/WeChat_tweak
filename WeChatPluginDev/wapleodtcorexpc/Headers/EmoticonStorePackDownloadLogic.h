//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonStoreItem, NSString, StoreEmotionExchangeEmotionPackCgi;
@protocol EmoticonStorePackDownloadLogicDelegate;

@interface EmoticonStorePackDownloadLogic : NSObject
{
    id <EmoticonStorePackDownloadLogicDelegate> _delegate;
    EmoticonStoreItem *_item;
    StoreEmotionExchangeEmotionPackCgi *_packCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionExchangeEmotionPackCgi *packCgi; // @synthesize packCgi=_packCgi;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <EmoticonStorePackDownloadLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (id)getReportStr:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithDesignerSetKey:(id)arg1 needUpdatePids:(id)arg2;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (_Bool)downloadAndInstallEmoticon;
- (_Bool)createExchangeCgiWithScence:(int)arg1 isAutomatic:(_Bool)arg2;
- (_Bool)cancelDownload;
- (_Bool)tryDownloadWithScence:(int)arg1 isAutomatic:(_Bool)arg2;
- (id)initWithStoreItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

