//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIPickerView, UIView, UIViewController;
@protocol MMPickerViewDelegate;

@interface MMPickerView : NSObject
{
    UIPickerView *m_pickerView;
    id <MMPickerViewDelegate> m_delegate;
    int m_curSession;
    NSMutableArray *m_arrSessions;
    NSMutableArray *m_arrRows;
    NSMutableDictionary *m_dicSelectionIndex;
    double m_fLeftWidth;
    UIView *_contentView;
    UIView *_transparentView;
    UIViewController *_popoverControllerNew;
    long long _lastOri;
}

+ (struct CGSize)getPickerViewSize;
- (void).cxx_destruct;
@property(nonatomic) long long lastOri; // @synthesize lastOri=_lastOri;
@property(retain, nonatomic) UIViewController *popoverControllerNew; // @synthesize popoverControllerNew=_popoverControllerNew;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableDictionary *m_dicSelectionIndex; // @synthesize m_dicSelectionIndex;
@property(nonatomic) __weak id <MMPickerViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIPickerView *m_pickerView; // @synthesize m_pickerView;
- (void)setSelectedRows:(id)arg1;
- (void)setSelectedRow:(long long)arg1 atSession:(long long)arg2;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)setLeftWidth:(double)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)showInView:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)dealloc;
- (id)initWithRows:(id)arg1;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

