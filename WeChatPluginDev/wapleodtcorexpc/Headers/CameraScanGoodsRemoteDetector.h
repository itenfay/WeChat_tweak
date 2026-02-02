//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSString;
@protocol CameraScanGoodsRemoteDetectorDelegate;

@interface CameraScanGoodsRemoteDetector
{
    id <CameraScanGoodsRemoteDetectorDelegate> _delegate;
    unsigned long long _sessionId;
    LocationRetriever *_locationRetriever;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <CameraScanGoodsRemoteDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSendImageInfoSuccessForAlbum:(id)arg1;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendImageInfoSuccess:(id)arg1;
- (_Bool)scanOnePicture:(id)arg1;
- (id)initWithDetectorWorkQueue:(id)arg1 sessionId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

