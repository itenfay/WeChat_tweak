//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderHeightModel : NSObject
{
    double _wrappedTextHeight;
    double _fullTextHeight;
}

@property(nonatomic) double fullTextHeight; // @synthesize fullTextHeight=_fullTextHeight;
@property(nonatomic) double wrappedTextHeight; // @synthesize wrappedTextHeight=_wrappedTextHeight;

@end

