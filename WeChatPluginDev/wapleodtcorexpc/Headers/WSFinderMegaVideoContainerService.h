//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderRedDotCtrlInfo;

@interface WSFinderMegaVideoContainerService
{
    _Bool _isChangeTab;
    NSString *_enterRedDotTipsUuid;
    unsigned long long _pageEnterType;
    NSString *_sourceFeedId;
    WCFinderRedDotCtrlInfo *_finderCtrlInfo;
    NSString *_lvCurrentContextID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lvCurrentContextID; // @synthesize lvCurrentContextID=_lvCurrentContextID;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderCtrlInfo; // @synthesize finderCtrlInfo=_finderCtrlInfo;
@property(nonatomic) _Bool isChangeTab; // @synthesize isChangeTab=_isChangeTab;
@property(copy, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
@property(nonatomic) unsigned long long pageEnterType; // @synthesize pageEnterType=_pageEnterType;
@property(copy, nonatomic) NSString *enterRedDotTipsUuid; // @synthesize enterRedDotTipsUuid=_enterRedDotTipsUuid;
- (void)cleanReportInfo;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

