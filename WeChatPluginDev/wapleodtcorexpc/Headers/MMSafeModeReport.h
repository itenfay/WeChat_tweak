//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMSafeModeReport : NSObject
{
    NSString *m_path;
    NSMutableArray *m_reportList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)doReport;
- (void)reportWithID:(int)arg1 ext:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
- (void)reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (id)init;

@end

