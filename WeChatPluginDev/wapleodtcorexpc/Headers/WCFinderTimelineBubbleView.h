//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderTimelineBubbleView : UIView
{
    unsigned long long _bubbleLevel;
    double _buttonWidth;
}

@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) unsigned long long bubbleLevel; // @synthesize bubbleLevel=_bubbleLevel;
- (id)getBubbleBtn;
- (void)adjustButtonWidth:(double)arg1;

@end

