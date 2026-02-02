//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderBaseCgi, WCFinderMentionSearchSection, WCFinderSearchItemReportQueue;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@interface WCFinderSearchFansContactViewModel : NSObject
{
    int _scene;
    _Bool _queryContinueFlag;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    WCFinderSearchItemReportQueue *_reportQueue;
    NSString *_searchSessionid;
    NSString *_currentFinderUsername;
    id <WCFinderFollowSearchContactViewModelDelegate> _delegate;
    WCFinderBaseCgi *_searchCgi;
    WCFinderMentionSearchSection *_fansSec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMentionSearchSection *fansSec; // @synthesize fansSec=_fansSec;
@property(retain, nonatomic) WCFinderBaseCgi *searchCgi; // @synthesize searchCgi=_searchCgi;
@property(nonatomic) __weak id <WCFinderFollowSearchContactViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *currentFinderUsername; // @synthesize currentFinderUsername=_currentFinderUsername;
@property(copy, nonatomic) NSString *searchSessionid; // @synthesize searchSessionid=_searchSessionid;
@property(retain, nonatomic) WCFinderSearchItemReportQueue *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) int scene;
- (id)titleForSection:(id)arg1;
- (_Bool)moreThenOneSection;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)searchPlaceHolder;
- (_Bool)isFinderContact;
- (unsigned long long)cellActionType;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)onQueryNextPageContact;
- (_Bool)containTargetSearchInfoArray:(id)arg1 targetInfo:(id)arg2;
- (void)appendFansSearchInfo:(id)arg1;
- (void)queryContactWith:(id)arg1;
- (_Bool)isRepetSearch:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

