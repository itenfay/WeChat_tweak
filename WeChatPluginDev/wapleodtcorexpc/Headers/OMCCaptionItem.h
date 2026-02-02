//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMCCaptionItem : NSObject
{
    NSString *_text;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithText:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end

