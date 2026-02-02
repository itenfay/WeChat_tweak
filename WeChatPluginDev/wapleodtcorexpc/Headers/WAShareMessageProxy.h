//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSString, WAWebViewController;

@interface WAShareMessageProxy : NSObject
{
    _Bool _isSharing;
    ForwardMessageLogicController *_forwardLogicController;
    CDUnknownBlockType _completion;
    WAWebViewController *_webVC;
}

+ (void)shareScreenshotWithAssetId:(id)arg1 webVC:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak WAWebViewController *webVC; // @synthesize webVC=_webVC;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(nonatomic) _Bool isSharing; // @synthesize isSharing=_isSharing;
- (id)getCurrentViewController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)shareScreenshotWithAssetId:(id)arg1 webVC:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

