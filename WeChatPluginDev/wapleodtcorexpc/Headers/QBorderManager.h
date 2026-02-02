//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, QBorder;

@interface QBorderManager : NSObject
{
    int _version;
    NSMutableDictionary *_borderDict;
    QBorder *_inlandBorder;
    QBorder *_chinaBorder;
    QBorder *_dataSafetyInlandBorder;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) QBorder *dataSafetyInlandBorder; // @synthesize dataSafetyInlandBorder=_dataSafetyInlandBorder;
@property(retain, nonatomic) QBorder *chinaBorder; // @synthesize chinaBorder=_chinaBorder;
@property(retain, nonatomic) QBorder *inlandBorder; // @synthesize inlandBorder=_inlandBorder;
@property(retain, nonatomic) NSMutableDictionary *borderDict; // @synthesize borderDict=_borderDict;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)setupBorders;
- (void)setupSelfWithFrontierDict:(id)arg1;
- (void)setupSelf;
- (id)init;
- (_Bool)updateFrontierData:(id)arg1;
- (void)downloadNewFrontierData:(id)arg1;
- (id)readLocalFrontierFile;
- (id)getFrontierFilePath;
- (_Bool)containsMapRect:(CDStruct_02837cd9)arg1 in:(id)arg2;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1 in:(id)arg2;
- (_Bool)checkMapStatus:(id)arg1 withLogoSource:(id)arg2;
- (_Bool)dataSafetyInlandContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)chinaContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)chinaContainsMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)shouldCorrectCoordinateToGCJ02:(struct CLLocationCoordinate2D)arg1;

@end

