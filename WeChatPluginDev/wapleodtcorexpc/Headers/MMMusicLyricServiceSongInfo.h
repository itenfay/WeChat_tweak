//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicLyricResolver, NSString;

@interface MMMusicLyricServiceSongInfo : NSObject
{
    _Bool _manualOffsetControlEnabled;
    int _currentLyricIndex;
    NSString *_songId;
    MMMusicLyricResolver *_resolver;
    long long _observerCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool manualOffsetControlEnabled; // @synthesize manualOffsetControlEnabled=_manualOffsetControlEnabled;
@property(nonatomic) long long observerCount; // @synthesize observerCount=_observerCount;
@property(nonatomic) int currentLyricIndex; // @synthesize currentLyricIndex=_currentLyricIndex;
@property(retain, nonatomic) MMMusicLyricResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void)setupLyrics:(id)arg1;
- (id)initWithSongId:(id)arg1;

@end

