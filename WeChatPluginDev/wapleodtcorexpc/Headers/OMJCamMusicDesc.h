//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OMJCamMusicDesc : NSObject
{
    _Bool _isMusicEnabled;
    int _loopCount;
    NSString *_musicID;
    NSString *_musicKey;
    NSString *_musicName;
    NSString *_singerNames;
    NSString *_musicFilePath;
    NSArray *_lyricInfos;
    CDStruct_1b6d18a9 _startTimeOfMusic;
    CDStruct_1b6d18a9 _durationOfMusic;
    CDStruct_1b6d18a9 _startTimeOfCamScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *lyricInfos; // @synthesize lyricInfos=_lyricInfos;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) CDStruct_1b6d18a9 startTimeOfCamScene; // @synthesize startTimeOfCamScene=_startTimeOfCamScene;
@property(nonatomic) CDStruct_1b6d18a9 durationOfMusic; // @synthesize durationOfMusic=_durationOfMusic;
@property(nonatomic) CDStruct_1b6d18a9 startTimeOfMusic; // @synthesize startTimeOfMusic=_startTimeOfMusic;
@property(retain, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(retain, nonatomic) NSString *singerNames; // @synthesize singerNames=_singerNames;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
@property(retain, nonatomic) NSString *musicKey; // @synthesize musicKey=_musicKey;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(nonatomic) _Bool isMusicEnabled; // @synthesize isMusicEnabled=_isMusicEnabled;
- (id)init;

@end

