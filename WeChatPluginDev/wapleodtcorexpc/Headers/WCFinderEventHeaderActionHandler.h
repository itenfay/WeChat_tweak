//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderEventHeaderActionHandler : NSObject
{
    int _commentScene;
    int _refCommentScene;
    UIViewController<WCFinderFeedBaseViewControllerProtocol> *_presentingVC;
}

+ (id)handlerWithPresentingVC:(id)arg1 commentScene:(int)arg2 refCommentScene:(int)arg3;
- (void).cxx_destruct;
@property(nonatomic) int refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak UIViewController<WCFinderFeedBaseViewControllerProtocol> *presentingVC; // @synthesize presentingVC=_presentingVC;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)arg1;
- (void)onEventHeaderClickDescriptionContactAction:(id)arg1;
- (void)showDescriptionViewSheet:(id)arg1;
- (void)showDescriptionJumpInfoSheet:(id)arg1;
- (void)onEventHeaderClickDescriptionDetailAction:(id)arg1;
- (void)onEventHeaderClickAuthorInfoAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

