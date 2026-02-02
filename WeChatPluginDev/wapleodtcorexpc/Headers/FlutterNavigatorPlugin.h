//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterNavigatorCallback, MMFlutterEngineGroup, MMFlutterViewController, NSMutableArray, NSString;
@protocol FlutterNavigatorDelegate;

@interface FlutterNavigatorPlugin : NSObject
{
    NSObject<FlutterNavigatorDelegate> *_delegate;
    MMFlutterViewController *_viewController;
    FlutterNavigatorCallback *_callback;
    MMFlutterEngineGroup *_engineGroup;
    NSMutableArray *_enginePlugins;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *enginePlugins; // @synthesize enginePlugins=_enginePlugins;
@property(retain, nonatomic) MMFlutterEngineGroup *engineGroup; // @synthesize engineGroup=_engineGroup;
@property(retain, nonatomic) FlutterNavigatorCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak MMFlutterViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak NSObject<FlutterNavigatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onNewRouteRoute:(id)arg1;
- (void)disableSwipeBackWithError:(id *)arg1;
- (void)enableSwipeBackWithError:(id *)arg1;
- (void)popPlugin:(id)arg1 route:(id)arg2 error:(id *)arg3;
- (void)pushPlugin:(id)arg1 route:(id)arg2 arguments:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAttachedFlutterPlugins:(id)arg1;
- (void)setAttachedEngineGroup:(id)arg1;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

