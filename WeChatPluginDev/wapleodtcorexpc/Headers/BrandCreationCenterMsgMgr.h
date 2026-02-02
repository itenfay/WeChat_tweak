//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSString;

@interface BrandCreationCenterMsgMgr
{
    MMLRUCache *_notifyUUIDCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *notifyUUIDCache; // @synthesize notifyUUIDCache=_notifyUUIDCache;
- (void)syncWithActionNotifyData:(id)arg1 uuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

