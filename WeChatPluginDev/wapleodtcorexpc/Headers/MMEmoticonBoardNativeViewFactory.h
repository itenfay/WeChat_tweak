//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol FlutterBinaryMessenger;

@interface MMEmoticonBoardNativeViewFactory : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    UIViewController *_viewController;
}

+ (id)channelNameFromViewId:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
- (id)createArgsCodec;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

