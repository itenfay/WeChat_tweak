//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderJumpNativeHotWord;

@interface WCFinderJumpNativeSearchParams : NSObject
{
    int _scene;
    NSString *_feedTid;
    unsigned long long _streamEntranceType;
    WCFinderJumpNativeHotWord *_objectHotWord;
    NSString *_objHotwordInfoBuffString;
    NSData *_objHotwordInfoBuff;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @synthesize objHotwordInfoBuff=_objHotwordInfoBuff;
@property(copy, nonatomic) NSString *objHotwordInfoBuffString; // @synthesize objHotwordInfoBuffString=_objHotwordInfoBuffString;
@property(retain, nonatomic) WCFinderJumpNativeHotWord *objectHotWord; // @synthesize objectHotWord=_objectHotWord;
@property(nonatomic) unsigned long long streamEntranceType; // @synthesize streamEntranceType=_streamEntranceType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *feedTid; // @synthesize feedTid=_feedTid;

@end

