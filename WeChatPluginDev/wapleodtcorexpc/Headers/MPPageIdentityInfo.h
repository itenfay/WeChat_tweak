//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPageIdentityInfo : NSObject
{
    unsigned int _itemShowType;
    NSString *_bizId;
    NSString *_mid;
    NSString *_idx;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_idx;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_bizId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *idx; // @synthesize idx=_idx;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(readonly, copy) NSString *description;
- (id)genIdentifierString;
- (id)toXML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

