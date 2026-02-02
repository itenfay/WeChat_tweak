//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString, OMCGeographicInfo;

@interface OMCWhenWhereSegment
{
}

@property(readonly, nonatomic) SharedPtr_68ff3a12 backingWhenWhereSegment;
- (_Bool)isEditingState;
- (void)leaveEditingState;
- (void)enterEditingState;
- (_Bool)updateStyleWithMaterialID:(id)arg1;
- (_Bool)updateLocationWithGeoInfo:(id)arg1;
- (_Bool)updateTimestampWithDate:(id)arg1;
- (unsigned long long)dateTimeDisplayOptions;
- (_Bool)isDisplayingLocation;
- (_Bool)isDisplayingDateTime;
@property(readonly, nonatomic) OMCGeographicInfo *geoInfo;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) NSString *materialID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

