//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationController, NSArray, NSMutableDictionary, NSString;

@interface WAJSEventHandler_chooseMessageFile
{
    _Bool _showingLoading;
    _Bool _selectCanceled;
    NSString *_fileType;
    NSArray *_extension;
    long long _limitCount;
    MMUINavigationController *_navigationController;
    NSString *_choosedUserName;
    NSMutableDictionary *_resDic;
    unsigned long long _resWait;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selectCanceled; // @synthesize selectCanceled=_selectCanceled;
@property(nonatomic) _Bool showingLoading; // @synthesize showingLoading=_showingLoading;
@property(nonatomic) unsigned long long resWait; // @synthesize resWait=_resWait;
@property(retain, nonatomic) NSMutableDictionary *resDic; // @synthesize resDic=_resDic;
@property(retain, nonatomic) NSString *choosedUserName; // @synthesize choosedUserName=_choosedUserName;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(retain, nonatomic) NSArray *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
- (void)onMsgSelectCancel;
- (void)onMsgSelectFinish:(id)arg1 hd:(_Bool)arg2;
- (void)onMsgFileSelectCancel;
- (void)onMsgFileSelectFinish:(id)arg1;
- (id)getViewController;
- (id)getWebviewController;
- (void)checkFinish;
- (id)calcImgType:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)showSessionSelect;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

