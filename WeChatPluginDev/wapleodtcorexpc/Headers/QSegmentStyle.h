//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QSegmentStyle : NSObject
{
    int _startIndex;
    int _endIndex;
    int _colorImageIndex;
}

@property(nonatomic) int colorImageIndex; // @synthesize colorImageIndex=_colorImageIndex;
@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;

@end

