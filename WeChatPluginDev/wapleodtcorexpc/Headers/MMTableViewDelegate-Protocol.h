//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTableView, NSSet, UIEvent, UIGestureRecognizer;

@protocol MMTableViewDelegate <NSObject>

@optional
- (_Bool)mmTableView:(MMTableView *)arg1 shouldPassHitTest:(struct CGPoint)arg2 withEvent:(UIEvent *)arg3;
- (_Bool)mmTableView:(MMTableView *)arg1 shouldBeginRecognizeGesture:(UIGestureRecognizer *)arg2;
- (void)mmTableView:(MMTableView *)arg1 safeAreaInsetsDidChange:(struct UIEdgeInsets)arg2;
- (void)mmTableView:(MMTableView *)arg1 dragTriggerNotifyWithOffset:(double)arg2;
- (void)mmTableViewDidFinishedLoading:(MMTableView *)arg1;
- (void)mmTableView:(MMTableView *)arg1 touchesCancelled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mmTableView:(MMTableView *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mmTableView:(MMTableView *)arg1 touchesMoved:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)mmTableView:(MMTableView *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end

