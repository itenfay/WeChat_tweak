//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLivePlayStatusReportStruct : NSObject
{
    unsigned int _reportTime;
    unsigned int _playStatus;
    unsigned int _playTime;
    unsigned int _liveScene;
    unsigned long long _liveId;
    NSString *_streamId;
    NSString *_anchorNickname;
    NSString *_playUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *anchorNickname; // @synthesize anchorNickname=_anchorNickname;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) unsigned int playTime; // @synthesize playTime=_playTime;
@property(nonatomic) unsigned int playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) unsigned int reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)toReport;

@end

