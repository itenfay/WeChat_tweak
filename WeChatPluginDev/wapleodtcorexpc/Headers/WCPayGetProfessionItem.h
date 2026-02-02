//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UILabel, WCPayProfession;
@protocol WCPayGetProfessionItemDelegate;

@interface WCPayGetProfessionItem
{
    id <WCPayGetProfessionItemDelegate> _delegate;
    NSArray *_professions;
    UILabel *_professionLabel;
    WCPayProfession *_profession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayProfession *profession; // @synthesize profession=_profession;
@property(retain, nonatomic) UILabel *professionLabel; // @synthesize professionLabel=_professionLabel;
@property(retain, nonatomic) NSArray *professions; // @synthesize professions=_professions;
@property(nonatomic) __weak id <WCPayGetProfessionItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)professionString;
- (void)getProfessionViewController:(id)arg1 didSelectedProfession:(id)arg2;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;
- (void)updateProfession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

