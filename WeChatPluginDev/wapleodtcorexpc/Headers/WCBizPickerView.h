//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIPickerView, UIView, UIViewController;
@protocol WCBizPickerViewDelegate;

@interface WCBizPickerView : NSObject
{
    UIPickerView *m_pickerView;
    id <WCBizPickerViewDelegate> _m_delegate;
    UIView *_contentView;
    UIView *_transparentView;
    UIViewController *_contentVC;
    long long _lastOri;
}

+ (struct CGSize)getPickerViewSize;
- (void).cxx_destruct;
@property(nonatomic) long long lastOri; // @synthesize lastOri=_lastOri;
@property(retain, nonatomic) UIViewController *contentVC; // @synthesize contentVC=_contentVC;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCBizPickerViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)reloadComponent:(long long)arg1;
- (void)setSelectedRow:(long long)arg1 Component:(long long)arg2;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)showInView:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)dealloc;
- (void)removeAllPickerViewDelegate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

