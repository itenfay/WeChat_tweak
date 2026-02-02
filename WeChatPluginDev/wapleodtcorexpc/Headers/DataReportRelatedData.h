//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DataReportRelatedData : NSObject
{
    NSString *m_targetId;
    NSMutableDictionary *m_params;
}

- (void).cxx_destruct;
- (void)reset;
- (void)putParams:(id)arg1;
- (void)putParam:(id)arg1 withValue:(id)arg2;
- (void)setParams:(id)arg1;
- (id)getParams;
- (void)setTargetId:(id)arg1;
- (id)getTargetId;
- (id)init;

@end

