//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString, UIViewController;

@interface WALocalFileDetailLogicController
{
    _Bool b_forbidOperation;
    _Bool b_enableJS;
    ForwardMessageLogicController *_forwardLogic;
    UIViewController *_fileViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *fileViewController; // @synthesize fileViewController=_fileViewController;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
- (id)getCurrentViewController;
- (void)openFileInNavVC:(id)arg1;
- (void)setEnableJS:(_Bool)arg1;
- (void)setForbidOperation:(_Bool)arg1;
- (void)customizeActionSheetInFirstRow:(id)arg1 secondRow:(id)arg2;
- (id)GetMsg;
- (id)generateFavoriteItem;
- (void)onForwardToContact:(id)arg1;
- (_Bool)canAddToFavorites;
- (_Bool)isMinimizeEnable;
- (_Bool)forbidOperation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

