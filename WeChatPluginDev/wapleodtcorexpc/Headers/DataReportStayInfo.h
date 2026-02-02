//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DataReportSubstitutePage;

@interface DataReportStayInfo : NSObject
{
    unsigned long long _inTime;
    unsigned long long _stayTime;
    DataReportSubstitutePage *_page;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DataReportSubstitutePage *page; // @synthesize page=_page;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned long long inTime; // @synthesize inTime=_inTime;
- (id)toString;

@end

