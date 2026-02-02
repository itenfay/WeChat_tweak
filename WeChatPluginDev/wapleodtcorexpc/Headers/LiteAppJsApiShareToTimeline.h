//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableData, NSString, NSURLConnection;

@interface LiteAppJsApiShareToTimeline
{
    NSURLConnection *_m_connection;
    NSMutableData *_m_recData;
    NSDictionary *_m_extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *m_extraData; // @synthesize m_extraData=_m_extraData;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) NSURLConnection *m_connection; // @synthesize m_connection=_m_connection;
- (void)dealloc;
- (void)shardTimeline:(id)arg1 imageData:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)showCanNotShareEmptyPage;
- (void)clearCurData;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

