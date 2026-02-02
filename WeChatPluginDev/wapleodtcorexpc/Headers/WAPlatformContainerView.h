//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface WAPlatformContainerView : UIView
{
    _Bool _disableHook;
    UIView *_nativeView;
    long long _viewId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableHook; // @synthesize disableHook=_disableHook;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) UIView *nativeView; // @synthesize nativeView=_nativeView;
- (void)updateNativeViewFrame;
- (void)addHook;
- (void)removeHook;
- (void)setFrame:(struct CGRect)arg1;
- (id)view;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

