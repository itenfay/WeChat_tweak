//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface MMLiveViewLayoutConstraint : NSObject
{
    NSNumber *_edge;
    NSNumber *_relativeToEdge;
    NSNumber *_margin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSNumber *relativeToEdge; // @synthesize relativeToEdge=_relativeToEdge;
@property(retain, nonatomic) NSNumber *edge; // @synthesize edge=_edge;

@end

