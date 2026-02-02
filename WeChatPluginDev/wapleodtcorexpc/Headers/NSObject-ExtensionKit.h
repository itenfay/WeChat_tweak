//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (ExtensionKit)
+ (void)doExtensionKitHook;
+ (void)mm_webContentProcessWithBundleID:(id)arg1 interruptionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mm_BE_makeLibXPCConnectionError:(id *)arg1;
- (id)mm_makeLibXPCConnectionError:(id *)arg1;
- (void)mm_contentProcessWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)XPCAttachment;
- (void)setXPCAttachment:(id)arg1;
@end

