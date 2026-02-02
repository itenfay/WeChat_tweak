//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCRuleOneScheduler
{
    double _lapseRate;
    double _sliceTime;
}

@property(nonatomic) double sliceTime; // @synthesize sliceTime=_sliceTime;
@property(nonatomic) double lapseRate; // @synthesize lapseRate=_lapseRate;
- (double)getNextDownloadTimeWhenPlaying;

@end

