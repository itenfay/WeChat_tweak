//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString;

@interface WCFinderExtStatsLiveShareExposeReportModel
{
    NSDate *_start;
    NSDate *_end;
    unsigned long long _autoPlayDurationMS;
    NSString *_gMsgID;
    unsigned long long _exposeScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long exposeScene; // @synthesize exposeScene=_exposeScene;
@property(retain, nonatomic) NSString *gMsgID; // @synthesize gMsgID=_gMsgID;
@property(nonatomic) unsigned long long autoPlayDurationMS; // @synthesize autoPlayDurationMS=_autoPlayDurationMS;
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (id)generateOtherKVsDictionary;

@end

