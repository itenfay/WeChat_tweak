//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface EcsFinderLiveInfo : NSObject
{
    NSString *_finderExportId;
    NSNumber *_liveStatus;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinderExportId:(id)arg1 liveStatus:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(copy, nonatomic) NSString *finderExportId; // @synthesize finderExportId=_finderExportId;
- (id)toList;

@end

