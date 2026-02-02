//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedArray, WCFinderFeedGroup, WCFinderStreamLoadingState;
@protocol WCFinderHistoryViewModelDelegate;

@interface WCFinderHistoryViewModel : NSObject
{
    _Bool _showSearchIcon;
    id <WCFinderHistoryViewModelDelegate> _delegate;
    WCFinderFeedGroup *_feedGroup;
    WCFinderStreamLoadingState *_loadingState;
    long long _historyRecardDays;
    unsigned long long _requestId;
}

+ (CDUnknownBlockType)mapSessionBlock;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) _Bool showSearchIcon; // @synthesize showSearchIcon=_showSearchIcon;
@property(nonatomic) long long historyRecardDays; // @synthesize historyRecardDays=_historyRecardDays;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderFeedGroup *feedGroup; // @synthesize feedGroup=_feedGroup;
@property(nonatomic) __weak id <WCFinderHistoryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteFeed:(id)arg1;
- (void)clear;
- (void)updateHistoryRecardDays:(long long)arg1;
- (void)startRequest;
@property(readonly, nonatomic) NSString *noMoreTips;
- (int)scene;
@property(readonly, nonatomic) WCFinderFeedArray *feedArray;
- (id)init;

@end

