//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject
{
    NSFileManager *_fileManager;
    NSURL *_fileURL;
    unsigned int _systemSoundID;
}

+ (id)sharedLoader;
+ (id)data;
+ (unsigned long long)version;
+ (id)name;
- (void).cxx_destruct;
- (id)_fileURL:(id *)arg1;
- (void)playSound;
- (_Bool)loadSound:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

