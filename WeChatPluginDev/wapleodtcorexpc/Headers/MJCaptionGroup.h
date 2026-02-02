//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJCaptionEntry, NSArray;

@interface MJCaptionGroup : NSObject
{
    MJCaptionEntry *_originalCaptionEntry;
    NSArray *_translatedCaptionEntries;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *translatedCaptionEntries; // @synthesize translatedCaptionEntries=_translatedCaptionEntries;
@property(readonly, nonatomic) MJCaptionEntry *originalCaptionEntry; // @synthesize originalCaptionEntry=_originalCaptionEntry;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)description;
- (id)copyWithSpeedRatio:(double)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 originalCaptionEntry:(id)arg2 translatedCaptionEntries:(id)arg3;

@end

