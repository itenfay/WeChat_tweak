//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, WCFinderMentionContactSearcher, WCFinderMentionSearchSection;
@protocol WCFinderMentionSearchContactViewModelDelegate;

@interface WCFinderMentionSearchContactViewModel : NSObject
{
    _Bool _queryContinueFlag;
    int _scene;
    id <WCFinderMentionSearchContactViewModelDelegate> _delegate;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    long long _lastReportExposeTimeInMs;
    NSArray *_sections;
    WCFinderMentionSearchSection *_followSec;
    WCFinderMentionSearchSection *_friendSec;
    WCFinderMentionSearchSection *_moreSec;
    WCFinderMentionContactSearcher *_searcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMentionContactSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) WCFinderMentionSearchSection *moreSec; // @synthesize moreSec=_moreSec;
@property(retain, nonatomic) WCFinderMentionSearchSection *friendSec; // @synthesize friendSec=_friendSec;
@property(retain, nonatomic) WCFinderMentionSearchSection *followSec; // @synthesize followSec=_followSec;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long lastReportExposeTimeInMs; // @synthesize lastReportExposeTimeInMs=_lastReportExposeTimeInMs;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) __weak id <WCFinderMentionSearchContactViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)displayShowMoreWordingForSection:(long long)arg1;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (unsigned long long)mentionTypeForSection:(long long)arg1;
- (id)titleForSection:(id)arg1;
- (_Bool)moreThenOneSection;
- (id)searchInfoAtIndexPath:(id)arg1;
- (void)showMoreForSection:(long long)arg1;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
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

