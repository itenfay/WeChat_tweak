//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderJumpInfo_Html5Info, FinderJumpInfo_NativeInfo, NSData, NSString;

@interface MMFinderLiveBannerInfo : NSObject
{
    _Bool _needPreload;
    unsigned int _reportSwitch;
    unsigned int _reportNewCgi;
    unsigned int _jumpinfoType;
    unsigned int _businessType;
    unsigned int _supportShare;
    unsigned int _extType;
    unsigned int _activitySwitchDisplayInterval;
    unsigned int _actionType;
    unsigned int _remainClickTimes;
    unsigned long long _bizType;
    NSString *_iconUrl;
    NSString *_wording;
    NSString *_extInfo;
    FinderJumpInfo_Html5Info *_html5Info;
    FinderJumpInfo_NativeInfo *_nativeInfo;
    NSData *_extBuf;
    FinderJumpInfo *_oriJumpInfo;
    NSString *_activityId;
    NSString *_actionUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int remainClickTimes; // @synthesize remainClickTimes=_remainClickTimes;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) unsigned int activitySwitchDisplayInterval; // @synthesize activitySwitchDisplayInterval=_activitySwitchDisplayInterval;
@property(retain, nonatomic) FinderJumpInfo *oriJumpInfo; // @synthesize oriJumpInfo=_oriJumpInfo;
@property(retain, nonatomic) NSData *extBuf; // @synthesize extBuf=_extBuf;
@property(nonatomic) unsigned int extType; // @synthesize extType=_extType;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(nonatomic) unsigned int supportShare; // @synthesize supportShare=_supportShare;
@property(retain, nonatomic) FinderJumpInfo_NativeInfo *nativeInfo; // @synthesize nativeInfo=_nativeInfo;
@property(retain, nonatomic) FinderJumpInfo_Html5Info *html5Info; // @synthesize html5Info=_html5Info;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int jumpinfoType; // @synthesize jumpinfoType=_jumpinfoType;
@property(nonatomic) unsigned int reportNewCgi; // @synthesize reportNewCgi=_reportNewCgi;
@property(nonatomic) unsigned int reportSwitch; // @synthesize reportSwitch=_reportSwitch;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (_Bool)updateWithBannerInfo:(id)arg1;
- (_Bool)updateSubTitleList:(id)arg1;
- (void)reportRealTimeClick:(id)arg1;
- (id)bannerId;
- (_Bool)isEqualBanner:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGiftWallBanner;
- (_Bool)isSearchBanner;
- (_Bool)isAnchorTaskBanner;
- (_Bool)isNotifyBanner;
- (_Bool)isMoreLiveBanner;
- (float)displayIntervalS;
- (id)extInfoModel;
- (void)copyFrom:(id)arg1;
- (id)initWithQuestActivityInfo:(id)arg1;
- (id)initWithJumpInfo:(id)arg1;

@end

