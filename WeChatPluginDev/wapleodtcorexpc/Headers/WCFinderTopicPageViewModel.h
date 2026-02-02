//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderTopicBgmInfo, NSData, NSMutableArray, NSString, WCFinderEventTabInfo, WCFinderTopicInfo;
@protocol WCFinderTopicPageViewModelDelegate;

@interface WCFinderTopicPageViewModel : NSObject
{
    _Bool _continueFlag;
    int _commentScene;
    int _topicType;
    int _tabType;
    int _fromType;
    id <WCFinderTopicPageViewModelDelegate> _delegate;
    NSMutableArray *_contentVMArray;
    unsigned long long _refreshTime;
    NSString *_topicTitle;
    WCFinderTopicInfo *_topicInfo;
    FinderTopicBgmInfo *_bgmInfo;
    WCFinderEventTabInfo *_tabInfo;
    unsigned long long _filterIndex;
    unsigned long long _state;
    NSString *_encryptedTopicId;
    NSString *_refObjectId;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    NSData *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(retain, nonatomic) WCFinderEventTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) __weak id <WCFinderTopicPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getReportMusicType;
- (id)genTopicPageTagTitle;
- (id)streamReportPageTag;
- (id)filterInfo;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (id)generateTopicListDetailViewModel;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (id)initWithTopicParams:(id)arg1 tabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 commentScene:(int)arg4;

@end

