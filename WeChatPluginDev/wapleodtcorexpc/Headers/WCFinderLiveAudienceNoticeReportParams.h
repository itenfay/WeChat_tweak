//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, NSString;

@interface WCFinderLiveAudienceNoticeReportParams : NSObject
{
    _Bool _brandActionContain;
    _Bool _noticeActionContain;
    _Bool _noticeSceneContain;
    _Bool _fromSceneContain;
    _Bool _reserveOrUnreserveForAll;
    _Bool _reportProfileExposeOnlyOnceForInstance;
    _Bool _useDefaultADData;
    _Bool _clearADDataAfterReportForBook;
    _Bool _isFromDetailNotice;
    NSString *_finderUsername;
    NSString *_refPageType;
    FinderLiveNoticeInfo *_noticeInfo;
    NSString *_commentScene;
    NSString *_idOfCouponBindToNotice;
    unsigned long long _brandAction;
    long long _noticeAction;
    long long _noticeScene;
    long long _fromScene;
    NSString *_feedAdReportInfo;
    NSString *_fromFeedID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromFeedID; // @synthesize fromFeedID=_fromFeedID;
@property(copy, nonatomic) NSString *feedAdReportInfo; // @synthesize feedAdReportInfo=_feedAdReportInfo;
@property(nonatomic) _Bool isFromDetailNotice; // @synthesize isFromDetailNotice=_isFromDetailNotice;
@property(nonatomic) _Bool clearADDataAfterReportForBook; // @synthesize clearADDataAfterReportForBook=_clearADDataAfterReportForBook;
@property(nonatomic) _Bool useDefaultADData; // @synthesize useDefaultADData=_useDefaultADData;
@property(nonatomic) _Bool reportProfileExposeOnlyOnceForInstance; // @synthesize reportProfileExposeOnlyOnceForInstance=_reportProfileExposeOnlyOnceForInstance;
@property(nonatomic) _Bool reserveOrUnreserveForAll; // @synthesize reserveOrUnreserveForAll=_reserveOrUnreserveForAll;
@property(nonatomic) long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool fromSceneContain; // @synthesize fromSceneContain=_fromSceneContain;
@property(nonatomic) long long noticeScene; // @synthesize noticeScene=_noticeScene;
@property(nonatomic) _Bool noticeSceneContain; // @synthesize noticeSceneContain=_noticeSceneContain;
@property(nonatomic) long long noticeAction; // @synthesize noticeAction=_noticeAction;
@property(nonatomic) _Bool noticeActionContain; // @synthesize noticeActionContain=_noticeActionContain;
@property(nonatomic) unsigned long long brandAction; // @synthesize brandAction=_brandAction;
@property(nonatomic) _Bool brandActionContain; // @synthesize brandActionContain=_brandActionContain;
@property(copy, nonatomic) NSString *idOfCouponBindToNotice; // @synthesize idOfCouponBindToNotice=_idOfCouponBindToNotice;
@property(copy, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(copy, nonatomic) NSString *refPageType; // @synthesize refPageType=_refPageType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(readonly, copy, nonatomic) CDUnknownBlockType fromFeedID_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType feedAdReportInfo_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType isFromDetailNotice_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearADDataAfterReportForBook_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType useDefaultADData_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType reportProfileExposeOnlyOnceForInstance_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType reserveOrUnreserveForAll_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType fromScene_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType noticeScene_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType noticeAction_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType brandAction_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType idOfCouponBindToNotice_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType commentScene_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType noticeInfo_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType refPageType_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType finderUsername_link;

@end

