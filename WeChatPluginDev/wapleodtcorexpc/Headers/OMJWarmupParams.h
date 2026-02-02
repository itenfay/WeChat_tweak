//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJWarmupParams : NSObject
{
    _Bool _overwriteExisting;
    NSString *_instaMovieDirectory;
    NSString *_camFunDirectory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool overwriteExisting; // @synthesize overwriteExisting=_overwriteExisting;
@property(readonly, copy, nonatomic) NSString *camFunDirectory; // @synthesize camFunDirectory=_camFunDirectory;
@property(readonly, copy, nonatomic) NSString *instaMovieDirectory; // @synthesize instaMovieDirectory=_instaMovieDirectory;
- (id)initWithInstaMovieDirectory:(id)arg1 camFunDirectory:(id)arg2 overwriteExisting:(_Bool)arg3;
- (id)initWithCamFunDirectory:(id)arg1;
- (id)initWithInstaMovieDirectory:(id)arg1;

@end

