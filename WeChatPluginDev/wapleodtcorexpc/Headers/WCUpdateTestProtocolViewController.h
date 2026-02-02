//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UITextView;

@interface WCUpdateTestProtocolViewController
{
    UITextView *_interpretTextView;
    UIButton *_convertButton;
    UIButton *_resetButton;
}

+ (id)findProtocol:(id)arg1;
+ (id)getMethodListString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) UIButton *convertButton; // @synthesize convertButton=_convertButton;
@property(retain, nonatomic) UITextView *interpretTextView; // @synthesize interpretTextView=_interpretTextView;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)resetInterpreter;
- (void)convertCrashReport;
- (void)setupBaseView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

