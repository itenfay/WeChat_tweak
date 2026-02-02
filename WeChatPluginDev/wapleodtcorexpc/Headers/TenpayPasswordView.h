//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface TenpayPasswordView : UIView
{
    UIView *RoundCell[6];
    long long CurrentInputNum;
    UIColor *FillColor;
    UIColor *EmptyColor;
}

- (void)dealloc;
- (void)SetInputNum:(long long)arg1;
- (void)SetFillColor:(id)arg1 emptyColor:(id)arg2;
- (id)RoundCell:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bgImage:(id)arg2;

@end

