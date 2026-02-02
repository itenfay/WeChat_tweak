//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

@interface WXGChatLogRecoverFilter : NSObject
{
    NSData *_encryptData;
    NSMutableDictionary *_decryptorDict;
    NSMutableDictionary *_dataContainerDict;
    NSMutableDictionary *_startOffsetDict;
    NSMutableDictionary *_writeOffsetDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *writeOffsetDict; // @synthesize writeOffsetDict=_writeOffsetDict;
@property(retain, nonatomic) NSMutableDictionary *startOffsetDict; // @synthesize startOffsetDict=_startOffsetDict;
@property(retain, nonatomic) NSMutableDictionary *dataContainerDict; // @synthesize dataContainerDict=_dataContainerDict;
@property(retain, nonatomic) NSMutableDictionary *decryptorDict; // @synthesize decryptorDict=_decryptorDict;
@property(retain, nonatomic) NSData *encryptData; // @synthesize encryptData=_encryptData;
- (unsigned long long)writeDataPush:(id)arg1 toPath:(id)arg2;
- (void)checkDataIntegrity;
- (id)initWithEncryptData:(id)arg1;

@end

