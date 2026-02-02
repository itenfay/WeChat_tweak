//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol WCPayGPLaunchModeDetailViewDelegate;

@interface WCPayGPLaunchModeDetailView : UIView
{
    id <WCPayGPLaunchModeDetailViewDelegate> _delegate;
    UIImageView *_checkCommonAA;
    UIImageView *_checkActicityAA;
    UIImageView *_checkCustomizeAA;
    UIView *_commonAAView;
    UIView *_activityAAView;
    UIView *_customizeAAView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *customizeAAView; // @synthesize customizeAAView=_customizeAAView;
@property(retain, nonatomic) UIView *activityAAView; // @synthesize activityAAView=_activityAAView;
@property(retain, nonatomic) UIView *commonAAView; // @synthesize commonAAView=_commonAAView;
@property(retain, nonatomic) UIImageView *checkCustomizeAA; // @synthesize checkCustomizeAA=_checkCustomizeAA;
@property(retain, nonatomic) UIImageView *checkActicityAA; // @synthesize checkActicityAA=_checkActicityAA;
@property(retain, nonatomic) UIImageView *checkCommonAA; // @synthesize checkCommonAA=_checkCommonAA;
@property(nonatomic) __weak id <WCPayGPLaunchModeDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)customizeAAClick;
- (void)activityAAClick;
- (void)commonAAClick;
- (id)getDescLabel:(id)arg1;
- (id)getTitleLabel:(id)arg1;
- (void)setupContentView;
- (void)updateCheckMarkStatusWithLaunchType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

