//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderOrderShareItem : NSObject
{
    unsigned int _productsCount;
    NSString *_orderID;
    NSString *_products;
    NSString *_priceWording;
    NSString *_stateWording;
    NSString *_productImageURL;
    NSString *_appID;
    NSString *_path;
}

+ (id)shareItemWith:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_productImageURL;
+ (void)PBArrayAdd_stateWording;
+ (void)PBArrayAdd_priceWording;
+ (void)PBArrayAdd_productsCount;
+ (void)PBArrayAdd_products;
+ (void)PBArrayAdd_orderID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *productImageURL; // @synthesize productImageURL=_productImageURL;
@property(copy, nonatomic) NSString *stateWording; // @synthesize stateWording=_stateWording;
@property(copy, nonatomic) NSString *priceWording; // @synthesize priceWording=_priceWording;
@property(nonatomic) unsigned int productsCount; // @synthesize productsCount=_productsCount;
@property(copy, nonatomic) NSString *products; // @synthesize products=_products;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
- (id)initWith:(id)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
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

