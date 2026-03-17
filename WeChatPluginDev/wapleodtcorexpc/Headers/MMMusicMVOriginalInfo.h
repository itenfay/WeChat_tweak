//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicMVOriginalInfo : NSObject
{
    float _originality;
    float _completion;
}

+ (void)initialize;
+ (void)PBArrayAdd_completion;
+ (void)PBArrayAdd_originality;
@property(nonatomic) float completion; // @synthesize completion=_completion;
@property(nonatomic) float originality; // @synthesize originality=_originality;
- (float)completionPercentValue;
- (float)originalityPercentValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

