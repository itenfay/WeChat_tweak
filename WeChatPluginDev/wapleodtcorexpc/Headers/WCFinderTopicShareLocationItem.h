//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTopicShareLocationItem : NSObject
{
    NSString *_poiClassifyId;
    double _latitude;
    double _longitude;
}

+ (void)initialize;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_poiClassifyId;
- (void).cxx_destruct;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

