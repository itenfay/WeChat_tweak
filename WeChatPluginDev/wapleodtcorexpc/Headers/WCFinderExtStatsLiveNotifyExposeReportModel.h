//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderExtStatsLiveNotifyExposeReportModel : NSObject
{
    unsigned long long _autoPlayDurationMS;
    NSString *_noticeID;
}

@property(retain, nonatomic) NSString *noticeID; // @synthesize noticeID=_noticeID;
@property(nonatomic) unsigned long long autoPlayDurationMS; // @synthesize autoPlayDurationMS=_autoPlayDurationMS;
- (id)generateOtherKVsDictionary;

@end

