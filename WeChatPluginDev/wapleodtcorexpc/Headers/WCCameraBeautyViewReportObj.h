//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCameraBeautyViewReportObj : NSObject
{
    unsigned long long _beautyNone;
    unsigned long long _beautyLow;
    unsigned long long _beautyMiddle;
    unsigned long long _beautyHigh;
}

@property(nonatomic) unsigned long long beautyHigh; // @synthesize beautyHigh=_beautyHigh;
@property(nonatomic) unsigned long long beautyMiddle; // @synthesize beautyMiddle=_beautyMiddle;
@property(nonatomic) unsigned long long beautyLow; // @synthesize beautyLow=_beautyLow;
@property(nonatomic) unsigned long long beautyNone; // @synthesize beautyNone=_beautyNone;
- (id)genReportDictWithType:(unsigned long long)arg1;
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2;

@end

