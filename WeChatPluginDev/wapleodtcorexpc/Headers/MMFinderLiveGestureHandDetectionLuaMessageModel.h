//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLiveGestureHandDetectionLuaMessageModel : NSObject
{
    long long _id;
    NSArray *_actived;
    NSArray *_transX;
    NSArray *_transY;
    NSArray *_rotation;
    NSArray *_scale;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSArray *rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) NSArray *transY; // @synthesize transY=_transY;
@property(retain, nonatomic) NSArray *transX; // @synthesize transX=_transX;
@property(retain, nonatomic) NSArray *actived; // @synthesize actived=_actived;
@property(nonatomic) long long id; // @synthesize id=_id;

@end

