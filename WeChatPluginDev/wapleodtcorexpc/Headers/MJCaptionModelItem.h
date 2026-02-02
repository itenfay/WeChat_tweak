//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJCaptionModelItem : NSObject
{
    NSString *_text;
    double _startTime;
    double _duration;
}

+ (void)initialize;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_text;
- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (id)toCaptionItem;
- (id)initWithCaptionItem:(id)arg1;
- (id)initWithText:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

