//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NewLifeSelectPhotoResp;

@interface NewLifeSelectPhotoHandler
{
    NewLifeSelectPhotoResp *_response;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeSelectPhotoResp *response; // @synthesize response=_response;
- (void)onFinishSelectAssets:(id)arg1 assets:(id)arg2;
- (void)onCancelSelectAssets:(id)arg1;
- (void)endHandle;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

