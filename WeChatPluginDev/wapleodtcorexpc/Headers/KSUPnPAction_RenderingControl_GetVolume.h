//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface KSUPnPAction_RenderingControl_GetVolume
{
    long long _volume;
}

@property(readonly, nonatomic) long long volume; // @synthesize volume=_volume;
- (_Bool)parseActionBodyFromXMLData:(id)arg1;
- (id)generateXMLForActionArguments;
- (id)actionName;

@end

