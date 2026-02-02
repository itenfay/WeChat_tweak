//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdInteractionReportInfo : NSObject
{
    unsigned int _exposureCount;
    unsigned long long _appearTimestamp;
    unsigned long long _disappearTimestamp;
    unsigned long long _statyTime;
}

@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) unsigned long long statyTime; // @synthesize statyTime=_statyTime;
@property(nonatomic) unsigned long long disappearTimestamp; // @synthesize disappearTimestamp=_disappearTimestamp;
@property(nonatomic) unsigned long long appearTimestamp; // @synthesize appearTimestamp=_appearTimestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

