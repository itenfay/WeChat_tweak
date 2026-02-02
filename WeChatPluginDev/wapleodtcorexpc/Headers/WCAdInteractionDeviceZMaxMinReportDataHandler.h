//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdInteractionDeviceZMaxMinReportDataHandler
{
    _Bool _triggerByAcceleration;
    double _maxZ;
    double _minZ;
}

@property(nonatomic) _Bool triggerByAcceleration; // @synthesize triggerByAcceleration=_triggerByAcceleration;
@property(nonatomic) double minZ; // @synthesize minZ=_minZ;
@property(nonatomic) double maxZ; // @synthesize maxZ=_maxZ;
- (id)fetchReportData;
- (void)handleReceivedData:(id)arg1;

@end

