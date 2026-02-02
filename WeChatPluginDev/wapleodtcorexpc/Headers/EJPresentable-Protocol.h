//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@protocol EJPresentable
@property(readonly, nonatomic) UIView *view;
@property(nonatomic) struct CGRect style;
- (void)resetFramebuffer;
- (void)finish;
- (void)present;
@end

