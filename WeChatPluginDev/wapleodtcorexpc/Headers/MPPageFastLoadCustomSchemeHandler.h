//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPPageFastLoadWXPicDecoder, NSMutableSet, NSString, NSURLSession;
@protocol MPPageFastLoadCustomSchemeHandlerDelegate, OS_dispatch_queue;

@interface MPPageFastLoadCustomSchemeHandler : NSObject
{
    id <MPPageFastLoadCustomSchemeHandlerDelegate> _delegate;
    NSURLSession *_onlineRequestSession;
    NSMutableSet *_activeTaskSet;
    NSObject<OS_dispatch_queue> *_imageDecodeQueue;
    MPPageFastLoadWXPicDecoder *_wxPicDecoder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPPageFastLoadWXPicDecoder *wxPicDecoder; // @synthesize wxPicDecoder=_wxPicDecoder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageDecodeQueue; // @synthesize imageDecodeQueue=_imageDecodeQueue;
@property(retain, nonatomic) NSMutableSet *activeTaskSet; // @synthesize activeTaskSet=_activeTaskSet;
@property(retain, nonatomic) NSURLSession *onlineRequestSession; // @synthesize onlineRequestSession=_onlineRequestSession;
@property(nonatomic) __weak id <MPPageFastLoadCustomSchemeHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)response404ForTask:(id)arg1;
- (void)doOnlineRequest:(id)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (id)customScheme;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

