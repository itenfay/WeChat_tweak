//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, OrderedDictionary;
@protocol OS_dispatch_queue;

@interface MMAssetMessageUUIDMgr
{
    OrderedDictionary *_assetIDToMessageUUIDMap;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)getPathOfMessageUUIDCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) OrderedDictionary *assetIDToMessageUUIDMap; // @synthesize assetIDToMessageUUIDMap=_assetIDToMessageUUIDMap;
- (void)encodeAssetIDToMessageUUIDMap:(id)arg1 toFilePath:(id)arg2;
- (id)decodeOrCreateAssetIDToMessageUUIDMapFromFile:(id)arg1;
- (id)messageUUIDForAssetID:(id)arg1;
- (void)asyncSetMessageUUID:(id)arg1 forAssetID:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

