//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderJumpInfoAsyncLoadManager
{
    NSMutableDictionary *_records;
}

- (void).cxx_destruct;
- (void)resetRecordForTid:(id)arg1;
- (id)getOrCreateRecordForTid:(id)arg1;
- (id)recordForTid:(id)arg1;
- (void)notifyDidFetchJumpInfoStylesWithRecord:(id)arg1 updated:(_Bool)arg2;
- (id)stylesIdentifierForStyles:(id)arg1;
- (void)fetchJumpInfoStylesWithDataItem:(id)arg1 jumpInfo:(id)arg2 asyncLoadInfoScene:(int)arg3 commentScene:(int)arg4 config:(id)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

