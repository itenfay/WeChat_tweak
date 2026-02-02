//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCGroupUndoneEduView;
@protocol WCGroupUndoneEduViewDelegate;

@interface WCGroupUndoneEduWindow
{
    id <WCGroupUndoneEduViewDelegate> _undoneDelegate;
    WCGroupUndoneEduView *_contentView;
    UIButton *_backgroundBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(readonly, nonatomic) WCGroupUndoneEduView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCGroupUndoneEduViewDelegate> undoneDelegate; // @synthesize undoneDelegate=_undoneDelegate;
- (void)onGUEConfirm:(id)arg1;
- (void)onGUEClose:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

