//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface CommonRedDotProvider : NSObject
{
    NSArray *_finderRedDotPaths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *finderRedDotPaths; // @synthesize finderRedDotPaths=_finderRedDotPaths;
- (id)checkToGetRedDotInfo;
- (id)initWithPaths:(id)arg1;

@end

