//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PreEnterShowWCOpenServiceConfig;

@interface PreEnterShowWCOpenServiceStep
{
    PreEnterShowWCOpenServiceConfig *_configObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PreEnterShowWCOpenServiceConfig *configObj; // @synthesize configObj=_configObj;
- (void)startStep;
@property(readonly, nonatomic) _Bool isValid;
- (id)configWithContent:(id)arg1;
- (id)initWithMsg:(id)arg1;

@end

