//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageWhiteBalanceFilter
{
    int temperatureUniform;
    int tintUniform;
    double _temperature;
    double _tint;
}

@property(nonatomic) double tint; // @synthesize tint=_tint;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
- (id)init;

@end

