//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable, NSNumber, NSString;

@interface DataReportViewExposeVisiableTools : NSObject
{
    NSMapTable *_testMarkViews;
    NSNumber *_testMarkViewSwitch;
    unsigned long long _index;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSNumber *testMarkViewSwitch; // @synthesize testMarkViewSwitch=_testMarkViewSwitch;
@property(retain, nonatomic) NSMapTable *testMarkViews; // @synthesize testMarkViews=_testMarkViews;
- (void)removeView:(id)arg1;
- (void)setViewExposeVisiableToolsSwitch:(_Bool)arg1;
- (void)onViewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onViewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (_Bool)isTestMarkViewSwitch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

