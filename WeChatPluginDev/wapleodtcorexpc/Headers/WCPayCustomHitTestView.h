//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCPayCustomHitTestView : UIView
{
    CDUnknownBlockType _handleBlock;
}

@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
