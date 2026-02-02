//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface QCustomLayerConfigItem : NSObject
{
    NSString *_layerid;
    NSString *_url;
    NSString *_version;
    NSArray *_params;
    double _zoom_max;
    double _zoom_min;
    NSDictionary *_originJSON;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *originJSON; // @synthesize originJSON=_originJSON;
@property(readonly, nonatomic) double zoom_min; // @synthesize zoom_min=_zoom_min;
@property(readonly, nonatomic) double zoom_max; // @synthesize zoom_max=_zoom_max;
@property(readonly, nonatomic) NSArray *params; // @synthesize params=_params;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *layerid; // @synthesize layerid=_layerid;
- (id)initWithJSON:(id)arg1;

@end

