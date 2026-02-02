//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface QPointEventMarker
{
    _Bool _avoidOtherAnnotations;
    int _geotype;
    int _markerID;
    NSString *_iconPath;
    NSDictionary *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
- (void)setAvoidOtherAnnotations:(_Bool)arg1;
- (_Bool)avoidOtherAnnotations;
- (void)setIconPath:(id)arg1;
- (id)iconPath;
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (int)geotype;
- (void)setGeotype:(int)arg1;

@end

