//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdInteractionDeterminationInfo : NSObject
{
    NSString *_determinationId;
    unsigned long long _determinationType;
    NSString *_resourceId;
    double _triggerPercentage;
    struct CGRect _positionArea;
}

- (void).cxx_destruct;
@property(nonatomic) double triggerPercentage; // @synthesize triggerPercentage=_triggerPercentage;
@property(nonatomic) struct CGRect positionArea; // @synthesize positionArea=_positionArea;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) unsigned long long determinationType; // @synthesize determinationType=_determinationType;
@property(retain, nonatomic) NSString *determinationId; // @synthesize determinationId=_determinationId;
@property(readonly, nonatomic) _Bool canBeInteractived;
@property(readonly, nonatomic) _Bool canBeClicked;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

