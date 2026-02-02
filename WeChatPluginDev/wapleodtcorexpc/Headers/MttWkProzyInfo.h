//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MttWkProzyInfo : NSObject
{
    _Bool _is64os;
    NSString *_phoneID;
    NSString *_segName;
    NSString *_segtionName;
    long long _offset;
    NSString *_rootMemory;
    long long _checkOffset;
    NSString *_checkClass;
    NSString *_checkMethod;
}

+ (void)removePreloadItems;
+ (void)savePreloadItems:(id)arg1;
+ (id)preloadProzyInfosFromFile;
+ (id)prozyInfoFromFile;
+ (id)prozyInfoWithFilePath:(id)arg1;
+ (id)preloadFilePathWithName:(id)arg1;
+ (id)filePath;
+ (id)infoWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *checkMethod; // @synthesize checkMethod=_checkMethod;
@property(retain, nonatomic) NSString *checkClass; // @synthesize checkClass=_checkClass;
@property(nonatomic) long long checkOffset; // @synthesize checkOffset=_checkOffset;
@property(retain, nonatomic) NSString *rootMemory; // @synthesize rootMemory=_rootMemory;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *segtionName; // @synthesize segtionName=_segtionName;
@property(retain, nonatomic) NSString *segName; // @synthesize segName=_segName;
@property(nonatomic) _Bool is64os; // @synthesize is64os=_is64os;
@property(retain, nonatomic) NSString *phoneID; // @synthesize phoneID=_phoneID;
- (void).cxx_destruct;
- (void)saveToFileWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveToFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)toDictionary;

@end

