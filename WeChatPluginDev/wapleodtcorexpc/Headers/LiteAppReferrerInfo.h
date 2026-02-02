//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LiteAppReferrerInfo : NSObject
{
    unsigned long long _scene;
    NSString *_sceneId;
    NSDictionary *_extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)toJSON;
- (id)init:(unsigned long long)arg1 sceneId:(id)arg2 extraData:(id)arg3;

@end

