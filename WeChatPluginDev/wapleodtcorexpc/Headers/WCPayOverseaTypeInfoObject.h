//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaTypeInfoObject : NSObject
{
    unsigned int _m_typeId;
    NSString *_m_typeName;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_typeId;
+ (void)PBArrayAdd_m_typeName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_typeId; // @synthesize m_typeId=_m_typeId;
@property(retain, nonatomic) NSString *m_typeName; // @synthesize m_typeName=_m_typeName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

