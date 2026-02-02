//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAMediaCastingUpnpCommand_Seek
{
    double _position;
}

+ (id)commandWithPosition:(double)arg1;
@property(nonatomic) double position; // @synthesize position=_position;
- (id)commandXMLBodyString;
- (id)toTimeString:(double)arg1;
- (id)initWithPosition:(double)arg1;

@end

