//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUINavigationController, MMUIViewController, NSArray, NSString, WCFinderFilePickLimiter;

@interface WCFinderPostChatFilePickerHelper : NSObject
{
    NSString *_fileType;
    NSArray *_extension;
    MMUIViewController *_fromVC;
    MMUINavigationController *_navigationController;
    WCFinderFilePickLimiter *_limiter;
    NSString *_choosedUserName;
    CDUnknownBlockType _onComplete;
    CDUnknownBlockType _onCancel;
}

+ (void)showChatFilePicker:(id)arg1 limiter:(id)arg2 fromVC:(id)arg3 complete:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onCancel; // @synthesize onCancel=_onCancel;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(retain, nonatomic) NSString *choosedUserName; // @synthesize choosedUserName=_choosedUserName;
@property(retain, nonatomic) WCFinderFilePickLimiter *limiter; // @synthesize limiter=_limiter;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) NSArray *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
- (void)checkFinishWithErr:(id)arg1 url:(id)arg2 extra:(id)arg3 cancel:(_Bool)arg4;
- (void)checkFinishWithErr:(id)arg1 url:(id)arg2 extra:(id)arg3;
- (void)checkFinishWithErrMsg:(id)arg1;
- (void)checkCancel;
- (void)handleLocalFileWithPath:(id)arg1;
- (void)onMsgSelectCancel;
- (void)onMsgSelectFinish:(id)arg1 hd:(_Bool)arg2;
- (void)onMsgFileSelectCancel;
- (void)onMsgFileSelectFinish:(id)arg1;
- (id)getViewController;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)showSessionSelect;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

