//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MMTextStateEditVideoLayoutView
{
    NSMutableArray *_currentMusicLyrics;
    double _currentLyricTotalTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentLyricTotalTime; // @synthesize currentLyricTotalTime=_currentLyricTotalTime;
@property(retain, nonatomic) NSMutableArray *currentMusicLyrics; // @synthesize currentMusicLyrics=_currentMusicLyrics;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)initEditImageView;

@end

