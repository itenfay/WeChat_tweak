//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WAMainFrameTaskbarOperationViewController;

@interface WAMainFrameTaskBarDeleteActionWindow
{
    WAMainFrameTaskbarOperationViewController *_operationVC;
    UIView *_containerView;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WAMainFrameTaskbarOperationViewController *operationVC; // @synthesize operationVC=_operationVC;
- (void)makeKeyWindow;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end

