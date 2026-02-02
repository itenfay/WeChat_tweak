//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TingRouteInfo : NSObject
{
    _Bool _enableMiniprogram;
    NSString *_name;
    NSDictionary *_arguments;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableMiniprogram; // @synthesize enableMiniprogram=_enableMiniprogram;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

