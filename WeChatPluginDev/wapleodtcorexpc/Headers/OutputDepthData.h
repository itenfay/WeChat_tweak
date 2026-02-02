//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface OutputDepthData : NSObject
{
    float _median;
    float _offset;
    float _averageAngle;
    NSArray *_five_points;
    NSData *_depth_data;
    NSData *_image_data;
    NSString *_checksum;
    long long _capture_time;
}

- (void).cxx_destruct;
@property(nonatomic) float averageAngle; // @synthesize averageAngle=_averageAngle;
@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(nonatomic) float median; // @synthesize median=_median;
@property(nonatomic) long long capture_time; // @synthesize capture_time=_capture_time;
@property(retain, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(retain, nonatomic) NSData *image_data; // @synthesize image_data=_image_data;
@property(retain, nonatomic) NSData *depth_data; // @synthesize depth_data=_depth_data;
@property(retain, nonatomic) NSArray *five_points; // @synthesize five_points=_five_points;
- (id)dictionaryRepresentation;

@end

