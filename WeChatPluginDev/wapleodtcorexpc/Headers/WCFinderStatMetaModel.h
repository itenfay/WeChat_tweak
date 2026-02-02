//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, PicStats;

@interface WCFinderStatMetaModel : NSObject
{
    _Bool _autoPlay;
    _Bool _clickShare;
    _Bool _clickComment;
    _Bool _clickHeader;
    _Bool _followStatus;
    _Bool _likeStatus;
    _Bool _favStatus;
    _Bool _fastSlip;
    _Bool _notInterestAction;
    _Bool _dragProgressBar;
    _Bool _clickColumnCard;
    _Bool _clickFullVideo;
    NSString *_tid;
    NSString *_nonceID;
    unsigned long long _liveId;
    unsigned long long _feedScene;
    unsigned long long _commentScene;
    NSString *_feedUsername;
    NSString *_sessionBuffer;
    NSString *_megavideoId;
    NSString *_megavideoNonceId;
    double _recvTimeMs;
    double _exposeStartTimeMs;
    double _exposeEndTimeMS;
    NSString *_recommendReason;
    NSString *_innerRecommendReason;
    NSString *_musicSongId;
    NSString *_musicSourceFeedId;
    unsigned long long _readType;
    unsigned long long _sessionPos;
    double _videoLength;
    double _feedStayStartTime;
    double _feedStayEndTime;
    double _feedStayStartTimeInMs;
    double _feedStayEndTimeInMs;
    unsigned long long _startPlayTime;
    unsigned long long _endPlayTime;
    double _feedActualPlayingTimeInMs;
    double _lastPlayTime;
    unsigned long long _photoTurningIndex;
    unsigned long long _videoReplayTimes;
    double _maxPlayProgress;
    unsigned long long _feedForwardCount;
    unsigned long long _commentTimes;
    unsigned long long _sortId;
    double _maxVidPlayLen;
    unsigned long long _clickTopic;
    unsigned long long _clickExpandText;
    unsigned long long _clickForwardToMoments;
    unsigned long long _clickPoi;
    unsigned long long _clickCollapseText;
    unsigned long long _clickCommentLike;
    unsigned long long _clickMore;
    unsigned long long _clickComplaint;
    unsigned long long _mediaType;
    double _fixedMaxVidPlayProgress;
    double _lastVidPlayProgress;
    NSMutableArray *_actionTypsArray;
    NSMutableSet *_playSecondSet;
    unsigned long long _liveIconObjectID;
    unsigned long long _liveIconStartExposeTs;
    NSMutableArray *_commentEnterTypeArray;
    PicStats *_picStat;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PicStats *picStat; // @synthesize picStat=_picStat;
@property(retain, nonatomic) NSMutableArray *commentEnterTypeArray; // @synthesize commentEnterTypeArray=_commentEnterTypeArray;
@property(nonatomic) unsigned long long liveIconStartExposeTs; // @synthesize liveIconStartExposeTs=_liveIconStartExposeTs;
@property(nonatomic) unsigned long long liveIconObjectID; // @synthesize liveIconObjectID=_liveIconObjectID;
@property(retain, nonatomic) NSMutableSet *playSecondSet; // @synthesize playSecondSet=_playSecondSet;
@property(retain, nonatomic) NSMutableArray *actionTypsArray; // @synthesize actionTypsArray=_actionTypsArray;
@property(nonatomic) double lastVidPlayProgress; // @synthesize lastVidPlayProgress=_lastVidPlayProgress;
@property(nonatomic) double fixedMaxVidPlayProgress; // @synthesize fixedMaxVidPlayProgress=_fixedMaxVidPlayProgress;
@property(nonatomic) _Bool clickFullVideo; // @synthesize clickFullVideo=_clickFullVideo;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool clickColumnCard; // @synthesize clickColumnCard=_clickColumnCard;
@property(nonatomic) _Bool dragProgressBar; // @synthesize dragProgressBar=_dragProgressBar;
@property(nonatomic) unsigned long long clickComplaint; // @synthesize clickComplaint=_clickComplaint;
@property(nonatomic) unsigned long long clickMore; // @synthesize clickMore=_clickMore;
@property(nonatomic) unsigned long long clickCommentLike; // @synthesize clickCommentLike=_clickCommentLike;
@property(nonatomic) unsigned long long clickCollapseText; // @synthesize clickCollapseText=_clickCollapseText;
@property(nonatomic) unsigned long long clickPoi; // @synthesize clickPoi=_clickPoi;
@property(nonatomic) unsigned long long clickForwardToMoments; // @synthesize clickForwardToMoments=_clickForwardToMoments;
@property(nonatomic) unsigned long long clickExpandText; // @synthesize clickExpandText=_clickExpandText;
@property(nonatomic) unsigned long long clickTopic; // @synthesize clickTopic=_clickTopic;
@property(nonatomic) _Bool notInterestAction; // @synthesize notInterestAction=_notInterestAction;
@property(nonatomic) double maxVidPlayLen; // @synthesize maxVidPlayLen=_maxVidPlayLen;
@property(nonatomic) unsigned long long sortId; // @synthesize sortId=_sortId;
@property(nonatomic) _Bool fastSlip; // @synthesize fastSlip=_fastSlip;
@property(nonatomic) _Bool favStatus; // @synthesize favStatus=_favStatus;
@property(nonatomic) unsigned long long commentTimes; // @synthesize commentTimes=_commentTimes;
@property(nonatomic) _Bool likeStatus; // @synthesize likeStatus=_likeStatus;
@property(nonatomic) _Bool followStatus; // @synthesize followStatus=_followStatus;
@property(nonatomic) _Bool clickHeader; // @synthesize clickHeader=_clickHeader;
@property(nonatomic) _Bool clickComment; // @synthesize clickComment=_clickComment;
@property(nonatomic) _Bool clickShare; // @synthesize clickShare=_clickShare;
@property(nonatomic) unsigned long long feedForwardCount; // @synthesize feedForwardCount=_feedForwardCount;
@property(nonatomic) double maxPlayProgress; // @synthesize maxPlayProgress=_maxPlayProgress;
@property(nonatomic) unsigned long long videoReplayTimes; // @synthesize videoReplayTimes=_videoReplayTimes;
@property(nonatomic) unsigned long long photoTurningIndex; // @synthesize photoTurningIndex=_photoTurningIndex;
@property(nonatomic) double lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(nonatomic) double feedActualPlayingTimeInMs; // @synthesize feedActualPlayingTimeInMs=_feedActualPlayingTimeInMs;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) unsigned long long endPlayTime; // @synthesize endPlayTime=_endPlayTime;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) double feedStayEndTimeInMs; // @synthesize feedStayEndTimeInMs=_feedStayEndTimeInMs;
@property(nonatomic) double feedStayStartTimeInMs; // @synthesize feedStayStartTimeInMs=_feedStayStartTimeInMs;
@property(nonatomic) double feedStayEndTime; // @synthesize feedStayEndTime=_feedStayEndTime;
@property(nonatomic) double feedStayStartTime; // @synthesize feedStayStartTime=_feedStayStartTime;
@property(nonatomic) double videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) unsigned long long sessionPos; // @synthesize sessionPos=_sessionPos;
@property(nonatomic) unsigned long long readType; // @synthesize readType=_readType;
@property(copy, nonatomic) NSString *musicSourceFeedId; // @synthesize musicSourceFeedId=_musicSourceFeedId;
@property(copy, nonatomic) NSString *musicSongId; // @synthesize musicSongId=_musicSongId;
@property(copy, nonatomic) NSString *innerRecommendReason; // @synthesize innerRecommendReason=_innerRecommendReason;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) double exposeEndTimeMS; // @synthesize exposeEndTimeMS=_exposeEndTimeMS;
@property(nonatomic) double exposeStartTimeMs; // @synthesize exposeStartTimeMs=_exposeStartTimeMs;
@property(nonatomic) double recvTimeMs; // @synthesize recvTimeMs=_recvTimeMs;
@property(copy, nonatomic) NSString *megavideoNonceId; // @synthesize megavideoNonceId=_megavideoNonceId;
@property(copy, nonatomic) NSString *megavideoId; // @synthesize megavideoId=_megavideoId;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *feedUsername; // @synthesize feedUsername=_feedUsername;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long feedScene; // @synthesize feedScene=_feedScene;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)description;
- (long long)getReplayCountBit;
- (long long)getFeedMaxStayTimeBit;
- (long long)getVideoMaxPlayProgressBit;
- (long long)getPhotoTurningCountBit;
- (id)getBitFeature;
- (id)convertCamelDictToUnderLine:(id)arg1;
- (id)genReportJson;
- (id)genStatObject;

@end

