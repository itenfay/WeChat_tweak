//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface MMWormholeFileTransiting : NSObject
{
    NSFileManager *_fileManager;
    NSString *_applicationGroupIdentifier;
    NSString *_directory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(copy, nonatomic) NSString *applicationGroupIdentifier; // @synthesize applicationGroupIdentifier=_applicationGroupIdentifier;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)deleteContentForIdentifier:(id)arg1;
- (id)messageObjectForIdentifier:(id)arg1;
- (_Bool)writeMessageObject:(id)arg1 forIdentifier:(id)arg2;
- (id)filePathForIdentifier:(id)arg1;
- (id)messagePassingDirectoryPath;
- (void)checkAppGroupCapabilities;
- (id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

