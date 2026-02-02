//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADPoiInfo : NSObject
{
    int POIType;
    NSString *POIId;
    NSString *POIName;
    NSString *POILink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *POILink; // @synthesize POILink;
@property(retain, nonatomic) NSString *POIName; // @synthesize POIName;
@property(retain, nonatomic) NSString *POIId; // @synthesize POIId;
@property(nonatomic) int POIType; // @synthesize POIType;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

