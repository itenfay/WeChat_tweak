//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface TingInsertedContentPlugin : NSObject
{
    UIViewController *_currentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)closeProfileDialogWithError:(id *)arg1;
- (void)showBizProfileDialogUserName:(id)arg1 percentHeight:(double)arg2 listenItemData:(id)arg3 scene:(long long)arg4 sceneNote:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showBizProfileDialogUserName:(id)arg1 percentHeight:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showFinderProfileDialogUserName:(id)arg1 percentHeight:(double)arg2 listenItemData:(id)arg3 tabType:(long long)arg4 requestScene:(long long)arg5 extraInfo:(id)arg6 followScene:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

