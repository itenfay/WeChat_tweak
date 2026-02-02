//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UILabel, UITextView;
@protocol settingModifySignDelegate;

@interface SettingModifySignViewController
{
    UITextView *m_textView;
    NSString *m_nsLastSign;
    id <settingModifySignDelegate> m_delegate;
    UILabel *m_wordCountLabel;
    MMTableView *m_tableView;
}

+ (id)unicodeStringWithString:(id)arg1;
+ (id)filterSpecialChars:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <settingModifySignDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastSign; // @synthesize m_nsLastSign;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)OnReturn;
- (void)OnCancel;
- (void)viewDidLoad;
- (void)initTableView;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateWordCount:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

