//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKTVSongInfo : NSObject
{
    NSString *_accompanyMusicFilePath;
    NSString *_originalMusicFilePath;
    NSString *_testSingPCMPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *testSingPCMPath; // @synthesize testSingPCMPath=_testSingPCMPath;
@property(retain, nonatomic) NSString *originalMusicFilePath; // @synthesize originalMusicFilePath=_originalMusicFilePath;
@property(retain, nonatomic) NSString *accompanyMusicFilePath; // @synthesize accompanyMusicFilePath=_accompanyMusicFilePath;
- (_Bool)hasOriginalMusicFile;
- (_Bool)checkResourceValid:(long long)arg1;

@end

