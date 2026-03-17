//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAJSContextPlugin_vConsole, YYBaseWebView;

@protocol IWAVConsoleWebVCHelper <NSObject>
@property(nonatomic) unsigned int htmlId;
@property(nonatomic) __weak WAJSContextPlugin_vConsole *plugin;
- (void)updateHTMLFrame;
- (void)configViewFrame:(struct CGRect)arg1;
- (YYBaseWebView *)webView;
@end

