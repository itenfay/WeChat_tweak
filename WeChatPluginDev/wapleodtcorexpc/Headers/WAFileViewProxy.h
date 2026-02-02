//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSString, UIViewController;

@interface WAFileViewProxy : NSObject
{
    ForwardMessageLogicController *_forwardLogic;
    UIViewController *_fileViewController;
}

+ (id)generateFileLogicControllerWithPath:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *fileViewController; // @synthesize fileViewController=_fileViewController;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
- (id)getCurrentViewController;
- (void)setCurrentViewController:(id)arg1;
- (void)addToFavoritesWithPath:(id)arg1;
- (void)forwardMessageWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

