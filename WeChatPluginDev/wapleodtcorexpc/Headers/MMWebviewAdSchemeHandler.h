//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMWebviewAdSchemeHandlerDelegate;

@interface MMWebviewAdSchemeHandler : NSObject
{
    id <MMWebviewAdSchemeHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMWebviewAdSchemeHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleGetAdTokenRequestWithURLComponents:(id)arg1 url:(id)arg2 task:(id)arg3;
@property(readonly, copy, nonatomic) NSString *customScheme;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

