//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCStoryTouchToDismissView : UIView
{
    _Bool _touchToDismiss;
    CDUnknownBlockType _dismissAction;
    CDUnknownBlockType _hitTestBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hitTestBlock; // @synthesize hitTestBlock=_hitTestBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(nonatomic) _Bool touchToDismiss; // @synthesize touchToDismiss=_touchToDismiss;
- (void)dismissSelf;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

