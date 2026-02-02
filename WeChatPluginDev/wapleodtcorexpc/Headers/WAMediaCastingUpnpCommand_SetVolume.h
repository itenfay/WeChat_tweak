//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAMediaCastingUpnpCommand_SetVolume
{
    double _volume;
}

+ (id)commandWithVolume:(double)arg1;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (id)commandXMLBodyString;
- (id)initWithVolume:(double)arg1;

@end

