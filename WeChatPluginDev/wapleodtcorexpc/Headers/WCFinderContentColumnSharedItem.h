//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderContentColumnSharedItem : NSObject
{
    NSString *_title;
    NSString *_iconUrl;
    NSString *_iconUrl_1;
    NSString *_iconUrl_2;
    NSString *_iconUrl_3;
    NSData *_cardbuffer;
    NSString *_base64Cardbuffer;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_base64Cardbuffer;
+ (void)PBArrayAdd_cardbuffer;
+ (void)PBArrayAdd_iconUrl_3;
+ (void)PBArrayAdd_iconUrl_2;
+ (void)PBArrayAdd_iconUrl_1;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *base64Cardbuffer; // @synthesize base64Cardbuffer=_base64Cardbuffer;
@property(copy, nonatomic) NSData *cardbuffer; // @synthesize cardbuffer=_cardbuffer;
@property(copy, nonatomic) NSString *iconUrl_3; // @synthesize iconUrl_3=_iconUrl_3;
@property(copy, nonatomic) NSString *iconUrl_2; // @synthesize iconUrl_2=_iconUrl_2;
@property(copy, nonatomic) NSString *iconUrl_1; // @synthesize iconUrl_1=_iconUrl_1;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setCardBufferWithoutBase64:(id)arg1;
- (id)onlyTitleForShared;
- (void)appendXMLNodeForField:(SEL)arg1 toXML:(id)arg2;
- (id)toXML;
- (id)parseStringFieldFromXML:(struct XmlReaderNode_t *)arg1 key:(id)arg2;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
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

