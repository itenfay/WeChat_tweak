//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCFinderGradientLayerModel : NSObject
{
    NSArray *_locations;
    NSArray *_colors;
}

+ (id)genGradientModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;

@end

