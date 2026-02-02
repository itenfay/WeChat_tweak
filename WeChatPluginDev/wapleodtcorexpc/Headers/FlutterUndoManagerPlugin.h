//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterViewController;
@protocol FlutterUndoManagerDelegate;

@interface FlutterUndoManagerPlugin : NSObject
{
    id <FlutterUndoManagerDelegate> _undoManagerDelegate;
    FlutterViewController *_viewController;
}

@property(nonatomic) FlutterViewController *viewController; // @synthesize viewController=_viewController;
- (void)setUndoState:(id)arg1;
- (void)registerRedo;
- (void)registerUndoWithDirection:(long long)arg1;
- (void)resetUndoManager;
- (id)undoManager;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

