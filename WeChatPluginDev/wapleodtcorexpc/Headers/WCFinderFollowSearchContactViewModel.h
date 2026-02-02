//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, WCFinderBaseCgi, WCFinderMentionSearchSection, WCFinderSearchItemReportQueue;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@interface WCFinderFollowSearchContactViewModel : NSObject
{
    int _scene;
    _Bool _queryContinueFlag;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    WCFinderSearchItemReportQueue *_itemReportQueue;
    id <WCFinderFollowSearchContactViewModelDelegate> _delegate;
    WCFinderBaseCgi *_searchCgi;
    WCFinderMentionSearchSection *_followSec;
    WCFinderMentionSearchSection *_moreSec;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) WCFinderMentionSearchSection *moreSec; // @synthesize moreSec=_moreSec;
@property(retain, nonatomic) WCFinderMentionSearchSection *followSec; // @synthesize followSec=_followSec;
@property(retain, nonatomic) WCFinderBaseCgi *searchCgi; // @synthesize searchCgi=_searchCgi;
@property(nonatomic) __weak id <WCFinderFollowSearchContactViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderSearchItemReportQueue *itemReportQueue; // @synthesize itemReportQueue=_itemReportQueue;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) int scene;
- (id)titleForSection:(id)arg1;
- (_Bool)moreThenOneSection;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
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
- (void)appendFollowSearchInfo:(id)arg1;
- (void)appendMoreSearchInfo:(id)arg1;
- (_Bool)containTargetSearchInfoArray:(id)arg1 targetInfo:(id)arg2;
- (void)onQueryNextPageContact;
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

