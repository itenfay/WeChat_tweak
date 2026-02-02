//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DataReportReportData : NSObject
{
    NSString *m_eventId;
    NSMutableDictionary *m_params;
}

- (void).cxx_destruct;
- (id)toString;
- (void)putParams:(id)arg1;
- (void)putParam:(id)arg1 withValue:(id)arg2;
- (void)setParams:(id)arg1;
- (id)getParams;
- (void)setEventId:(id)arg1;
- (id)getEventId;
- (id)init;

@end

