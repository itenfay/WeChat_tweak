//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMBGMSelectedBottomViewModel : NSObject
{
    _Bool _musicOn;
    _Bool _ostOn;
    _Bool _lyricOn;
}

@property(nonatomic, getter=isLyricOn) _Bool lyricOn; // @synthesize lyricOn=_lyricOn;
@property(nonatomic, getter=isOstOn) _Bool ostOn; // @synthesize ostOn=_ostOn;
@property(nonatomic, getter=isMusicOn) _Bool musicOn; // @synthesize musicOn=_musicOn;

@end

