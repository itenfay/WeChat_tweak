//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QIndoorInfo;

@interface QPointAnnotation
{
    _Bool _lockedToScreen;
    NSString *_title;
    NSString *_subtitle;
    QIndoorInfo *_indoorInfo;
    struct CLLocationCoordinate2D _coordinate;
    struct CGPoint _lockedScreenPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QIndoorInfo *indoorInfo; // @synthesize indoorInfo=_indoorInfo;
@property(nonatomic) struct CGPoint lockedScreenPoint; // @synthesize lockedScreenPoint=_lockedScreenPoint;
@property(nonatomic) _Bool lockedToScreen; // @synthesize lockedToScreen=_lockedToScreen;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)notTriggerKVOToSetCoordinate:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

