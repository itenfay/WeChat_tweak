//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface QDataLayerConfigItem : NSObject
{
    NSString *_layerid;
    NSString *_url;
    NSString *_cfg_ver;
    NSString *_data_ver;
    NSArray *_params;
    NSDictionary *_originJSON;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *originJSON; // @synthesize originJSON=_originJSON;
@property(readonly, nonatomic) NSArray *params; // @synthesize params=_params;
@property(readonly, nonatomic) NSString *data_ver; // @synthesize data_ver=_data_ver;
@property(readonly, nonatomic) NSString *cfg_ver; // @synthesize cfg_ver=_cfg_ver;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *layerid; // @synthesize layerid=_layerid;
- (id)initWithJSON:(id)arg1;

@end

