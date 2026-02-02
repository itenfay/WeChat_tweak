//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BaseResponseErrMsg, MMUIViewController, NSDictionary, NSString;

@interface BaseResponseErrMsgHandler : NSObject
{
    _Bool _needGoNext;
    BaseResponseErrMsg *_errMsg;
    MMUIViewController *_viewController;
    NSDictionary *_extParams;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _onWebViewCloseAndGoNextBlock;
}

+ (_Bool)canHandleErrorMsg:(id)arg1;
+ (_Bool)commonHandleErrorMsg:(id)arg1 viewController:(id)arg2 config:(id)arg3;
+ (_Bool)commonHandleBaseResponse:(id)arg1 viewController:(id)arg2 config:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onWebViewCloseAndGoNextBlock; // @synthesize onWebViewCloseAndGoNextBlock=_onWebViewCloseAndGoNextBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) _Bool needGoNext; // @synthesize needGoNext=_needGoNext;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) BaseResponseErrMsg *errMsg; // @synthesize errMsg=_errMsg;
- (void)webViewDidReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (id)getTopViewController;
- (void)openUrl:(id)arg1;
- (void)onHandleErrorAction;
- (void)onHandleErrorDone;
- (id)iconForError:(id)arg1;
- (void)handleErrorMsg:(id)arg1 viewController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

