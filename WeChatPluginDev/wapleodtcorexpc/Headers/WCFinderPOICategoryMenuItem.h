//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPOICategoryMenuItem : NSObject
{
    int _scene;
    NSString *_name;
    NSString *_category;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int scene; // @synthesize scene=_scene;

@end

