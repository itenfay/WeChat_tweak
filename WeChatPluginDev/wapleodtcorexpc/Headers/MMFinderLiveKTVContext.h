//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVContext : NSObject
{
    UIColor *_mainWidgetsColor;
    id <MMLiveUniqueTaskId> _taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UIColor *mainWidgetsColor; // @synthesize mainWidgetsColor=_mainWidgetsColor;
- (void)updateMainWidgetsColor:(id)arg1;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end

