//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EdgeComputingRtReportCache : NSObject
{
}

- (void)clear;
- (id)keyForRtReportData:(id)arg1 withLogID:(id)arg2;
- (id)read;
- (_Bool)cache:(id)arg1 withLogID:(unsigned int)arg2 withContent:(id)arg3;

@end

