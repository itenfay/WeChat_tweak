//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, StreamTabTipsInfo, WCFinderAdReportInfo, WCFinderFullShareListTemplatePlugin, WCFinderPushFeedPlayParams, WCFinderPushFeedViewProductParams, WCFinderShareEntranceMessageInfo;
@protocol WCFinderFullShareListViewControllerDelegate;

@interface WCFinderPushFeedViewParams : NSObject
{
    _Bool _notGetReleatedList;
    _Bool _notShowFooterView;
    _Bool _notifyOnBack;
    _Bool _fromKeepHolder;
    _Bool _pauseDefault;
    _Bool _fromPhotoWall;
    _Bool _allowInfiniteTopPull;
    _Bool _needOpenJumpInfo;
    _Bool _ignoreUpdateContextId;
    _Bool _showScrollUpTips;
    NSString *_fromSessionId;
    CDUnknownBlockType _callBackBlock;
    CDUnknownBlockType _feedStopPlayCallback;
    CDUnknownBlockType _willBePodedCallBackBlock;
    NSString *_finderUserName;
    WCFinderAdReportInfo *_adReportInfo;
    CDUnknownBlockType _adRelatedSuccessBlock;
    long long _adJSAPIType;
    NSString *_rewardAdMarketingWord;
    long long _rewardAdCountdownTime;
    unsigned long long _ringSheetComponentFlag;
    NSString *_ringFriendName;
    unsigned long long _ringtoneFeedEnterType;
    NSString *_customTitle;
    CDUnknownBlockType _customCloseAction;
    WCFinderPushFeedPlayParams *_feedPlayParams;
    WCFinderFullShareListTemplatePlugin *_jsapiPlugin;
    NSString *_shareMsgSource;
    NSString *_shareMsgSvrID;
    NSString *_ecSource;
    WCFinderShareEntranceMessageInfo *_entranceMessageInfo;
    NSData *_shareBypData;
    StreamTabTipsInfo *_tabTipsInfo;
    WCFinderPushFeedViewProductParams *_productInfo;
    NSString *_tipsUuid;
    CDUnknownBlockType _pushCompletionBlock;
    id <WCFinderFullShareListViewControllerDelegate> _shareVCDelagate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showScrollUpTips; // @synthesize showScrollUpTips=_showScrollUpTips;
@property(nonatomic) _Bool ignoreUpdateContextId; // @synthesize ignoreUpdateContextId=_ignoreUpdateContextId;
@property(nonatomic) __weak id <WCFinderFullShareListViewControllerDelegate> shareVCDelagate; // @synthesize shareVCDelagate=_shareVCDelagate;
@property(copy, nonatomic) CDUnknownBlockType pushCompletionBlock; // @synthesize pushCompletionBlock=_pushCompletionBlock;
@property(copy, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
@property(retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) _Bool needOpenJumpInfo; // @synthesize needOpenJumpInfo=_needOpenJumpInfo;
@property(retain, nonatomic) StreamTabTipsInfo *tabTipsInfo; // @synthesize tabTipsInfo=_tabTipsInfo;
@property(retain, nonatomic) NSData *shareBypData; // @synthesize shareBypData=_shareBypData;
@property(retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo; // @synthesize entranceMessageInfo=_entranceMessageInfo;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(copy, nonatomic) NSString *shareMsgSvrID; // @synthesize shareMsgSvrID=_shareMsgSvrID;
@property(copy, nonatomic) NSString *shareMsgSource; // @synthesize shareMsgSource=_shareMsgSource;
@property(nonatomic) _Bool allowInfiniteTopPull; // @synthesize allowInfiniteTopPull=_allowInfiniteTopPull;
@property(retain, nonatomic) WCFinderFullShareListTemplatePlugin *jsapiPlugin; // @synthesize jsapiPlugin=_jsapiPlugin;
@property(retain, nonatomic) WCFinderPushFeedPlayParams *feedPlayParams; // @synthesize feedPlayParams=_feedPlayParams;
@property(nonatomic) _Bool fromPhotoWall; // @synthesize fromPhotoWall=_fromPhotoWall;
@property(copy, nonatomic) CDUnknownBlockType customCloseAction; // @synthesize customCloseAction=_customCloseAction;
@property(nonatomic) _Bool pauseDefault; // @synthesize pauseDefault=_pauseDefault;
@property(nonatomic) _Bool fromKeepHolder; // @synthesize fromKeepHolder=_fromKeepHolder;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) unsigned long long ringtoneFeedEnterType; // @synthesize ringtoneFeedEnterType=_ringtoneFeedEnterType;
@property(copy, nonatomic) NSString *ringFriendName; // @synthesize ringFriendName=_ringFriendName;
@property(nonatomic) unsigned long long ringSheetComponentFlag; // @synthesize ringSheetComponentFlag=_ringSheetComponentFlag;
@property(nonatomic) long long rewardAdCountdownTime; // @synthesize rewardAdCountdownTime=_rewardAdCountdownTime;
@property(copy, nonatomic) NSString *rewardAdMarketingWord; // @synthesize rewardAdMarketingWord=_rewardAdMarketingWord;
@property(nonatomic) long long adJSAPIType; // @synthesize adJSAPIType=_adJSAPIType;
@property(copy, nonatomic) CDUnknownBlockType adRelatedSuccessBlock; // @synthesize adRelatedSuccessBlock=_adRelatedSuccessBlock;
@property(retain, nonatomic) WCFinderAdReportInfo *adReportInfo; // @synthesize adReportInfo=_adReportInfo;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) CDUnknownBlockType willBePodedCallBackBlock; // @synthesize willBePodedCallBackBlock=_willBePodedCallBackBlock;
@property(copy, nonatomic) CDUnknownBlockType feedStopPlayCallback; // @synthesize feedStopPlayCallback=_feedStopPlayCallback;
@property(copy, nonatomic) CDUnknownBlockType callBackBlock; // @synthesize callBackBlock=_callBackBlock;
@property(nonatomic) _Bool notifyOnBack; // @synthesize notifyOnBack=_notifyOnBack;
@property(nonatomic) _Bool notShowFooterView; // @synthesize notShowFooterView=_notShowFooterView;
@property(copy, nonatomic) NSString *fromSessionId; // @synthesize fromSessionId=_fromSessionId;
@property(nonatomic) _Bool notGetReleatedList; // @synthesize notGetReleatedList=_notGetReleatedList;
@property(nonatomic) double startPlayVideoTime; // @dynamic startPlayVideoTime;

@end

