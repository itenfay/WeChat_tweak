//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PhoneItemInfo : NSObject
{
    _Bool bFromHash;
    long long index;
    NSString *_phoneNum;
}

+ (void)initialize;
+ (void)PBArrayAdd_phoneNum;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic) _Bool bFromHash; // @synthesize bFromHash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

