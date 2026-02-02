//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLandScapePushParams : NSObject
{
    _Bool _forbidCheckLimitMode;
    _Bool _isInsideFinder;
    _Bool _needPausePlayWhenViewWillDisappear;
    _Bool _canShowContinuePlayTips;
    _Bool _ignoreUpdateContextId;
    _Bool _allowScaleAspectFit;
    _Bool _landScapeViewPreFetchContinuePlayFeed;
    _Bool _enterFromMinimize;
    int _getRelatedListScene;
    NSString *_reportExtraInfo;
    NSString *_firstFeedSessionBuf;
    long long _autoMinimizeValue;
    long long _autoPip;
    NSString *_playSessionId;
    NSString *_fromSessionId;
}

+ (id)createWithReportExtraInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromSessionId; // @synthesize fromSessionId=_fromSessionId;
@property(nonatomic) int getRelatedListScene; // @synthesize getRelatedListScene=_getRelatedListScene;
@property(retain, nonatomic) NSString *playSessionId; // @synthesize playSessionId=_playSessionId;
@property(nonatomic) long long autoPip; // @synthesize autoPip=_autoPip;
@property(nonatomic) _Bool enterFromMinimize; // @synthesize enterFromMinimize=_enterFromMinimize;
@property(nonatomic) long long autoMinimizeValue; // @synthesize autoMinimizeValue=_autoMinimizeValue;
@property(nonatomic) _Bool landScapeViewPreFetchContinuePlayFeed; // @synthesize landScapeViewPreFetchContinuePlayFeed=_landScapeViewPreFetchContinuePlayFeed;
@property(nonatomic) _Bool allowScaleAspectFit; // @synthesize allowScaleAspectFit=_allowScaleAspectFit;
@property(nonatomic) _Bool ignoreUpdateContextId; // @synthesize ignoreUpdateContextId=_ignoreUpdateContextId;
@property(nonatomic) _Bool canShowContinuePlayTips; // @synthesize canShowContinuePlayTips=_canShowContinuePlayTips;
@property(nonatomic) _Bool needPausePlayWhenViewWillDisappear; // @synthesize needPausePlayWhenViewWillDisappear=_needPausePlayWhenViewWillDisappear;
@property(copy, nonatomic) NSString *firstFeedSessionBuf; // @synthesize firstFeedSessionBuf=_firstFeedSessionBuf;
@property(nonatomic) _Bool isInsideFinder; // @synthesize isInsideFinder=_isInsideFinder;
@property(nonatomic) _Bool forbidCheckLimitMode; // @synthesize forbidCheckLimitMode=_forbidCheckLimitMode;
@property(copy, nonatomic) NSString *reportExtraInfo; // @synthesize reportExtraInfo=_reportExtraInfo;
@property(readonly, nonatomic) _Bool autoVideoMinimize;
@property(readonly, nonatomic) _Bool autoStaticMinimize;
@property(readonly, nonatomic) _Bool autoMinimize;
- (id)init;

@end

