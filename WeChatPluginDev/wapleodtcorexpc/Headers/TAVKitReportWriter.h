//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TAVKitReportWriter : NSObject
{
    NSString *_encryptKey;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directory;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
- (void)createDirectoryIfNeeded;
- (void)writeReport:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)stroagePath;
- (void)setStrorageDirectory:(id)arg1;
- (id)stroageDirectory;
- (id)init;

@end

