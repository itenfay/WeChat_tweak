//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, NSString;

@interface MMFinderLiveUserStateItem
{
    _Bool _isKtvPlayMember;
    unsigned int _rank;
    unsigned int _playSize;
    unsigned int _playAvgScores;
    FinderLiveContact *_liveContact;
    NSString *_bestPlaySongName;
}

+ (id)batchConvertKtvPlayMember:(id)arg1;
+ (id)batchConvert:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bestPlaySongName; // @synthesize bestPlaySongName=_bestPlaySongName;
@property(nonatomic) unsigned int playAvgScores; // @synthesize playAvgScores=_playAvgScores;
@property(nonatomic) unsigned int playSize; // @synthesize playSize=_playSize;
@property(nonatomic) _Bool isKtvPlayMember; // @synthesize isKtvPlayMember=_isKtvPlayMember;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
- (unsigned long long)rewardAmountInHeat;
- (unsigned long long)disableCommentDef;
- (id)headImageUrl;
- (id)displayName;
- (id)userName;
- (id)initWithKtvPlayMember:(id)arg1;
- (id)initWithLiveContact:(id)arg1;

@end

