//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJSegmentViewModel, NSString;

@interface MJSegmentPropertyAccessor : NSObject
{
    MJSegmentViewModel *_segmentVM;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
- (void)setCaptionText:(id)arg1 atTimeInTimeline:(CDStruct_1b6d18a9)arg2 language:(id)arg3;
- (id)displayingCaptionTextAtTimeInTimeline:(CDStruct_1b6d18a9)arg1 language:(id)arg2;
- (id)displayingCaptionTextInLanguage:(id)arg1;
- (void)updateAnimPresetWithID:(id)arg1;
@property(readonly, nonatomic) _Bool isBuiltinAnimEnabled;
@property(readonly, nonatomic) NSString *animPresetID;
@property(retain, nonatomic) NSString *colorStyleID;
@property(retain, nonatomic) NSString *materialID;
@property(retain, nonatomic) NSString *fontName;
- (id)displayingSubTextAtTimeInTimeline:(CDStruct_1b6d18a9)arg1;
- (id)displayingTextAtTimeInTimeline:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSString *displayingSubText;
@property(readonly, nonatomic) NSString *displayingText;
- (void)setSubText:(id)arg1 atTimeInTimeline:(CDStruct_1b6d18a9)arg2;
- (void)setText:(id)arg1 atTimeInTimeline:(CDStruct_1b6d18a9)arg2;
@property(retain, nonatomic) NSString *text;
- (id)initWithSegmentViewModel:(id)arg1;

@end

