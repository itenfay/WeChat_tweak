//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveShareInstantDiscountActivityExtra : NSObject
{
    NSString *_activityKey;
    NSString *_coverMaskImageURL;
}

+ (void)initialize;
+ (void)PBArrayAdd_coverMaskImageURL;
+ (void)PBArrayAdd_activityKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coverMaskImageURL; // @synthesize coverMaskImageURL=_coverMaskImageURL;
@property(copy, nonatomic) NSString *activityKey; // @synthesize activityKey=_activityKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

