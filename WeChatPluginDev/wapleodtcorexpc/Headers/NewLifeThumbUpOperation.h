//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface NewLifeThumbUpOperation : NSObject
{
    _Bool _thumbUp;
    _Bool _active;
    int _scene;
    int _enterScene;
    NSString *_feedId;
    NSString *_encryptId;
    NSString *_nonceId;
    NSString *_sessionBuffer;
    NSNumber *_newlifeType;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSNumber *newlifeType; // @synthesize newlifeType=_newlifeType;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *encryptId; // @synthesize encryptId=_encryptId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic, getter=isThumbUp) _Bool thumbUp; // @synthesize thumbUp=_thumbUp;
- (unsigned long long)hash;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isValid;

@end

