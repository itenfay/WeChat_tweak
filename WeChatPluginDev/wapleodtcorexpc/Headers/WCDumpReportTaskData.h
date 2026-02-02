//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCDumpReportTaskData : NSObject
{
    NSArray *m_uploadFilesArray;
    unsigned long long m_dumpType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_dumpType; // @synthesize m_dumpType;
@property(retain, nonatomic) NSArray *m_uploadFilesArray; // @synthesize m_uploadFilesArray;
- (id)description;

@end

