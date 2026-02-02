//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface WCFinderRoutineReportInfo : NSObject
{
    _Bool _isFullScreen;
    _Bool _isADFlag;
    unsigned long long _scene;
    NSString *_feedId;
    unsigned long long _actionType;
    NSMutableDictionary *_actionValueDict;
    long long _actionValue;
    unsigned long long _actionTimestamp;
    unsigned long long _mediaType;
    NSString *_sessionBuffer;
    unsigned long long _videoDurationTime;
    unsigned long long _firstVideoDataSource;
    NSString *_longVideoId;
    unsigned long long _exposeTimes;
    NSDictionary *_feedClientInfo;
    NSString *_fromContextId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isADFlag; // @synthesize isADFlag=_isADFlag;
@property(copy, nonatomic) NSString *fromContextId; // @synthesize fromContextId=_fromContextId;
@property(copy, nonatomic) NSDictionary *feedClientInfo; // @synthesize feedClientInfo=_feedClientInfo;
@property(nonatomic) unsigned long long exposeTimes; // @synthesize exposeTimes=_exposeTimes;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(copy, nonatomic) NSString *longVideoId; // @synthesize longVideoId=_longVideoId;
@property(nonatomic) unsigned long long firstVideoDataSource; // @synthesize firstVideoDataSource=_firstVideoDataSource;
@property(nonatomic) unsigned long long videoDurationTime; // @synthesize videoDurationTime=_videoDurationTime;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long actionTimestamp; // @synthesize actionTimestamp=_actionTimestamp;
@property(nonatomic) long long actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSMutableDictionary *actionValueDict; // @synthesize actionValueDict=_actionValueDict;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)getJsonFormatStringWithDictionary:(id)arg1;
- (id)getReportJsonFormatStringWithDictionary:(id)arg1;
- (id)reportInfoStr;

@end

