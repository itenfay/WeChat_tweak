//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPageFastLoadWXPicDecoder : NSObject
{
    NSString *_sceneTag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneTag; // @synthesize sceneTag=_sceneTag;
- (id)contentTypeForData:(id)arg1;
- (int)convertPicType:(id)arg1;
- (id)decodePossibleWxPic:(id)arg1 withImageType:(id)arg2;
- (id)initWithSceneTag:(id)arg1;

@end

