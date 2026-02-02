//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveRoomInfo : NSObject
{
    unsigned int _startTime;
    unsigned int _endTime;
    unsigned long long _liveId;
    unsigned long long _liveStatus;
    NSString *_joinLiveTips;
    NSString *_wxaGameExportId;
    NSString *_topic;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *wxaGameExportId; // @synthesize wxaGameExportId=_wxaGameExportId;
@property(copy, nonatomic) NSString *joinLiveTips; // @synthesize joinLiveTips=_joinLiveTips;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)initWithLiveTask:(id)arg1;

@end

