//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderSnSLiveSectionTableViewCell;
@protocol WCTimelineLogicControllerDelegate;

@interface WCFinderSnSShareLiveLogicController : NSObject
{
    _Bool _continueFlag;
    CDUnknownBlockType _onTriggerContentTableViewReload;
    id <WCTimelineLogicControllerDelegate> _delegate;
    NSData *_lastBuffer;
    NSMutableArray *_allDataItems;
    NSMutableSet *_tidContainSet;
    WCFinderSnSLiveSectionTableViewCell *_snsLiveCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSnSLiveSectionTableViewCell *snsLiveCell; // @synthesize snsLiveCell=_snsLiveCell;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) __weak id <WCTimelineLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType onTriggerContentTableViewReload; // @synthesize onTriggerContentTableViewReload=_onTriggerContentTableViewReload;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)finderLiveHoverSnsTimelineSwitchChanged:(_Bool)arg1;
- (long long)findContentIndexWithTid:(id)arg1;
- (void)clearAllData;
- (void)afterEnterSnSLiveRoom:(id)arg1;
- (void)processLiveExtRegister:(id)arg1;
- (void)sortItem:(id)arg1 layoutInfo:(id)arg2;
- (id)processServerDividerData:(id)arg1 layoutInfo:(id)arg2;
- (id)processServerData:(id)arg1 layoutInfo:(id)arg2;
- (id)filterVaildDataItem:(id)arg1;
- (id)dataSource;
- (void)requestNextPageData;
- (void)requestLatestData;
- (void)bindCurrentSnSLiveSecionCell:(id)arg1;
- (void)onRefreshHead:(unsigned long long)arg1;
- (_Bool)shouldShowSnSLiveCell;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

