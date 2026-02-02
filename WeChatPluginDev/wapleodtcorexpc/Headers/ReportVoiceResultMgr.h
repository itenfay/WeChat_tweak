//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ReportVoiceResultMgr
{
    long long _scene;
}

@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReportResult:(id)arg1 AndResult:(id)arg2;
- (void)dealloc;

@end

