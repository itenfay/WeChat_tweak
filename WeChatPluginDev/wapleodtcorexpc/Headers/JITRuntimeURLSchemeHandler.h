//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WKURLSchemeHandler;

@interface JITRuntimeURLSchemeHandler : NSObject
{
    id <WKURLSchemeHandler> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WKURLSchemeHandler> delegate; // @synthesize delegate=_delegate;
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

