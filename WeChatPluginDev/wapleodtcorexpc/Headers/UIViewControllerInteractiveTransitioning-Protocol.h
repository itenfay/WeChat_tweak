//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol UIViewControllerContextTransitioning;

@protocol UIViewControllerInteractiveTransitioning <NSObject>
- (void)startInteractiveTransition:(id <UIViewControllerContextTransitioning>)arg1;

@optional
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) long long completionCurve;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) double completionSpeed;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@end

