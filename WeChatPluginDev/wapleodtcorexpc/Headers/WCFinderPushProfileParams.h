//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMention_FinderMentionThankInfo_RedPackageInfo, NSDictionary, NSString, UIView, UIViewController, WCFinderDataItem, WCFinderJustWatchCollectionFeedItem, WCFinderJustWatchFeedInfo, WCFinderProfilePreloadInfo, WCFinderShareEntranceMessageInfo;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderPushProfileParams : NSObject
{
    _Bool _isNotRefFeedAuthor;
    _Bool _isAvatarLivingShowing;
    _Bool _fromEventDescriptionContact;
    _Bool _fromOtherBusiness;
    _Bool _showsMoreNoticesAutomatically;
    _Bool _showHalfScreen;
    _Bool _halfShowBgMask;
    _Bool _isInsideFinderCallJsapi;
    _Bool _forbidenRecursiveSameContactJump;
    int _reportScene;
    unsigned int _enterType;
    int _selectedTab;
    int _creatorPageWordingType;
    int _fromFeedScene;
    unsigned int _followScene;
    NSString *_feedID;
    NSString *_nonceID;
    unsigned long long _cardType;
    NSString *_adParamInfoStr;
    NSString *_commentAdInfo;
    unsigned long long _enterScene;
    unsigned long long _avatarType;
    NSString *_refPageType;
    unsigned long long _streamEntranceType;
    NSString *_otherBusinessExtraInfo;
    NSString *_enterSourceFeedID;
    long long _qrcodeScene;
    NSString *_qrCodeURL;
    NSString *_liveNoticeEncryptedId;
    NSString *_promoterToken;
    double _timeoutIntervalForShowingMoreNoticesAutomatically;
    UIView *_bgResponder;
    NSString *_redPacketLinkUrl;
    NSString *_redPacketCoverId;
    long long _redPacketJumpFrom;
    NSString *_searchWord;
    NSString *_fromLiveId;
    NSString *_fromScene;
    UIViewController<WCFinderFeedBaseViewControllerProtocol> *_fromVC;
    NSString *_fromUsername;
    NSString *_talkerName;
    NSString *_customViewerName;
    WCFinderJustWatchCollectionFeedItem *_justWatchCollectionFeedItem;
    NSString *_ecSource;
    WCFinderShareEntranceMessageInfo *_entranceMessageInfo;
    NSString *_noticeJumperAdReportInfo;
    NSString *_livingJumperAdReportInfo;
    NSString *_creatorCenterWording;
    NSString *_creatorCenterWordingJumpUrl;
    NSDictionary *_enterPageUdfKv;
    WCFinderDataItem *_fromDataItem;
    WCFinderProfilePreloadInfo *_preloadInfo;
    NSDictionary *_businessByPass;
    FinderMention_FinderMentionThankInfo_RedPackageInfo *_mentionThanksRedpackageInfo;
    NSDictionary *_additionalClientUdfKV;
    WCFinderJustWatchFeedInfo *_jumpFeedInfo;
    CDUnknownBlockType _profileCloseCallback;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType profileCloseCallback; // @synthesize profileCloseCallback=_profileCloseCallback;
@property(retain, nonatomic) WCFinderJustWatchFeedInfo *jumpFeedInfo; // @synthesize jumpFeedInfo=_jumpFeedInfo;
@property(copy, nonatomic) NSDictionary *additionalClientUdfKV; // @synthesize additionalClientUdfKV=_additionalClientUdfKV;
@property(retain, nonatomic) FinderMention_FinderMentionThankInfo_RedPackageInfo *mentionThanksRedpackageInfo; // @synthesize mentionThanksRedpackageInfo=_mentionThanksRedpackageInfo;
@property(copy, nonatomic) NSDictionary *businessByPass; // @synthesize businessByPass=_businessByPass;
@property(retain, nonatomic) WCFinderProfilePreloadInfo *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(nonatomic) unsigned int followScene; // @synthesize followScene=_followScene;
@property(nonatomic) int fromFeedScene; // @synthesize fromFeedScene=_fromFeedScene;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(copy, nonatomic) NSDictionary *enterPageUdfKv; // @synthesize enterPageUdfKv=_enterPageUdfKv;
@property(retain, nonatomic) NSString *creatorCenterWordingJumpUrl; // @synthesize creatorCenterWordingJumpUrl=_creatorCenterWordingJumpUrl;
@property(retain, nonatomic) NSString *creatorCenterWording; // @synthesize creatorCenterWording=_creatorCenterWording;
@property(nonatomic) int creatorPageWordingType; // @synthesize creatorPageWordingType=_creatorPageWordingType;
@property(retain, nonatomic) NSString *livingJumperAdReportInfo; // @synthesize livingJumperAdReportInfo=_livingJumperAdReportInfo;
@property(retain, nonatomic) NSString *noticeJumperAdReportInfo; // @synthesize noticeJumperAdReportInfo=_noticeJumperAdReportInfo;
@property(retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo; // @synthesize entranceMessageInfo=_entranceMessageInfo;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(nonatomic) _Bool forbidenRecursiveSameContactJump; // @synthesize forbidenRecursiveSameContactJump=_forbidenRecursiveSameContactJump;
@property(nonatomic) _Bool isInsideFinderCallJsapi; // @synthesize isInsideFinderCallJsapi=_isInsideFinderCallJsapi;
@property(retain, nonatomic) WCFinderJustWatchCollectionFeedItem *justWatchCollectionFeedItem; // @synthesize justWatchCollectionFeedItem=_justWatchCollectionFeedItem;
@property(copy, nonatomic) NSString *customViewerName; // @synthesize customViewerName=_customViewerName;
@property(copy, nonatomic) NSString *talkerName; // @synthesize talkerName=_talkerName;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(nonatomic) __weak UIViewController<WCFinderFeedBaseViewControllerProtocol> *fromVC; // @synthesize fromVC=_fromVC;
@property(copy, nonatomic) NSString *fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSString *fromLiveId; // @synthesize fromLiveId=_fromLiveId;
@property(retain, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(nonatomic) int selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) long long redPacketJumpFrom; // @synthesize redPacketJumpFrom=_redPacketJumpFrom;
@property(retain, nonatomic) NSString *redPacketCoverId; // @synthesize redPacketCoverId=_redPacketCoverId;
@property(retain, nonatomic) NSString *redPacketLinkUrl; // @synthesize redPacketLinkUrl=_redPacketLinkUrl;
@property(nonatomic) __weak UIView *bgResponder; // @synthesize bgResponder=_bgResponder;
@property(nonatomic) _Bool halfShowBgMask; // @synthesize halfShowBgMask=_halfShowBgMask;
@property(nonatomic) _Bool showHalfScreen; // @synthesize showHalfScreen=_showHalfScreen;
@property(nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically; // @synthesize timeoutIntervalForShowingMoreNoticesAutomatically=_timeoutIntervalForShowingMoreNoticesAutomatically;
@property(nonatomic) _Bool showsMoreNoticesAutomatically; // @synthesize showsMoreNoticesAutomatically=_showsMoreNoticesAutomatically;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(copy, nonatomic) NSString *qrCodeURL; // @synthesize qrCodeURL=_qrCodeURL;
@property(nonatomic) long long qrcodeScene; // @synthesize qrcodeScene=_qrcodeScene;
@property(copy, nonatomic) NSString *enterSourceFeedID; // @synthesize enterSourceFeedID=_enterSourceFeedID;
@property(copy, nonatomic) NSString *otherBusinessExtraInfo; // @synthesize otherBusinessExtraInfo=_otherBusinessExtraInfo;
@property(nonatomic, getter=isFromOtherBusiness) _Bool fromOtherBusiness; // @synthesize fromOtherBusiness=_fromOtherBusiness;
@property(nonatomic) _Bool fromEventDescriptionContact; // @synthesize fromEventDescriptionContact=_fromEventDescriptionContact;
@property(nonatomic) unsigned long long streamEntranceType; // @synthesize streamEntranceType=_streamEntranceType;
@property(retain, nonatomic) NSString *refPageType; // @synthesize refPageType=_refPageType;
@property(nonatomic) _Bool isAvatarLivingShowing; // @synthesize isAvatarLivingShowing=_isAvatarLivingShowing;
@property(nonatomic) unsigned long long avatarType; // @synthesize avatarType=_avatarType;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *commentAdInfo; // @synthesize commentAdInfo=_commentAdInfo;
@property(copy, nonatomic) NSString *adParamInfoStr; // @synthesize adParamInfoStr=_adParamInfoStr;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) _Bool isNotRefFeedAuthor; // @synthesize isNotRefFeedAuthor=_isNotRefFeedAuthor;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
- (void)setupLiveAdditionalUdfKVToDataItem:(id)arg1 enterSessionId:(unsigned long long)arg2;
- (void)setupPoiJumpToFeed:(id)arg1;
- (void)setupShowJustWatchToFeed:(id)arg1 sessionBuffer:(id)arg2;
- (id)copy;
- (id)init;

@end

