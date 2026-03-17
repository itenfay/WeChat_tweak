//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WAMainFrameTaskBarSearchCustomViewButton : NSObject
{
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)createMaskViewIfNeeded;
- (void)setHighlighted:(_Bool)arg1;

@end

