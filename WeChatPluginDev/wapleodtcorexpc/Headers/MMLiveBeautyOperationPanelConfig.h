//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautySuite, MMLiveTaskId;
@protocol MMLiveBeautyLogicProvider;

@interface MMLiveBeautyOperationPanelConfig : NSObject
{
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    MMLiveTaskId *_taskId;
    MMLiveBeautySuite *_suite;
}

+ (id)config;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautySuite *suite; // @synthesize suite=_suite;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;

@end

