//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveKSKitMusicNote : NSObject
{
    int _beginTime;
    int _duration;
    int _noteHeight;
    int _noteValue;
    double _noteHeightPercent;
}

+ (struct _NSRange)musicNoteRange;
+ (double)transferNoteValueToPercent:(float)arg1;
+ (id)genKSMusicNoteWithBegin:(int)arg1 duration:(int)arg2 noteHeight:(int)arg3;
+ (id)genKSMusicNoteWithBegin:(int)arg1 duration:(int)arg2 noteHeight:(int)arg3 noteValue:(int)arg4;
@property(nonatomic) int noteValue; // @synthesize noteValue=_noteValue;
@property(nonatomic) double noteHeightPercent; // @synthesize noteHeightPercent=_noteHeightPercent;
@property(nonatomic) int noteHeight; // @synthesize noteHeight=_noteHeight;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int beginTime; // @synthesize beginTime=_beginTime;
- (id)description;
- (_Bool)isValid;
- (void)checkMistakeWithNoteHeight:(float)arg1 noteValue:(float)arg2;

@end

