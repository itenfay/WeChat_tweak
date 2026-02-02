//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAWebViewController;
@protocol WAWebViewPluginContextProtocol;

@interface WAWebViewPluginBase : NSObject
{
    WAWebViewController *_webViewController;
    _Bool _isRecording;
    id <WAWebViewPluginContextProtocol> _context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) __weak id <WAWebViewPluginContextProtocol> context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak WAWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isNormalWeApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isGameApp;
- (void)setWebViewOwner:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

