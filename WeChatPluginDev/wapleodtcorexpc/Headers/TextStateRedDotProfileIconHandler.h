//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSCalendar, NSString, TextStateRedDotProfileIconConfig;

@interface TextStateRedDotProfileIconHandler
{
    NSCalendar *_calendar;
    MemoryMappedKV *_mmkv;
    NSString *_configString;
    TextStateRedDotProfileIconConfig *_config;
}

+ (id)keyFromDuration:(struct _NSRange)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TextStateRedDotProfileIconConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *configString; // @synthesize configString=_configString;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (_Bool)dispose;
- (_Bool)active;
- (void)onConfigChange;
- (unsigned int)configType;
- (struct _NSRange)hitDuration;
- (void)reloadConfigIfNeeded;
- (id)init;

@end

