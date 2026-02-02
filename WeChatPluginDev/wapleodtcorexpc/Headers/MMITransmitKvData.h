//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMITransmitKvData : NSObject
{
    struct Handle<std::shared_ptr<kinda::ITransmitKvData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getStringList:(id)arg1;
- (id)getLongList:(id)arg1;
- (id)getBoolList:(id)arg1;
- (id)getIntList:(id)arg1;
- (id)getPlatformCallback:(id)arg1;
- (id)getKvData:(id)arg1;
- (id)getJSEvent:(id)arg1;
- (id)getBinary:(id)arg1;
- (id)getString:(id)arg1;
- (long long)getLong:(id)arg1;
- (_Bool)getBool:(id)arg1;
- (int)getInt:(id)arg1;
- (void)modifyBool:(id)arg1 val:(_Bool)arg2;
- (void)modifyInt:(id)arg1 val:(int)arg2;
- (void)putListString:(id)arg1 val:(id)arg2;
- (void)putListLong:(id)arg1 val:(id)arg2;
- (void)putListBool:(id)arg1 val:(id)arg2;
- (void)putListInt:(id)arg1 val:(id)arg2;
- (void)putPlatformCallback:(id)arg1 val:(id)arg2;
- (void)putKvData:(id)arg1 val:(id)arg2;
- (void)putJSEvent:(id)arg1 val:(id)arg2;
- (void)putBinary:(id)arg1 val:(id)arg2;
- (void)putString:(id)arg1 val:(id)arg2;
- (void)putLong:(id)arg1 val:(long long)arg2;
- (void)putBool:(id)arg1 val:(_Bool)arg2;
- (void)putInt:(id)arg1 val:(int)arg2;
- (id)allKeys;
- (id)initWithCpp:(const void *)arg1;

@end

