//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPHlsTag : NSObject
{
    float _framerate;
    NSString *_name;
    NSString *_language;
    long long _bandwidth;
    NSString *_resolution;
    NSString *_codecs;
    NSString *_groupId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *codecs; // @synthesize codecs=_codecs;
@property(nonatomic) float framerate; // @synthesize framerate=_framerate;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(nonatomic) long long bandwidth; // @synthesize bandwidth=_bandwidth;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;

@end

