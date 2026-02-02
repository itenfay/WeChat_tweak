//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QMStreamEncrypt : NSObject
{
    struct IStreamEncryptAndDecrypt *_streamEncryptAndDecrypt;
    NSString *_ekey;
    long long _tailSize;
}

+ (struct IStreamEncryptAndDecrypt *)createStreamEncryptIns:(id)arg1;
+ (_Bool)writeEKeyToEndOfFile:(id)arg1 ekey:(id)arg2;
+ (_Bool)fileIsExistWithPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long tailSize; // @synthesize tailSize=_tailSize;
@property(readonly, nonatomic) NSString *ekey; // @synthesize ekey=_ekey;
- (_Bool)isValidFile:(id)arg1;
- (_Bool)checkFileHeader:(id)arg1;
- (_Bool)readEKeyFromFileHandle:(id)arg1;
- (_Bool)writeEKeyToEndOfFile:(id)arg1;
- (void)streamEncrypt:(char *)arg1 offset:(unsigned long long)arg2 size:(int)arg3;
- (void)streamDecrypt:(char *)arg1 offset:(unsigned long long)arg2 size:(int)arg3;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;
- (id)initWithEKey:(id)arg1;

@end

