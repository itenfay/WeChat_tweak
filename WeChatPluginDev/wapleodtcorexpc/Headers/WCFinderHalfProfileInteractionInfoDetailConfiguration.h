//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WCFinderHalfProfileInteractionInfoDetailConfiguration : NSObject
{
    NSString *_identifier;
    NSString *_describeContent;
    CDUnknownBlockType _tapAction;
    double _containerWidth;
    NSNumber *_height;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) NSString *describeContent; // @synthesize describeContent=_describeContent;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)updatedConfigurationForState:(id)arg1;
- (id)makeContentView;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)itemHeightWithLayoutEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

