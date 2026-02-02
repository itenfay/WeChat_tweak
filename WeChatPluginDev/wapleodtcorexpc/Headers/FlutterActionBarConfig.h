//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterActionBarIconConfig, FlutterActionBarTitleConfig, NSNumber;

@interface FlutterActionBarConfig : NSObject
{
    NSNumber *_showPlatform;
    FlutterActionBarTitleConfig *_titleConfig;
    FlutterActionBarIconConfig *_leftItem;
    FlutterActionBarIconConfig *_rightItem;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithShowPlatform:(id)arg1 titleConfig:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterActionBarIconConfig *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) FlutterActionBarIconConfig *leftItem; // @synthesize leftItem=_leftItem;
@property(retain, nonatomic) FlutterActionBarTitleConfig *titleConfig; // @synthesize titleConfig=_titleConfig;
@property(retain, nonatomic) NSNumber *showPlatform; // @synthesize showPlatform=_showPlatform;
- (id)toMap;

@end

