//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, NSString;

@interface MMFinderLiveKTVSingerHeatInfo
{
    unsigned int _boardType;
    NSString *_sdkUserId;
    FinderLiveContact *_finderLiveContact;
    NSString *_boardKey;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(copy, nonatomic) NSString *boardKey; // @synthesize boardKey=_boardKey;
@property(retain, nonatomic) FinderLiveContact *finderLiveContact; // @synthesize finderLiveContact=_finderLiveContact;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
- (unsigned long long)liveHeatValue;

@end

