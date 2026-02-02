//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJCaptionEntryModel, NSArray, NSString;

@interface MJCaptionGroupModel : NSObject
{
    double _startTime;
    double _duration;
    MJCaptionEntryModel *_originalCaptionEntry;
    NSArray *_translatedCaptionEntries;
}

+ (void)initialize;
+ (void)PBArrayAdd_translatedCaptionEntries;
+ (void)PBArrayAdd_originalCaptionEntry;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_startTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *translatedCaptionEntries; // @synthesize translatedCaptionEntries=_translatedCaptionEntries;
@property(retain, nonatomic) MJCaptionEntryModel *originalCaptionEntry; // @synthesize originalCaptionEntry=_originalCaptionEntry;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)toCaptionGroup;
- (id)initWithCaptionGroup:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

