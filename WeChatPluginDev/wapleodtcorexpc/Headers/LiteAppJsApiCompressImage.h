//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface LiteAppJsApiCompressImage
{
    NSMutableArray *_localIds;
    unsigned long long _totalCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSMutableArray *localIds; // @synthesize localIds=_localIds;
- (void)delayNotifyWeb:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

