//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppProductItem : NSObject
{
    unsigned int _type;
    NSString *_productInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_productInfo;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
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

