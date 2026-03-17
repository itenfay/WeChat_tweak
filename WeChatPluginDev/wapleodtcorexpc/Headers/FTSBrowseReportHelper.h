//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FTSBrowseReportHelper : NSObject
{
    _Bool _isValid;
    unsigned long long _browseStartTime;
}

@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long browseStartTime; // @synthesize browseStartTime=_browseStartTime;
- (id)addLogParams:(id)arg1;
- (unsigned long long)genTimeInMs;
- (void)reset;

@end

