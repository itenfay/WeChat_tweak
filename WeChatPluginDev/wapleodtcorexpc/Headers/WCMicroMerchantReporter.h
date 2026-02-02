//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, WCDataItem, WCMicroMerchantFeedsGroup;

@interface WCMicroMerchantReporter : NSObject
{
    _Bool _hasClickedUnfold;
    _Bool _hasConfirmedUnfold;
    unsigned int _browseStart;
    NSMutableDictionary *_foldExposureInfo;
    NSMutableSet *_exposureSessionExposureFeedIds;
    NSString *_exposureSessionID;
    NSString *_browseSessionID;
    WCDataItem *_browseFoldItem;
    WCMicroMerchantFeedsGroup *_browseFoldItemWsGroup;
    NSMutableSet *_browseFeedListInFold;
}

+ (void)asyncDoReportExposure:(id)arg1 sessionID:(id)arg2 exposureSessionExposureFeedIdsCnt:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasConfirmedUnfold; // @synthesize hasConfirmedUnfold=_hasConfirmedUnfold;
@property(nonatomic) _Bool hasClickedUnfold; // @synthesize hasClickedUnfold=_hasClickedUnfold;
@property(retain, nonatomic) NSMutableSet *browseFeedListInFold; // @synthesize browseFeedListInFold=_browseFeedListInFold;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *browseFoldItemWsGroup; // @synthesize browseFoldItemWsGroup=_browseFoldItemWsGroup;
@property(retain, nonatomic) WCDataItem *browseFoldItem; // @synthesize browseFoldItem=_browseFoldItem;
@property(nonatomic) unsigned int browseStart; // @synthesize browseStart=_browseStart;
@property(retain, nonatomic) NSString *browseSessionID; // @synthesize browseSessionID=_browseSessionID;
@property(retain, nonatomic) NSString *exposureSessionID; // @synthesize exposureSessionID=_exposureSessionID;
@property(retain, nonatomic) NSMutableSet *exposureSessionExposureFeedIds; // @synthesize exposureSessionExposureFeedIds=_exposureSessionExposureFeedIds;
@property(retain, nonatomic) NSMutableDictionary *foldExposureInfo; // @synthesize foldExposureInfo=_foldExposureInfo;
- (void)resetFoldBrowse;
- (void)doReportBrowse;
- (void)recordOnComfirmUnfoldTimeline;
- (void)recordOnClickUnfoldTimelineButton;
- (void)recordExposureFeedIDInBrowseFold:(id)arg1;
- (void)endBrowseSession;
- (void)beginBrowseSession:(id)arg1 wsGroup:(id)arg2;
- (void)onTimeLineSessionStat:(id)arg1;
- (void)updateExposureClicked:(_Bool)arg1 forFeedID:(id)arg2;
- (void)recordFoldItemGenerate:(id)arg1 index:(unsigned int)arg2;
- (void)resetFoldExposure;
- (void)endExposureSession;
- (void)beginExposureSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

