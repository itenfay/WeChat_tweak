//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMemberShipZonePushParams : NSObject
{
    _Bool _showsMoreNoticesAutomatically;
    _Bool _showHalfScreen;
    _Bool _unableShowLiveMinimizeWindow;
    _Bool _isPreviewMode;
    unsigned int _profileEnterType;
    NSString *_finderUsername;
    long long _qrcodeScene;
    NSString *_liveNoticeEncryptedId;
    NSString *_promoterToken;
    double _timeoutIntervalForShowingMoreNoticesAutomatically;
    NSString *_adParamInfoStr;
    NSString *_redirectFeedID;
    unsigned long long _entranceSource;
    unsigned long long _tabType;
}

+ (id)paramWithUsername:(id)arg1 redirectFeedID:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long entranceSource; // @synthesize entranceSource=_entranceSource;
@property(nonatomic) _Bool unableShowLiveMinimizeWindow; // @synthesize unableShowLiveMinimizeWindow=_unableShowLiveMinimizeWindow;
@property(nonatomic) _Bool showHalfScreen; // @synthesize showHalfScreen=_showHalfScreen;
@property(copy, nonatomic) NSString *redirectFeedID; // @synthesize redirectFeedID=_redirectFeedID;
@property(copy, nonatomic) NSString *adParamInfoStr; // @synthesize adParamInfoStr=_adParamInfoStr;
@property(nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically; // @synthesize timeoutIntervalForShowingMoreNoticesAutomatically=_timeoutIntervalForShowingMoreNoticesAutomatically;
@property(nonatomic) _Bool showsMoreNoticesAutomatically; // @synthesize showsMoreNoticesAutomatically=_showsMoreNoticesAutomatically;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(nonatomic) long long qrcodeScene; // @synthesize qrcodeScene=_qrcodeScene;
@property(nonatomic) unsigned int profileEnterType; // @synthesize profileEnterType=_profileEnterType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (_Bool)isAuthor;

@end

