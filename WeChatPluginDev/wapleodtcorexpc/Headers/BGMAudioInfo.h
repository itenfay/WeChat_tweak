//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BGMAudioInfo : NSObject
{
    NSString *_accompanyMusicFilePath;
    NSString *_originalMusicFilePath;
    long long _singingEndPosition;
}

+ (id)createBGMAudioInfoWithSong:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long singingEndPosition; // @synthesize singingEndPosition=_singingEndPosition;
@property(retain, nonatomic) NSString *originalMusicFilePath; // @synthesize originalMusicFilePath=_originalMusicFilePath;
@property(retain, nonatomic) NSString *accompanyMusicFilePath; // @synthesize accompanyMusicFilePath=_accompanyMusicFilePath;

@end

