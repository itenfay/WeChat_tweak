//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LocalJSLogicBase, MMUIViewController, WSWebViewPluginScheduler;
@protocol WSWebCommunicator;

@protocol WSWebViewPluginableProtocol <NSObject>
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
- (MMUIViewController *)getCurViewController;
- (LocalJSLogicBase *)getLocalJSLogic;

@optional
- (long long)k1kCategoryId;
- (double)delayShowTimeForWebviewDidFinishLoad;
- (id <WSWebCommunicator>)communicator;
- (unsigned long long)localJSBizType;
@end

