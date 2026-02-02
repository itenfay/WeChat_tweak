//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPProgramInfo : NSObject
{
    _Bool _actived;
    long long _programId;
    long long _bandwidth;
    NSString *_resolution;
    NSString *_url;
}

+ (id)programWithProgramId:(long long)arg1 bandwidth:(long long)arg2 resolution:(id)arg3 url:(id)arg4 actived:(_Bool)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(nonatomic) long long bandwidth; // @synthesize bandwidth=_bandwidth;
@property(nonatomic) long long programId; // @synthesize programId=_programId;
@property(nonatomic) _Bool actived; // @synthesize actived=_actived;

@end

