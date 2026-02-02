//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCCommentReport, WCMicroMerchantReporter, WeishiReportItem;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineReportLogicController : NSObject
{
    double _lastScreenShotContentOffset;
    NSString *_inputSessionId;
    id <WCTimelineLogicControllerDelegate> _delegate;
    WeishiReportItem *_weSeeSession;
    WCCommentReport *_commentReport;
    WCMicroMerchantReporter *_wsFoldReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMicroMerchantReporter *wsFoldReporter; // @synthesize wsFoldReporter=_wsFoldReporter;
@property(retain, nonatomic) WCCommentReport *commentReport; // @synthesize commentReport=_commentReport;
@property(retain, nonatomic) WeishiReportItem *weSeeSession; // @synthesize weSeeSession=_weSeeSession;
@property(nonatomic) __weak id <WCTimelineLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *inputSessionId; // @synthesize inputSessionId=_inputSessionId;
@property(nonatomic) double lastScreenShotContentOffset; // @synthesize lastScreenShotContentOffset=_lastScreenShotContentOffset;
- (void)recordOnComfirmUnfoldTimeline;
- (void)recordOnClickUnfoldTimelineButton;
- (void)startWsFoldExposureSession;
- (void)recordExposureFeedIDInBrowseMicroMerchantFold:(id)arg1;
- (void)endRecordBrowseMicroMerchantSession;
- (void)updateMicroMerchantExposureClickedForFeed:(id)arg1 wsGroup:(id)arg2;
- (void)recordMicroMerchantFoldItemGenerate:(id)arg1 index:(unsigned int)arg2;
- (void)generateInputSessionID;
- (void)reportTopicTagInputMenuItemAction:(long long)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)reportWCOpenIMTimeLineSetPermissionActionWithUserName:(id)arg1 oldBlackList:(_Bool)arg2;
- (void)reportWCOpenIMTimeLineExposeActionWithUserName:(id)arg1;
- (void)reportWCOpenIMTimeLineUnInterestActionWithUserName:(id)arg1;
- (void)asyncLogUnreadMsgCount;
- (void)Register;
- (void)Reset;
- (void)endWeSeeSessionOnAlertOpenWeishiAppStoreEndCancel:(_Bool)arg1 Success:(_Bool)arg2;
- (void)endWeSeeSessionOnAlertOpenWeishiEndCancel:(_Bool)arg1 Success:(_Bool)arg2;
- (void)reportWeSeeEntranceClickSession:(unsigned int)arg1;
- (void)beginWeSeeEntranceClickSession:(id)arg1;
- (id)copyWeeSeeSession;
- (void)endWeSeeSessionIfExist:(unsigned int)arg1;
- (void)beginWeSeeSession:(unsigned int)arg1;
- (void)onPlayNewMsgNotify;
- (void)logOnNoMore:(_Bool)arg1;
- (void)logOnCancelEmoticonCommentAction:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnEmoticonCommentAction:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnCancelCommitText:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnDidCommitText:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logOnCommentAction:(id)arg1 inputDataItem:(id)arg2 refComment:(id)arg3;
- (void)logClickNickNameToProfile:(id)arg1 refDataItem:(id)arg2;
- (void)logOnShowSelfContact;
- (void)logBrowseInfoOnTimelineReturn;
- (void)recordUserPermission:(id)arg1 blackList:(_Bool)arg2 outsider:(_Bool)arg3;
- (void)logDataItemBrowseCount:(id)arg1;
- (void)startLogBrowseInfo:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

