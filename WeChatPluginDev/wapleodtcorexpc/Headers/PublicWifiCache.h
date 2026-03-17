//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface PublicWifiCache : NSObject
{
    NSMutableDictionary *_notRegisterDict;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *notRegisterDict; // @synthesize notRegisterDict=_notRegisterDict;
- (id)retrivalApAuthForSsid:(id)arg1;
- (_Bool)removeApBase:(id)arg1;
- (id)retrivalApBaseForMac:(id)arg1;
- (_Bool)saveApBase:(id)arg1;
- (void)cleanCache;
- (void)closeDB;
- (void)initDB;
- (_Bool)shouldUserConfirm;
- (void)userConfirm;
- (id)init;
- (void)dealloc;

@end

