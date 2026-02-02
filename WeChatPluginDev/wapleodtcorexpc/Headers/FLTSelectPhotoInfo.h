//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTPhotoCropInfo, NSString;

@interface FLTSelectPhotoInfo : NSObject
{
    NSString *_photoId;
    NSString *_path;
    long long _width;
    long long _height;
    FLTPhotoCropInfo *_cropInfo;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPhotoId:(id)arg1 path:(id)arg2 width:(long long)arg3 height:(long long)arg4 cropInfo:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) FLTPhotoCropInfo *cropInfo; // @synthesize cropInfo=_cropInfo;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
- (id)toList;

@end

