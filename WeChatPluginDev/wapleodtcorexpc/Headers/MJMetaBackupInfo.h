//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString, OMCGeographicInfo;

@interface MJMetaBackupInfo : NSObject
{
    NSString *_materialID;
    NSDate *_timestamp;
    OMCGeographicInfo *_geoInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMCGeographicInfo *geoInfo; // @synthesize geoInfo=_geoInfo;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *materialID; // @synthesize materialID=_materialID;

@end

