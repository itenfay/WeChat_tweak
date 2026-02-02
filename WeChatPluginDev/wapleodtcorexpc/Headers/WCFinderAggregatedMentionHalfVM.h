//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, WCFinderContact, WCFinderListLoadingStateModel, WCFinderMention;
@protocol WCFinderAggregatedMentionHalfVMDelegate;

@interface WCFinderAggregatedMentionHalfVM : NSObject
{
    id <WCFinderAggregatedMentionHalfVMDelegate> _delegate;
    WCFinderMention *_mention;
    WCFinderListLoadingStateModel *_loadingState;
    WCFinderContact *_finderContact;
    NSMutableArray *_mentionList;
    NSMutableSet *_mentionIDSet;
    NSData *_pageBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSMutableSet *mentionIDSet; // @synthesize mentionIDSet=_mentionIDSet;
@property(retain, nonatomic) NSMutableArray *mentionList; // @synthesize mentionList=_mentionList;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(nonatomic) __weak id <WCFinderAggregatedMentionHalfVMDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getMentionListScene;
- (long long)getRequestScene;
- (id)dataSnapshot;
- (id)navigationTitle;
- (_Bool)dataEmpty;
- (id)mentionAtIndex:(unsigned long long)arg1;
- (void)appendMentionList:(id)arg1;
- (void)clearData;
- (void)fetchData;
- (void)fetchMoreData;
- (void)fetchFirstPageData;
- (id)initWithFinderMention:(id)arg1 finderContact:(id)arg2;

@end

