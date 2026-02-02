//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol WXGRoamBannerViewDelegate;

@interface WXGRoamBannerView : UIView
{
    _Bool _isLeftStyle;
    id <WXGRoamBannerViewDelegate> _delegate;
    long long _curIndex;
    unsigned long long _curNotify;
    UILabel *_leftLabel;
    UIView *_labelIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *labelIconView; // @synthesize labelIconView=_labelIconView;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) unsigned long long curNotify; // @synthesize curNotify=_curNotify;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) __weak id <WXGRoamBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLeftStyle; // @synthesize isLeftStyle=_isLeftStyle;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)arg1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1;
- (void)updateBannerFrame;
- (void)updateBanner;
- (_Bool)isMultiPackageBackingup;
- (void)updateNotifyCode;
- (void)layoutSubviews;
- (void)onTapToShowDetail;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

