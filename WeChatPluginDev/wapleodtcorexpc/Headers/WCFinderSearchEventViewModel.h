//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi, WCFinderFlowEventReportInfo;
@protocol WCFinderSearchEventViewModelDelegate;

@interface WCFinderSearchEventViewModel : NSObject
{
    _Bool _hasNoMoreData;
    id <WCFinderSearchEventViewModelDelegate> _delegate;
    NSMutableArray *_eventArray;
    NSString *_flowId;
    NSString *_eventVisitId;
    NSString *_requestId;
    NSString *_queryText;
    NSData *_lastBuffer;
    WCFinderBaseCgi *_requestCgi;
    WCFinderFlowEventReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFlowEventReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCFinderBaseCgi *requestCgi; // @synthesize requestCgi=_requestCgi;
@property(nonatomic) _Bool hasNoMoreData; // @synthesize hasNoMoreData=_hasNoMoreData;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *eventVisitId; // @synthesize eventVisitId=_eventVisitId;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property(nonatomic) __weak id <WCFinderSearchEventViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportFlowEventIfNeed;
- (_Bool)isEqualWithLastQueryText:(id)arg1;
- (void)searchNextPage;
- (void)searchEventWithText:(id)arg1;

@end

