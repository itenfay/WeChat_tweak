//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface FlutterActionBarMgr : NSObject
{
    NSMapTable *_map;
    double _statusBarHeight;
    double _navigationBarMargin;
}

+ (void)removeWithId:(id)arg1;
+ (id)getWithId:(id)arg1;
+ (void)putWithId:(id)arg1 helper:(id)arg2;
+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) double navigationBarMargin; // @synthesize navigationBarMargin=_navigationBarMargin;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(retain, nonatomic) NSMapTable *map; // @synthesize map=_map;
- (id)init;

@end

