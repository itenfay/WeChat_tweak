//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QHeatNodeData : NSObject
{
    double _value;
    struct CGPoint _point;
}

@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

