//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTVideoItemCellAutoPlayReportData
{
    NSString *_mpUrl;
    NSString *_vid;
    unsigned long long _absolutePosition;
    unsigned long long _playDuration;
    unsigned long long _videoDuration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned long long playDuration; // @synthesize playDuration=_playDuration;
@property(nonatomic) unsigned long long absolutePosition; // @synthesize absolutePosition=_absolutePosition;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;

@end

