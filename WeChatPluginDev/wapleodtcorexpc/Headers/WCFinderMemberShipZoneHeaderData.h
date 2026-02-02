//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveContentVM, MMFinderProfileLiveNoticeContext, NSMutableArray, NSString, WCFinderContact, WCFinderLiveNoticCardParams, WCFinderMemberShipZonePushParams;
@protocol WCFinderMemberShipZoneHeaderDataDelegate;

@interface WCFinderMemberShipZoneHeaderData : NSObject
{
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
    _Bool _isAuthor;
    _Bool _allowPost;
    _Bool _allowLive;
    _Bool _allowActivity;
    _Bool _isBlocked;
    NSString *_title;
    NSString *_zoneDesc;
    NSString *_memberBenefitsURL;
    unsigned long long _memberCount;
    WCFinderContact *_contact;
    NSMutableArray *_statisticalInfoList;
    MMFinderLiveContentVM *_livingContentVM;
    WCFinderLiveNoticCardParams *_liveNoticeParams;
    WCFinderMemberShipZonePushParams *_pushParams;
    id <WCFinderMemberShipZoneHeaderDataDelegate> _delegate;
    NSString *_memberCenterURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(copy, nonatomic) NSString *memberCenterURL; // @synthesize memberCenterURL=_memberCenterURL;
@property(nonatomic) _Bool allowActivity; // @synthesize allowActivity=_allowActivity;
@property(nonatomic) __weak id <WCFinderMemberShipZoneHeaderDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderMemberShipZonePushParams *pushParams; // @synthesize pushParams=_pushParams;
@property(retain, nonatomic) WCFinderLiveNoticCardParams *liveNoticeParams; // @synthesize liveNoticeParams=_liveNoticeParams;
@property(retain, nonatomic) MMFinderLiveContentVM *livingContentVM; // @synthesize livingContentVM=_livingContentVM;
@property(retain, nonatomic) NSMutableArray *statisticalInfoList; // @synthesize statisticalInfoList=_statisticalInfoList;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) _Bool allowLive; // @synthesize allowLive=_allowLive;
@property(nonatomic) _Bool allowPost; // @synthesize allowPost=_allowPost;
@property(copy, nonatomic) NSString *memberBenefitsURL; // @synthesize memberBenefitsURL=_memberBenefitsURL;
@property(copy, nonatomic) NSString *zoneDesc; // @synthesize zoneDesc=_zoneDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(_Bool)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
@property(readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
- (void)doNotifyChanged;
- (void)notifyChanged;
- (_Bool)isEqualToHeaderData:(id)arg1;
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

