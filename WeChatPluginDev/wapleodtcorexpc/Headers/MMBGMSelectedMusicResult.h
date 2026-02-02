//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MMBGMSelectedMusicResult : NSObject
{
    _Bool _isMusicOn;
    _Bool _isLyricOn;
    _Bool _isOstOn;
    NSString *_musicFilePath;
    id <MMBGMSelectedMusicDataProtocol> _musicData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> musicData; // @synthesize musicData=_musicData;
@property(copy, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(nonatomic) _Bool isOstOn; // @synthesize isOstOn=_isOstOn;
@property(nonatomic) _Bool isLyricOn; // @synthesize isLyricOn=_isLyricOn;
@property(nonatomic) _Bool isMusicOn; // @synthesize isMusicOn=_isMusicOn;
- (id)genSelectedMusicInfo;
- (id)genRecommendedMusicInfo;

@end

