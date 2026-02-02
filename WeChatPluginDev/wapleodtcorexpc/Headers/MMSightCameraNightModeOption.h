//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSString, WCElasticLayoutView;
@protocol MMSightCameraNightModeOptionDelegate;

@interface MMSightCameraNightModeOption : NSObject
{
    id <MMSightCameraNightModeOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    MMUIButton *_iconButton;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraNightModeOptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initViews;
- (void)_changeNightModeIconViewSelection:(_Bool)arg1;
- (void)_onClickIconView;
- (void)rotateToOrientation:(long long)arg1;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
@property(nonatomic) _Bool active;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

