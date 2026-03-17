//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "ARSessionObserver-Protocol.h"

@class ARFrame, ARSession, NSArray;

@protocol ARSessionDelegate <ARSessionObserver>

@optional
- (void)session:(ARSession *)arg1 didRemoveAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didAddAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateFrame:(ARFrame *)arg2;
@end

