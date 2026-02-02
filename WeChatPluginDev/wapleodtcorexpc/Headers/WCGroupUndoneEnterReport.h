//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCGroupUndoneEnterReport
{
    unsigned int _scene;
    unsigned int _exitType;
}

+ (void)DoGroupUndoneEnterReportWithItem:(id)arg1 scene:(unsigned int)arg2;
@property(nonatomic) unsigned int exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)report;

@end

