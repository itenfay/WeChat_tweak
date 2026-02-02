//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSArray, NSMutableArray, NSString, WCElasticLayoutView;
@protocol MMSightCameraBeautifyOptionDelegate;

@interface MMSightCameraBeautifyOption : NSObject
{
    id <MMSightCameraBeautifyOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    MMUIButton *_btnBeautifyIcon;
    NSMutableArray *_beautyBtnArray;
    NSArray *_beautyInfos;
    long long _currentSelectIndex;
    long long _currentOrientation;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) NSArray *beautyInfos; // @synthesize beautyInfos=_beautyInfos;
@property(retain, nonatomic) NSMutableArray *beautyBtnArray; // @synthesize beautyBtnArray=_beautyBtnArray;
@property(retain, nonatomic) MMUIButton *btnBeautifyIcon; // @synthesize btnBeautifyIcon=_btnBeautifyIcon;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraBeautifyOptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initViews;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_transformViewsToIdentityAnimated:(_Bool)arg1;
- (void)onClickBeautyBtn:(id)arg1;
- (void)_onClickIconView;
- (id)currentSelectedBeautyItem;
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

