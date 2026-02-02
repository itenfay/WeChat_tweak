//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol VoIPConfSDKNativeCallbackMgrDelegate;

@interface VoIPConfSDKNativeCallbackMgr : NSObject
{
    struct WxNewConfSDKCallback *nCallback;
    NSMutableDictionary *_outerCallbacks;
    struct recursive_mutex recursive_mutex_;
    id <VoIPConfSDKNativeCallbackMgrDelegate> _callbackDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <VoIPConfSDKNativeCallbackMgrDelegate> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (id)callbackImp:(int)arg1 errCode:(int)arg2 data:(void *)arg3 dataLength:(int)arg4;
- (struct IWXConfCallback *)refreshCallback:(_Bool)arg1;
- (void)dealloc;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (id)init;

@end

