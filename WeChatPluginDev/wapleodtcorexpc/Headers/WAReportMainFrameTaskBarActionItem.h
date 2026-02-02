//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportMainFrameTaskBarActionItem
{
    unsigned int _openTime;
    unsigned int _appCountWhenOpen;
    unsigned int _appCountWhenClose;
    unsigned int _closeReason;
    unsigned int _scrollCount;
    unsigned int _deleteAppCount;
    unsigned int _whyDragMeCountWhenClose;
    unsigned int _starCountWhenOpen;
    unsigned int _starCountWhenClose;
    unsigned int _starScrollCount;
    unsigned int _deleteStarAppCount;
    unsigned int _moveStarToTopCount;
    unsigned int _addToStarAppCount;
    unsigned int _isFullScreen;
    unsigned int _moveStarToFrontCount;
    unsigned int _moveStarToAfterCount;
    unsigned int _slideUpDownCount;
    unsigned int _searchAppearCount;
    unsigned int _searchActiveCount;
    unsigned int _isUsingDynamicBackground;
    unsigned int _recentMaxShowLines;
    unsigned int _countPerLine;
    unsigned long long _duration;
    unsigned long long _lastStartTime;
    NSString *_openAppIdList;
    NSString *_deleteAppIdList;
    NSString *_openStarAppIdList;
    NSString *_deleteStarAppIdList;
    NSString *_appClickPositionList;
    NSString *_starAppClickPositionList;
    NSString *_moveStarToTopAppIdList;
    NSString *_addToStarAppIdList;
    NSString *_moveStarToFrontAppIdList;
    NSString *_moveStarToAfterAppIdList;
    unsigned long long _recentCurrentShowLines;
    NSString *_openSession;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *openSession; // @synthesize openSession=_openSession;
@property(nonatomic) unsigned int countPerLine; // @synthesize countPerLine=_countPerLine;
@property(nonatomic) unsigned long long recentCurrentShowLines; // @synthesize recentCurrentShowLines=_recentCurrentShowLines;
@property(nonatomic) unsigned int recentMaxShowLines; // @synthesize recentMaxShowLines=_recentMaxShowLines;
@property(nonatomic) unsigned int isUsingDynamicBackground; // @synthesize isUsingDynamicBackground=_isUsingDynamicBackground;
@property(nonatomic) unsigned int searchActiveCount; // @synthesize searchActiveCount=_searchActiveCount;
@property(nonatomic) unsigned int searchAppearCount; // @synthesize searchAppearCount=_searchAppearCount;
@property(nonatomic) unsigned int slideUpDownCount; // @synthesize slideUpDownCount=_slideUpDownCount;
@property(nonatomic) unsigned int moveStarToAfterCount; // @synthesize moveStarToAfterCount=_moveStarToAfterCount;
@property(nonatomic) unsigned int moveStarToFrontCount; // @synthesize moveStarToFrontCount=_moveStarToFrontCount;
@property(copy, nonatomic) NSString *moveStarToAfterAppIdList; // @synthesize moveStarToAfterAppIdList=_moveStarToAfterAppIdList;
@property(copy, nonatomic) NSString *moveStarToFrontAppIdList; // @synthesize moveStarToFrontAppIdList=_moveStarToFrontAppIdList;
@property(nonatomic) unsigned int isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(copy, nonatomic) NSString *addToStarAppIdList; // @synthesize addToStarAppIdList=_addToStarAppIdList;
@property(nonatomic) unsigned int addToStarAppCount; // @synthesize addToStarAppCount=_addToStarAppCount;
@property(copy, nonatomic) NSString *moveStarToTopAppIdList; // @synthesize moveStarToTopAppIdList=_moveStarToTopAppIdList;
@property(copy, nonatomic) NSString *starAppClickPositionList; // @synthesize starAppClickPositionList=_starAppClickPositionList;
@property(copy, nonatomic) NSString *appClickPositionList; // @synthesize appClickPositionList=_appClickPositionList;
@property(nonatomic) unsigned int moveStarToTopCount; // @synthesize moveStarToTopCount=_moveStarToTopCount;
@property(copy, nonatomic) NSString *deleteStarAppIdList; // @synthesize deleteStarAppIdList=_deleteStarAppIdList;
@property(nonatomic) unsigned int deleteStarAppCount; // @synthesize deleteStarAppCount=_deleteStarAppCount;
@property(copy, nonatomic) NSString *openStarAppIdList; // @synthesize openStarAppIdList=_openStarAppIdList;
@property(nonatomic) unsigned int starScrollCount; // @synthesize starScrollCount=_starScrollCount;
@property(nonatomic) unsigned int starCountWhenClose; // @synthesize starCountWhenClose=_starCountWhenClose;
@property(nonatomic) unsigned int starCountWhenOpen; // @synthesize starCountWhenOpen=_starCountWhenOpen;
@property(nonatomic) unsigned int whyDragMeCountWhenClose; // @synthesize whyDragMeCountWhenClose=_whyDragMeCountWhenClose;
@property(copy, nonatomic) NSString *deleteAppIdList; // @synthesize deleteAppIdList=_deleteAppIdList;
@property(nonatomic) unsigned int deleteAppCount; // @synthesize deleteAppCount=_deleteAppCount;
@property(copy, nonatomic) NSString *openAppIdList; // @synthesize openAppIdList=_openAppIdList;
@property(nonatomic) unsigned int scrollCount; // @synthesize scrollCount=_scrollCount;
@property(nonatomic) unsigned int closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned int appCountWhenClose; // @synthesize appCountWhenClose=_appCountWhenClose;
@property(nonatomic) unsigned int appCountWhenOpen; // @synthesize appCountWhenOpen=_appCountWhenOpen;
@property(nonatomic) unsigned long long lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int openTime; // @synthesize openTime=_openTime;
- (id)reportString;

@end

