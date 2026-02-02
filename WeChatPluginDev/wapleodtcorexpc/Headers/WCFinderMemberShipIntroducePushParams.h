//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WCFinderMemberShipIntroducePushParams : NSObject
{
    _Bool _showsMoreNoticesAutomatically;
    _Bool _showsNoticeToastAutomatically;
    _Bool _unableShowLiveMinimizeWindow;
    _Bool _isPreviewMode;
    unsigned int _profileEnterType;
    NSString *_finderUsername;
    long long _qrcodeScene;
    NSString *_liveNoticeEncryptedId;
    NSString *_promoterToken;
    double _timeoutIntervalForShowingMoreNoticesAutomatically;
    NSString *_redirectFeedID;
    unsigned long long _entranceSource;
    NSNumber *_fromSourceSceneForReport;
}

+ (id)paramWithUsername:(id)arg1 redirectFeedID:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *fromSourceSceneForReport; // @synthesize fromSourceSceneForReport=_fromSourceSceneForReport;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) _Bool unableShowLiveMinimizeWindow; // @synthesize unableShowLiveMinimizeWindow=_unableShowLiveMinimizeWindow;
@property(nonatomic) unsigned long long entranceSource; // @synthesize entranceSource=_entranceSource;
@property(copy, nonatomic) NSString *redirectFeedID; // @synthesize redirectFeedID=_redirectFeedID;
@property(nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically; // @synthesize timeoutIntervalForShowingMoreNoticesAutomatically=_timeoutIntervalForShowingMoreNoticesAutomatically;
@property(nonatomic) _Bool showsNoticeToastAutomatically; // @synthesize showsNoticeToastAutomatically=_showsNoticeToastAutomatically;
@property(nonatomic) _Bool showsMoreNoticesAutomatically; // @synthesize showsMoreNoticesAutomatically=_showsMoreNoticesAutomatically;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(nonatomic) long long qrcodeScene; // @synthesize qrcodeScene=_qrcodeScene;
@property(nonatomic) unsigned int profileEnterType; // @synthesize profileEnterType=_profileEnterType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (_Bool)isAuthor;

@end

