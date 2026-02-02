//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString, WCFinderDataItem;

@interface BTFinderLiveItemViewModel
{
    _Bool _updateDataItemFinished;
    NSString *_mediaUrl;
    NSData *_joinLiveBuffer;
    unsigned long long _autoPlayStartTs;
    unsigned long long _exposeStartTs;
    unsigned long long _validRatioExposeStartTs;
    CDUnknownBlockType _liveEndAction;
    WCFinderDataItem *_dataItem;
    NSMutableArray *_completions;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool updateDataItemFinished; // @synthesize updateDataItemFinished=_updateDataItemFinished;
@property(copy, nonatomic) CDUnknownBlockType liveEndAction; // @synthesize liveEndAction=_liveEndAction;
@property(nonatomic) unsigned long long validRatioExposeStartTs; // @synthesize validRatioExposeStartTs=_validRatioExposeStartTs;
@property(nonatomic) unsigned long long exposeStartTs; // @synthesize exposeStartTs=_exposeStartTs;
@property(nonatomic) unsigned long long autoPlayStartTs; // @synthesize autoPlayStartTs=_autoPlayStartTs;
@property(retain, nonatomic) NSData *joinLiveBuffer; // @synthesize joinLiveBuffer=_joinLiveBuffer;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
- (void)onLiveTaskUpdateStatus:(id)arg1;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (_Bool)enableAutoPlay;
- (_Bool)canShowTagView;
- (id)finderExportId;
- (void)getFinderDataItem:(CDUnknownBlockType)arg1;
- (void)updateFinderDataItem;
- (id)initWithBTRecommendFinderData:(id)arg1;

@end

