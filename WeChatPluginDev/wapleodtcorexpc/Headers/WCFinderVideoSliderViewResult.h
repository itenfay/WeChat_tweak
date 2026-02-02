//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface WCFinderVideoSliderViewResult : NSObject
{
    unsigned long long _resultType;
    UIImage *_speciallyImage;
    double _coverTimeInVideo;
}

- (void).cxx_destruct;
@property(nonatomic) double coverTimeInVideo; // @synthesize coverTimeInVideo=_coverTimeInVideo;
@property(retain, nonatomic) UIImage *speciallyImage; // @synthesize speciallyImage=_speciallyImage;
@property(nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;

@end

