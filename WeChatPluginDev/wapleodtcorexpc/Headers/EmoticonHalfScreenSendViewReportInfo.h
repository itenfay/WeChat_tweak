//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonHalfScreenSendViewReportInfo : NSObject
{
    unsigned long long _scene;
    unsigned long long _searchID;
    NSString *_sessionID;
    long long _emoticonScene;
    long long _addEmoticonSource;
    NSString *_sdkRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sdkRequestID; // @synthesize sdkRequestID=_sdkRequestID;
@property(nonatomic) long long addEmoticonSource; // @synthesize addEmoticonSource=_addEmoticonSource;
@property(nonatomic) long long emoticonScene; // @synthesize emoticonScene=_emoticonScene;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)init;

@end

