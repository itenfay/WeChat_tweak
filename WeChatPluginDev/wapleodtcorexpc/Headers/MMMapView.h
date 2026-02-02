//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMMapView
{
    unsigned int _actionType;
}

+ (_Bool)enableOverseaServerProtocol;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (void)mapViewLogger:(id)arg1 logMessage:(id)arg2;
- (id)userLocation;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

@end

