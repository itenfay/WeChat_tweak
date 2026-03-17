//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSMutableDictionary;

@interface WAJSContextPlugin_SyncWaiter : NSObject
{
    NSMutableDictionary *_syncMap;
}

@property(retain) NSMutableDictionary *syncMap; // @synthesize syncMap=_syncMap;
- (void)waitFromAsync:(id)arg1 timeout:(long long)arg2 returnBlock:(CDUnknownBlockType)arg3;
- (void)releaseSyncTag:(id)arg1 extData:(id)arg2;
- (void)markSyncTag:(id)arg1;
- (id)init;

@end
