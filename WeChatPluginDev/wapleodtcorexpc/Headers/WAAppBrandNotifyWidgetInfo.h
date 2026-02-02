//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppBrandNotifyWidgetInfo : NSObject
{
    unsigned int _WidgetPkgType;
    unsigned int _WidgePkgSize;
    NSString *_WidgetPkgMd5;
}

+ (void)initialize;
+ (void)PBArrayAdd_WidgePkgSize;
+ (void)PBArrayAdd_WidgetPkgMd5;
+ (void)PBArrayAdd_WidgetPkgType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int WidgePkgSize; // @synthesize WidgePkgSize=_WidgePkgSize;
@property(retain, nonatomic) NSString *WidgetPkgMd5; // @synthesize WidgetPkgMd5=_WidgetPkgMd5;
@property(nonatomic) unsigned int WidgetPkgType; // @synthesize WidgetPkgType=_WidgetPkgType;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

