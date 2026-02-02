//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPOIInfo : NSObject
{
    double _scale;
    NSString *_bid;
    NSString *_address;
    NSString *_poiName;
    NSString *_infoUrl;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

