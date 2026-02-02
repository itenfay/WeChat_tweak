//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WSWebViewPlugin_newlife
{
    NSMutableDictionary *_feedId2EncryptIdMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *feedId2EncryptIdMap; // @synthesize feedId2EncryptIdMap=_feedId2EncryptIdMap;
- (void)onGetFeedId:(id)arg1 forEncryptId:(id)arg2;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)updateEncryptId:(id)arg1 forFeedId:(id)arg2;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

