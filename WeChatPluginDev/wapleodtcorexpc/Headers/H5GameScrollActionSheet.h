//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton;
@protocol H5GameScrollActionSheetDelegate;

@interface H5GameScrollActionSheet : UIView
{
    unsigned long long _columnOrRowCount;
    NSArray *_dataAry;
    UIView *_containerView;
    UIButton *_transparentBgBtn;
    long long _lastOrientation;
    _Bool _isLandScape;
    _Bool _bOrientationLocked;
    id <H5GameScrollActionSheetDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <H5GameScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRotate:(id)arg1;
- (void)onEmptyPlaceTap:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1;
- (void)setupTransparentView;
- (void)onMenuButtonClicked:(id)arg1;
- (id)getMenuButton:(id)arg1;
- (void)setupScrollViewPortrait;
- (void)setupScrollViewLanscape;
- (void)setupScrollViews;
- (void)setupContainerView;
- (void)setupColorfulBar;
- (_Bool)isSupportVisualEffect;
- (void)dealloc;
- (id)initWithItems:(id)arg1 OrientatioinLocked:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

