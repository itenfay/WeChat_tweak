//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, UITextField;

@interface WXGRoamRemoteConfigViewController
{
    NSString *path;
    UITextField *_deviceText;
    UITextField *_domainText;
    UITextField *_portText;
    UITextField *_ticketText;
    UIButton *_saveBtn;
    UIButton *_deleteBtn;
    NSMutableArray *_textArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *textArr; // @synthesize textArr=_textArr;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UITextField *ticketText; // @synthesize ticketText=_ticketText;
@property(retain, nonatomic) UITextField *portText; // @synthesize portText=_portText;
@property(retain, nonatomic) UITextField *domainText; // @synthesize domainText=_domainText;
@property(retain, nonatomic) UITextField *deviceText; // @synthesize deviceText=_deviceText;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onDelete;
- (void)onSave;
- (_Bool)deleteCache;
- (_Bool)saveTextToCache;
- (void)getTextCache;
- (void)setupMainView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

