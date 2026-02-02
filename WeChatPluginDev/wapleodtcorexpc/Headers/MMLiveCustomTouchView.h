//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMLiveCustomTouchView : UIView
{
    NSMutableArray *_customHitViewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *customHitViewArray; // @synthesize customHitViewArray=_customHitViewArray;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addCustomHitView:(id)arg1;

@end

