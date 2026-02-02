//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingPlayerManager;

@interface TingFlutterBaseRouter : NSObject
{
    TingPlayerManager *_playTaskController;
}

+ (id)plugins;
+ (id)defaultRouterParams;
- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerManager *playTaskController; // @synthesize playTaskController=_playTaskController;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (id)pushNewPageWithRoute:(id)arg1 arguments:(id)arg2 completioin:(CDUnknownBlockType)arg3;
- (void)openNewPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isDisassembled;
- (void)initPlayTaskController;
- (id)createViewController:(id)arg1 arguments:(id)arg2;
- (id)createViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

