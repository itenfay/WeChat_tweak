//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DataReportSubstitutePageStack : NSObject
{
    NSMutableArray *m_pageStack;
}

- (void).cxx_destruct;
- (long long)getStackDeep:(id)arg1;
- (unsigned long long)getStackSize;
- (id)popAllStackPages;
- (id)popStackPages:(id)arg1;
- (id)popStackPage;
- (_Bool)isInStack:(id)arg1;
- (id)getAllStackPages;
- (id)getAfterStackPages:(id)arg1;
- (id)getBottomPage;
- (id)getTopPage;
- (void)pushPageStack:(id)arg1;
- (id)init;

@end

