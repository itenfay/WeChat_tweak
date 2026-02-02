//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAThreadSafeMutableDictionary;

@interface WAMPLinkTransferer
{
    WAThreadSafeMutableDictionary *_transferCaches;
}

+ (_Bool)isVCNeedCheckJumpOut:(id)arg1;
+ (void)transferNodeFromMPLinkString:(id)arg1 businessType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)transferNodeFromMPLinkString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isMPLinkStringValid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *transferCaches; // @synthesize transferCaches=_transferCaches;
- (id)getNodeFromCache:(id)arg1;
- (void)saveCachesWithMPShortLinkString:(id)arg1 transferredNode:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

