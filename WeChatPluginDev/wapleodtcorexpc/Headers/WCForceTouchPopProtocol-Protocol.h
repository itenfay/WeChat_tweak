//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;

@protocol WCForceTouchPopProtocol <NSObject>
- (_Bool)canPop;

@optional
@property(nonatomic) __weak UIView *previewSourceView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,W,N

@property(nonatomic) __weak UIViewController *previewFromController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,W,N

- (void)commitViewController;
@end

