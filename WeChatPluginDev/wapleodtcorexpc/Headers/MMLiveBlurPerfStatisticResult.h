//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveBlurPerfStatisticResult
{
    double _sumComposeArea;
    double _sumComposeAreaPercent;
}

@property(nonatomic) double sumComposeAreaPercent; // @synthesize sumComposeAreaPercent=_sumComposeAreaPercent;
@property(nonatomic) double sumComposeArea; // @synthesize sumComposeArea=_sumComposeArea;
- (void)addBlurPerfRecord:(id)arg1;

@end

