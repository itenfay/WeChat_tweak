//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_openWeRunSetting
{
    _Bool _bIsNotCheckDeviceNotSupport;
}

- (void)tryOpenSetting;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;

@end

