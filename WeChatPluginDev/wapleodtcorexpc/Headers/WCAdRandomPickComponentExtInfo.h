//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdRandomPickComponentExtInfo : NSObject
{
    NSArray *_pickedCardsList;
}

+ (id)fromResponseExtInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_pickedCardsList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pickedCardsList; // @synthesize pickedCardsList=_pickedCardsList;
- (void)mergeWithExtInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

