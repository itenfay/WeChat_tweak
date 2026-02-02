//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMConfSDKNativeCallbackMgr : NSObject
{
    struct WxConfSDKCallback *nCallback;
    NSMutableDictionary *_outerCallbacks;
    struct recursive_mutex recursive_mutex_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeWillListen:(int)arg1 callback:(id)arg2;
- (void)registerWillListen:(int)arg1 callback:(id)arg2;
- (id)callbackImp:(int)arg1 errCode:(int)arg2 data:(void *)arg3 dataLength:(int)arg4;
- (_Bool)getIfCallbackPointNil;
- (void)dealloc;
- (struct IWXConfCallback *)refreshCallback:(_Bool)arg1;
- (id)init;

@end

