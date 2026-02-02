//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>
typedef void (^CDUnknownBlockType)(void);

@interface GameHitTestForwardView : UIControl
{
    CDUnknownBlockType _forwardBlock;
}

@property(copy, nonatomic) CDUnknownBlockType forwardBlock; // @synthesize forwardBlock=_forwardBlock;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
