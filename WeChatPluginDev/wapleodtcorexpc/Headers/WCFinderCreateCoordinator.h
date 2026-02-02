//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNewUserPrepareResponse, NSDictionary, NSString, WCFinderPostSessionModel;
@protocol WCFinderCreateCoordinatorDelegate;

@interface WCFinderCreateCoordinator : NSObject
{
    _Bool _isAutoLifeCycle;
    int _scene;
    int _fromCommentScene;
    unsigned long long _createScene;
    FinderNewUserPrepareResponse *_userPrepare;
    WCFinderPostSessionModel *_postSession;
    NSString *_customCreateUserTitleText;
    NSString *_customCreateUserConfirmButtonText;
    id <WCFinderCreateCoordinatorDelegate> _delegate;
    CDUnknownBlockType _customHandleUserPrapareBlock;
    id _userInfo;
    NSDictionary *_params;
    id _context;
}

+ (_Bool)shouldStartCreateUserByMasterContact;
+ (_Bool)shouldStartCreateUserWithPostContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool isAutoLifeCycle; // @synthesize isAutoLifeCycle=_isAutoLifeCycle;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType customHandleUserPrapareBlock; // @synthesize customHandleUserPrapareBlock=_customHandleUserPrapareBlock;
@property(nonatomic) __weak id <WCFinderCreateCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *customCreateUserConfirmButtonText; // @synthesize customCreateUserConfirmButtonText=_customCreateUserConfirmButtonText;
@property(retain, nonatomic) NSString *customCreateUserTitleText; // @synthesize customCreateUserTitleText=_customCreateUserTitleText;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(nonatomic) int fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
@property(nonatomic) unsigned long long createScene; // @synthesize createScene=_createScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)reportDataVoluntaryExit:(unsigned long long)arg1;
- (void)tipsVCClickCancelButton:(id)arg1;
- (void)tipsVCClickConfirmButton:(id)arg1;
- (void)createUserFailed;
- (void)cancelCreateUser;
- (void)createUserFinished:(id)arg1;
- (void)createUserConfirmed;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (id)geTopViewController;
- (void)bindReportActionByTipsVC:(id)arg1;
- (void)showCreateAccountTips;
- (void)showCreateAccountTipsWithCustomWording:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startRealName;
- (void)createUserFuncComplete;
- (void)startCreateUserWithParams:(id)arg1;
- (void)startCreateUser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

