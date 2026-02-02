//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveContentVM, MMFinderProfileLiveNoticeContext, NSData, NSMutableArray, NSString, WCFinderContact, WCFinderLiveNoticCardParams, WCFinderMemberCollectionInfo, WCFinderMemberShipIntroducePushParams;
@protocol WCFinderMemberShipZoneIntroduceHeaderDataDelegate;

@interface WCFinderMemberShipZoneIntroduceHeaderData : NSObject
{
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
    _Bool _isAuthor;
    _Bool _autoRenewSwitch;
    NSString *_zoneTitle;
    NSString *_zoneDesc;
    NSString *_memberBenefitsURL;
    unsigned long long _memberPrice;
    unsigned long long _autoMemberPrice;
    NSMutableArray *_feedContentVMs;
    NSMutableArray *_playbackContentVMs;
    NSMutableArray *_activityContentVMs;
    unsigned long long _otherVideoNum;
    unsigned long long _otherLiveNum;
    unsigned long long _totalActivityNum;
    NSString *_nickName;
    NSString *_billNo;
    NSData *_respBuff;
    unsigned long long _videoShortNum;
    unsigned long long _liveShortNum;
    unsigned long long _previewVideoLastUpdateTime;
    unsigned long long _previewLiveLastUpdateTime;
    MMFinderLiveContentVM *_livingContentVM;
    WCFinderLiveNoticCardParams *_liveNoticeParams;
    WCFinderMemberShipIntroducePushParams *_pushParams;
    id <WCFinderMemberShipZoneIntroduceHeaderDataDelegate> _delegate;
    NSMutableArray *_moreVideoPreviewThumbURLArray;
    NSMutableArray *_moreLivePreviewThumbURLArray;
    NSData *_videoShortLastBuffer;
    NSData *_liveShortLastBuffer;
    WCFinderMemberCollectionInfo *_memberCollectionInfo;
    NSMutableArray *_statisticalInfoList;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableArray *statisticalInfoList; // @synthesize statisticalInfoList=_statisticalInfoList;
@property(retain, nonatomic) WCFinderMemberCollectionInfo *memberCollectionInfo; // @synthesize memberCollectionInfo=_memberCollectionInfo;
@property(retain, nonatomic) NSData *liveShortLastBuffer; // @synthesize liveShortLastBuffer=_liveShortLastBuffer;
@property(retain, nonatomic) NSData *videoShortLastBuffer; // @synthesize videoShortLastBuffer=_videoShortLastBuffer;
@property(nonatomic) _Bool autoRenewSwitch; // @synthesize autoRenewSwitch=_autoRenewSwitch;
@property(retain, nonatomic) NSMutableArray *moreLivePreviewThumbURLArray; // @synthesize moreLivePreviewThumbURLArray=_moreLivePreviewThumbURLArray;
@property(retain, nonatomic) NSMutableArray *moreVideoPreviewThumbURLArray; // @synthesize moreVideoPreviewThumbURLArray=_moreVideoPreviewThumbURLArray;
@property(nonatomic) __weak id <WCFinderMemberShipZoneIntroduceHeaderDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderMemberShipIntroducePushParams *pushParams; // @synthesize pushParams=_pushParams;
@property(retain, nonatomic) WCFinderLiveNoticCardParams *liveNoticeParams; // @synthesize liveNoticeParams=_liveNoticeParams;
@property(retain, nonatomic) MMFinderLiveContentVM *livingContentVM; // @synthesize livingContentVM=_livingContentVM;
@property(nonatomic) unsigned long long previewLiveLastUpdateTime; // @synthesize previewLiveLastUpdateTime=_previewLiveLastUpdateTime;
@property(nonatomic) unsigned long long previewVideoLastUpdateTime; // @synthesize previewVideoLastUpdateTime=_previewVideoLastUpdateTime;
@property(nonatomic) unsigned long long liveShortNum; // @synthesize liveShortNum=_liveShortNum;
@property(nonatomic) unsigned long long videoShortNum; // @synthesize videoShortNum=_videoShortNum;
@property(retain, nonatomic) NSData *respBuff; // @synthesize respBuff=_respBuff;
@property(copy, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long totalActivityNum; // @synthesize totalActivityNum=_totalActivityNum;
@property(nonatomic) unsigned long long otherLiveNum; // @synthesize otherLiveNum=_otherLiveNum;
@property(nonatomic) unsigned long long otherVideoNum; // @synthesize otherVideoNum=_otherVideoNum;
@property(retain, nonatomic) NSMutableArray *activityContentVMs; // @synthesize activityContentVMs=_activityContentVMs;
@property(retain, nonatomic) NSMutableArray *playbackContentVMs; // @synthesize playbackContentVMs=_playbackContentVMs;
@property(retain, nonatomic) NSMutableArray *feedContentVMs; // @synthesize feedContentVMs=_feedContentVMs;
@property(nonatomic) unsigned long long autoMemberPrice; // @synthesize autoMemberPrice=_autoMemberPrice;
@property(nonatomic) unsigned long long memberPrice; // @synthesize memberPrice=_memberPrice;
@property(copy, nonatomic) NSString *memberBenefitsURL; // @synthesize memberBenefitsURL=_memberBenefitsURL;
@property(copy, nonatomic) NSString *zoneDesc; // @synthesize zoneDesc=_zoneDesc;
@property(copy, nonatomic) NSString *zoneTitle; // @synthesize zoneTitle=_zoneTitle;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(_Bool)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
@property(readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
- (void)doNotifyChanged;
- (void)notifyChanged;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

