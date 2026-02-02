//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasRadarChartItemInfo
{
    NSString *_label;
    NSString *_score;
    double _value;
}

- (void).cxx_destruct;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

