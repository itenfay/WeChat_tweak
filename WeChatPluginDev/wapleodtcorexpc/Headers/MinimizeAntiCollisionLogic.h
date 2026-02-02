//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MinimizeAntiCollisionLogicDelegate;

@interface MinimizeAntiCollisionLogic : NSObject
{
    id <MinimizeAntiCollisionLogicDelegate> _delegate;
    NSMutableArray *_trackedViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *trackedViews; // @synthesize trackedViews=_trackedViews;
@property(nonatomic) __weak id <MinimizeAntiCollisionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPoint)checkCollision:(id)arg1 with:(id)arg2;
- (id)find:(id)arg1;
- (void)handleTrackedViewMove:(id)arg1;
- (void)trackView:(id)arg1;
- (id)init;

@end

