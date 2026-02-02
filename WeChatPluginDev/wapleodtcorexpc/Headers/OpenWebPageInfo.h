//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface OpenWebPageInfo : NSObject
{
    NSNumber *_scene;
    NSNumber *_hideOptionMenu;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithScene:(id)arg1 hideOptionMenu:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *hideOptionMenu; // @synthesize hideOptionMenu=_hideOptionMenu;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
- (id)toList;

@end

