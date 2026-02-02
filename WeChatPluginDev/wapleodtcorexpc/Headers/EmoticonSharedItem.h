//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonSharedItem : NSObject
{
    unsigned int _m_packType;
    NSString *_m_productId;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_productId;
+ (void)PBArrayAdd_m_packType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId=_m_productId;
@property(nonatomic) unsigned int m_packType; // @synthesize m_packType=_m_packType;
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

