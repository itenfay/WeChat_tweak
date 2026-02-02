//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSString;
@protocol WATouchBaseViewDelegate;

@interface WATouchBaseView : UIView
{
    id <WATouchBaseViewDelegate> _touchDelegate;
    NSMutableSet *_curTouchSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *curTouchSet; // @synthesize curTouchSet=_curTouchSet;
@property(nonatomic) __weak id <WATouchBaseViewDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void)onLongPress:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

