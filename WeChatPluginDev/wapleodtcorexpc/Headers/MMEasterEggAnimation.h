//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggAnimation : NSObject
{
    int _viewCount;
    int _minViewSize;
    int _maxViewSize;
    NSString *_imageFilePath;
    long long _animationType;
}

- (void).cxx_destruct;
@property(nonatomic) int maxViewSize; // @synthesize maxViewSize=_maxViewSize;
@property(nonatomic) int minViewSize; // @synthesize minViewSize=_minViewSize;
@property(nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;

@end

