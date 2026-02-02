//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EditStoryImageAttr : NSObject
{
    _Bool _storyHideInTimeline;
    _Bool _lyricsOn;
    NSString *_mainText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(nonatomic, getter=isLyricsOn) _Bool lyricsOn; // @synthesize lyricsOn=_lyricsOn;
@property(nonatomic, getter=isStoryHideInTimeLine) _Bool storyHideInTimeline; // @synthesize storyHideInTimeline=_storyHideInTimeline;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

