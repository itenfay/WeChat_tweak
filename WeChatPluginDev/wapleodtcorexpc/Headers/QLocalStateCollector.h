//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QConfigManager, QConfigPreference, QLocalErrorReporter;

@interface QLocalStateCollector : NSObject
{
    QConfigManager *_configer;
    QLocalErrorReporter *_reporter;
    QConfigPreference *_configPreference;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QConfigPreference *configPreference; // @synthesize configPreference=_configPreference;
@property(retain, nonatomic) QLocalErrorReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak QConfigManager *configer; // @synthesize configer=_configer;
- (void)sendIndoorLocalLogWithMapState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfigPreference:(id)arg1;

@end

