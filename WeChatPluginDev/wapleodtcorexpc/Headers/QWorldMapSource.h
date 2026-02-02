//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface QWorldMapSource : NSObject
{
    NSDictionary *_originData;
    int _scenetype;
    NSString *_style;
    NSString *_scene;
    NSString *_version;
    NSString *_url;
    NSArray *_range;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property int scenetype; // @synthesize scenetype=_scenetype;
- (id)originalTileSrc;
- (id)initWithDict:(id)arg1;

@end

