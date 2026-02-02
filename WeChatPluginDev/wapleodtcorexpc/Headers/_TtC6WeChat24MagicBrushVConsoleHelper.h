//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView;

@interface _TtC6WeChat24MagicBrushVConsoleHelper : NSObject
{
    MISSING_TYPE *webview;
    MISSING_TYPE *button;
    MISSING_TYPE *visible;
    MISSING_TYPE *finishLoad;
    MISSING_TYPE *pendingLogs;
    MISSING_TYPE *enable;
    MISSING_TYPE *containerView;
}

- (void).cxx_destruct;
- (id)init;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)layout;
- (void)dealloc;
- (void)reset;
- (void)switchVConsole:(_Bool)arg1;
- (void)vConsoleLog:(id)arg1;
- (id)init:(id)arg1;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;

@end

