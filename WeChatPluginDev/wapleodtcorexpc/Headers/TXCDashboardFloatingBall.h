//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class TXCDashboardWindow;

@interface TXCDashboardFloatingBall : UIButton
{
    CDUnknownBlockType _onClick;
    TXCDashboardWindow *_containerWindow;
    struct CGPoint _originPoint;
}

+ (id)defaultFloatingBall;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(retain, nonatomic) TXCDashboardWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void)didClick;
- (void)handlePanGesture:(id)arg1;
- (void)createContainerWindow;
- (void)show:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

