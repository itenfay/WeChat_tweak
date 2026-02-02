//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, OMJID;

@interface OMCTimelineOpDesc : NSObject
{
    NSString *_title;
    OMJID *_focusedSegmentID;
    NSString *_undoValue;
    NSString *_redoValue;
    NSString *_valueFormatter;
    NSDictionary *_userInfos;
    CDStruct_1b6d18a9 _playheadTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *userInfos; // @synthesize userInfos=_userInfos;
@property(readonly, nonatomic) NSString *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(readonly, nonatomic) NSString *redoValue; // @synthesize redoValue=_redoValue;
@property(readonly, nonatomic) NSString *undoValue; // @synthesize undoValue=_undoValue;
@property(readonly, nonatomic) OMJID *focusedSegmentID; // @synthesize focusedSegmentID=_focusedSegmentID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playheadTime; // @synthesize playheadTime=_playheadTime;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)s12SaveToMessage:(void *)arg1;
- (id)initWithS12Message:(const void *)arg1;
- (id)initWithTitle:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2 focusedSegmentID:(id)arg3 undoValue:(id)arg4 redoValue:(id)arg5 valueFormatter:(id)arg6 userInfos:(id)arg7;
- (id)initWithTitle:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2 focusedSegmentID:(id)arg3 undoValue:(id)arg4 redoValue:(id)arg5 valueFormatter:(id)arg6;
- (id)initWithTitle:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2 focusedSegmentID:(id)arg3;
- (_Bool)isTrimClip;
- (_Bool)isReverseClip;
- (_Bool)isReplaceClip;
- (_Bool)isCanvasAdjustment;

@end

