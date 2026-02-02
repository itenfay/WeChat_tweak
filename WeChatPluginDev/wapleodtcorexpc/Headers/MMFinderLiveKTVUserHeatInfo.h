//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMFinderLiveKTVUserHeatInfo
{
    NSString *_liveMeetId;
    unsigned long long _anchorHeatValue;
    NSMutableDictionary *_singerHeatInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *singerHeatInfoDict; // @synthesize singerHeatInfoDict=_singerHeatInfoDict;
@property(nonatomic) unsigned long long anchorHeatValue; // @synthesize anchorHeatValue=_anchorHeatValue;
@property(retain, nonatomic) NSString *liveMeetId; // @synthesize liveMeetId=_liveMeetId;
- (unsigned long long)liveHeatValue;

@end

