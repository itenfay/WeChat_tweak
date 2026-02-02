//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderContact, WCFinderShareListReportModel;
@protocol WCFinderSnSAdListViewModelDelegate;

@interface WCFinderSnSAdListViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _continueFlag;
    int _commentScene;
    id <WCFinderSnSAdListViewModelDelegate> _delegate;
    NSMutableArray *_dataItems;
    unsigned long long _refreshTime;
    WCFinderShareListReportModel *_reportModel;
    NSString *_adParamInfoStr;
    NSMutableSet *_tidContainSet;
    NSString *_lastTid;
    NSString *_lastNonceID;
    NSString *_encryptedlastTid;
    NSString *_userName;
    NSData *_lastBuff;
    WCFinderContact *_contact;
    unsigned long long _maxID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned long long maxID; // @synthesize maxID=_maxID;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *encryptedlastTid; // @synthesize encryptedlastTid=_encryptedlastTid;
@property(retain, nonatomic) NSString *lastNonceID; // @synthesize lastNonceID=_lastNonceID;
@property(retain, nonatomic) NSString *lastTid; // @synthesize lastTid=_lastTid;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(copy, nonatomic) NSString *adParamInfoStr; // @synthesize adParamInfoStr=_adParamInfoStr;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) __weak id <WCFinderSnSAdListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (int)feedViewControllerScene;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (_Bool)isSourceValid;
- (void)contentUnlikeFeedback:(id)arg1 subType:(long long)arg2;
- (id)contentVMAtIndex:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (_Bool)isEnableFetchNextpage;
- (void)onFeedFollowStatusChangedAction;
- (unsigned long long)currentFollowState;
- (void)requestNextpageList;
- (void)reportRelatedInfo:(id)arg1;
- (void)refreshLatestData;
- (_Bool)deleteDataItemWithIndex:(unsigned long long)arg1 tid:(id)arg2;
- (id)transformDataItems:(id)arg1;
- (void)addContentVM:(id)arg1;
@property(readonly, nonatomic) NSString *enterSourceFeedId;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 userName:(id)arg3 dataScene:(id)arg4 commentScene:(int)arg5 encryptedlastTid:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

