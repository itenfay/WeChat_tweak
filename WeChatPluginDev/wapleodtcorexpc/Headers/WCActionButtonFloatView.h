//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCDataItem;

@interface WCActionButtonFloatView
{
    WCDataItem *_dataItem;
    UIButton *_actionButton;
    NSString *_title;
    struct CGPoint _showPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGPoint showPoint; // @synthesize showPoint=_showPoint;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide;
- (void)showWithItemData:(id)arg1 tipPoint:(struct CGPoint)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

