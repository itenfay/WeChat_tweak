//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface KSUPnPAction_RenderingControl_SetVolume
{
    long long _volume;
}

@property(nonatomic) long long volume; // @synthesize volume=_volume;
- (id)generateXMLForActionArguments;
- (id)actionName;

@end

