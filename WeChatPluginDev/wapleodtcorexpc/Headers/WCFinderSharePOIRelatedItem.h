//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderSharePOIRelatedItem
{
    NSString *_latitudeString;
    NSString *_longitudeString;
    NSString *_poiName;
    NSString *_poiScaleString;
    NSString *_address;
    NSString *_infoUrl;
    NSString *_poiClassifyId;
    NSString *_poiCategories;
}

+ (id)nodeName;
+ (void)initialize;
+ (void)PBArrayAdd_poiCategories;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_infoUrl;
+ (void)PBArrayAdd_address;
+ (void)PBArrayAdd_poiScaleString;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_longitudeString;
+ (void)PBArrayAdd_latitudeString;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *poiCategories; // @synthesize poiCategories=_poiCategories;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(copy, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *poiScaleString; // @synthesize poiScaleString=_poiScaleString;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *longitudeString; // @synthesize longitudeString=_longitudeString;
@property(copy, nonatomic) NSString *latitudeString; // @synthesize latitudeString=_latitudeString;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(_Bool)arg3;
- (id)momentsDesc;
- (id)chatDesc;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

@end

