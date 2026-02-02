//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WCDataItem;

@interface WCSetting : NSObject
{
    NSString *groupListMD5;
    NSString *groupRecommendListMD5;
    long long postPrivacy;
    NSMutableArray *lastPostGroupIDs;
    NSMutableArray *lastPostVisibleLabelName;
    NSMutableArray *lastPostInVisibleLabelName;
    unsigned int lastShareOptions;
    WCDataItem *lastDataItem;
    int unReadCount;
    unsigned int timelineShowFlag;
    int postMentionLimit;
    int postTogetherLimit;
    int pasteLengthLimit;
    _Bool hasShowPlainTextTip;
    int firstPageCount;
    int nextPageCount;
    int educationTipShowCount;
    int groupTransferRetryCount;
    NSMutableArray *arrNeedTransferGroup;
    NSMutableArray *arrLabelName;
    NSData *dataSession;
    NSData *adDetailSession;
    int snsRedEnvelopesFullScreenTipShowCount;
    _Bool enableBrowseSnsRedEnvelopes;
    int switchOpCountForSnsRedEnvelopes;
    int postFeedCountForSnsRedEnvelopes;
    NSString *maxPostFeedCountId;
    int goldenCameraTipShowCount;
    NSString *goldenCameraTipId;
    NSString *fullScreenShowTipId;
    _Bool hasShowSnsPrivacyFullScreenGuide;
    _Bool hasShowSnsCommitDragTip;
    NSMutableDictionary *dicIgnoreNotificationFeedId;
    NSRecursiveLock *ignoreNtfLock;
    _Bool _hasShowHotVideoTip;
    _Bool _hasShowHotImageTip;
    int groupTransferCount;
    int _tiger2022PostStatus;
    int _tiger2022SourceStatus;
    unsigned int _timelineFoldSectionSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int timelineFoldSectionSize; // @synthesize timelineFoldSectionSize=_timelineFoldSectionSize;
@property(nonatomic) _Bool hasShowHotImageTip; // @synthesize hasShowHotImageTip=_hasShowHotImageTip;
@property(nonatomic) _Bool hasShowHotVideoTip; // @synthesize hasShowHotVideoTip=_hasShowHotVideoTip;
@property(nonatomic) int tiger2022SourceStatus; // @synthesize tiger2022SourceStatus=_tiger2022SourceStatus;
@property(nonatomic) int tiger2022PostStatus; // @synthesize tiger2022PostStatus=_tiger2022PostStatus;
@property(retain, nonatomic) NSMutableDictionary *dicIgnoreNotificationFeedId; // @synthesize dicIgnoreNotificationFeedId;
@property(nonatomic) _Bool hasShowSnsCommitDragTip; // @synthesize hasShowSnsCommitDragTip;
@property(nonatomic) _Bool hasShowSnsPrivacyFullScreenGuide; // @synthesize hasShowSnsPrivacyFullScreenGuide;
@property(retain, nonatomic) NSString *fullScreenShowTipId; // @synthesize fullScreenShowTipId;
@property(retain, nonatomic) NSString *goldenCameraTipId; // @synthesize goldenCameraTipId;
@property(nonatomic) int goldenCameraTipShowCount; // @synthesize goldenCameraTipShowCount;
@property(retain, nonatomic) NSString *maxPostFeedCountId; // @synthesize maxPostFeedCountId;
@property(nonatomic) int postFeedCountForSnsRedEnvelopes; // @synthesize postFeedCountForSnsRedEnvelopes;
@property(nonatomic) int switchOpCountForSnsRedEnvelopes; // @synthesize switchOpCountForSnsRedEnvelopes;
@property(nonatomic) _Bool enableBrowseSnsRedEnvelopes; // @synthesize enableBrowseSnsRedEnvelopes;
@property(nonatomic) int snsRedEnvelopesFullScreenTipShowCount; // @synthesize snsRedEnvelopesFullScreenTipShowCount;
@property(retain, nonatomic) NSData *adDetailSession; // @synthesize adDetailSession;
@property(retain, nonatomic) NSMutableArray *arrLabelName; // @synthesize arrLabelName;
@property(retain, nonatomic) NSMutableArray *arrNeedTransferGroup; // @synthesize arrNeedTransferGroup;
@property(nonatomic) int groupTransferCount; // @synthesize groupTransferCount;
@property(retain, nonatomic) NSData *dataSession; // @synthesize dataSession;
@property(nonatomic) int educationTipShowCount; // @synthesize educationTipShowCount;
@property(nonatomic) int nextPageCount; // @synthesize nextPageCount;
@property(nonatomic) int firstPageCount; // @synthesize firstPageCount;
@property(nonatomic) _Bool hasShowPlainTextTip; // @synthesize hasShowPlainTextTip;
@property(nonatomic) int pasteLengthLimit; // @synthesize pasteLengthLimit;
@property(nonatomic) int postTogetherLimit; // @synthesize postTogetherLimit;
@property(nonatomic) int postMentionLimit; // @synthesize postMentionLimit;
@property(nonatomic) unsigned int timelineShowFlag; // @synthesize timelineShowFlag;
@property(nonatomic) int unReadCount; // @synthesize unReadCount;
@property(retain, nonatomic) WCDataItem *lastDataItem; // @synthesize lastDataItem;
@property(nonatomic) unsigned int lastShareOptions; // @synthesize lastShareOptions;
@property(retain, nonatomic) NSMutableArray *lastPostInVisibleLabelName; // @synthesize lastPostInVisibleLabelName;
@property(retain, nonatomic) NSMutableArray *lastPostVisibleLabelName; // @synthesize lastPostVisibleLabelName;
@property(retain, nonatomic) NSMutableArray *lastPostGroupIDs; // @synthesize lastPostGroupIDs;
@property(nonatomic) long long postPrivacy; // @synthesize postPrivacy;
@property(retain, nonatomic) NSString *groupRecommendListMD5; // @synthesize groupRecommendListMD5;
@property(retain, nonatomic) NSString *groupListMD5; // @synthesize groupListMD5;
- (void)removeIgnoreNotificationFeedId:(id)arg1;
- (void)addIgnoreNotificationFeedId:(id)arg1;
- (_Bool)isIgnoreNotificationFeedIdExist:(id)arg1;
- (_Bool)hasNeedTransferGroup;
- (void)unEnableTransferGroup;
- (_Bool)shouldTransferGroup;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

