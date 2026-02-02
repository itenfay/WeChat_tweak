//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MJCaptionModel : NSObject
{
    NSArray *_captionGroups;
}

+ (void)initialize;
+ (void)PBArrayAdd_captionGroups;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *captionGroups; // @synthesize captionGroups=_captionGroups;
@property(readonly, copy) NSString *description;
- (id)toCaptionGroups;
- (id)initWithCaptionGroups:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

