//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdTimelineAdLocalRecords : NSObject
{
    NSString *_timeConfig;
    NSArray *_records;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSString *timeConfig; // @synthesize timeConfig=_timeConfig;
- (id)description;

@end

