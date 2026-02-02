//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSMutableArray, NSString;
@protocol WCFinderProfileMJTempPageModelDelegate;

@interface WCFinderProfileMJTempPageModel
{
    _Bool _hasMore;
    _Bool _hasError;
    _Bool _isLoading;
    unsigned long long _refreshTime;
    id <WCFinderProfileMJTempPageModelDelegate> _delegate;
    NSString *_username;
    NSMutableArray *_mutContentVMS;
    NSData *_lastBuff;
}

+ (int)tabId;
+ (id)overviewSectionTypes;
+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *mutContentVMS; // @synthesize mutContentVMS=_mutContentVMS;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <WCFinderProfileMJTempPageModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (id)reportParamsBlock;
- (void)_requestData:(_Bool)arg1;
- (void)requestNextPage;
- (void)requestFirstPage;
- (_Bool)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;
@property(readonly, nonatomic) NSArray *contentVMS;
- (id)init;
- (void)requestPageData;
- (void)_updateOverviewSection:(long long)arg1 templates:(id)arg2;

@end

