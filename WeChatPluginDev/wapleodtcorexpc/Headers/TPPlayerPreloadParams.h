//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData;

@interface TPPlayerPreloadParams : NSObject
{
    long long _commentScene;
    FlutterStandardTypedData *_mediaProto;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithCommentScene:(long long)arg1 mediaProto:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *mediaProto; // @synthesize mediaProto=_mediaProto;
@property(nonatomic) long long commentScene; // @synthesize commentScene=_commentScene;
- (id)toList;

@end

