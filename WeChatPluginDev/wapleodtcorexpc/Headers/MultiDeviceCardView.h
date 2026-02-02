//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MultiDeviceCardLoginContentView, MultiDeviceCardManageContentView, MultiDeviceLoginInfo, MultiDeviceManageInfo;
@protocol MultiDeviceCardViewDelegate;

@interface MultiDeviceCardView : UIView
{
    id <MultiDeviceCardViewDelegate> _delegate;
    unsigned long long _type;
    MultiDeviceCardLoginContentView *_deviceLoginContentView;
    MultiDeviceLoginInfo *_deviceLoginInfo;
    MultiDeviceCardManageContentView *_deviceManageContentView;
    MultiDeviceManageInfo *_deviceManageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiDeviceManageInfo *deviceManageInfo; // @synthesize deviceManageInfo=_deviceManageInfo;
@property(retain, nonatomic) MultiDeviceCardManageContentView *deviceManageContentView; // @synthesize deviceManageContentView=_deviceManageContentView;
@property(retain, nonatomic) MultiDeviceLoginInfo *deviceLoginInfo; // @synthesize deviceLoginInfo=_deviceLoginInfo;
@property(retain, nonatomic) MultiDeviceCardLoginContentView *deviceLoginContentView; // @synthesize deviceLoginContentView=_deviceLoginContentView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <MultiDeviceCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSingleCard) _Bool singleCard;
@property(nonatomic, getter=isExpand) _Bool expand;
- (void)updateFrameWithContentView:(id)arg1;
- (void)changeForManageWithInfo:(id)arg1;
- (void)onLoginConfirmFailed;
- (id)getLoginConfirmInfo;
- (void)changeForLoginWithInfo:(id)arg1;
- (void)reset;
- (void)reloadView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

